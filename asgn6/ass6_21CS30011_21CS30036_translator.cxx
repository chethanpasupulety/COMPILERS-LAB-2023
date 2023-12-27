#include "ass6_21CS30011_21CS30036_translator.h"
#include <iomanip>
#include <iostream>
using namespace std;

int nextInstr = 0;
symbolTable symTabGlobal;
symbolTable *symTab;

string getInitVal(symbol *sym)
{
    if (sym->initVal != NULL)
    {
        if (sym->type.type == INT)return to_string(sym->initVal->i);
        else if (sym->type.type == CHAR)return to_string(sym->initVal->c);
        else if (sym->type.type == FLOAT)return to_string(sym->initVal->f);
        else return "*";
    }
    return "*";
}

symbol::symbol() : nestedTable(NULL) {}
symbolTable::symbolTable() : offset(0) {}
int symbolTable::tempCount = 0;

string checkType(symbolType t)
{
    if (t.type == VOID) return "void";
    if (t.type == CHAR) return "char";
    if (t.type == INT) return "int";
    if (t.type == FLOAT) return "float";
    if (t.type == FUNCTION) return "function";

    if (t.type == POINTER)
    {
        string tp = "";
        if (t.nextType == CHAR) tp += "char";
        else if (t.nextType == INT) tp += "int";
        else if (t.nextType == FLOAT) tp += "float";
        tp += string(t.pointers, '*');
        return tp;
    }

    if (t.type == ARRAY)
    {
        string tp = "";
        if (t.nextType == CHAR) tp += "char";
        else if (t.nextType == INT) tp += "int";
        else if (t.nextType == FLOAT) tp += "float";
        vector<int> dim = t.dimension;
        for (int i = 0; i < (int)dim.size(); i++)
        {
            if (dim[i]) tp += "[" + to_string(dim[i]) + "]";
            else tp += "[]";
        }
        if ((int)dim.size() == 0) tp += "[]";
        return tp;
    }

    return "unknown";
}


symbol *symbolTable::lookup(string name, dataTypes t, int pc)
{
    if (table.count(name) == 0)
    {
        symbol *sym = new symbol();
        sym->name = name;
        sym->type.type = t;
        sym->offset = offset;
        sym->initVal = NULL;

        if (pc == 0)
        {
            sym->size = typeSz(t);
            offset += sym->size;
        }
        else
        {
            sym->size = 0;
            sym->type.nextType = t;
            sym->type.pointers = pc;
            sym->type.type = ARRAY;
        }
        symbols.push_back(sym);
        table[name] = sym;
    }
    return table[name];
}

symbol *symbolTable::searchGlobal(string name)
{
    return (table.count(name) ? table[name] : NULL);
}

string symbolTable::gentemp(dataTypes t)
{
    string tempName = "t" + to_string(symbolTable::tempCount++);
    symbol *sym = new symbol();
    sym->name = tempName;
    sym->size = typeSz(t);
    sym->offset = offset;
    sym->type.type = t;
    sym->initVal = NULL;

    offset += sym->size;
    symbols.push_back(sym);
    table[tempName] = sym;

    return tempName;
}

int typeSz(dataTypes t)
{
    if (t == VOID) return 0;
    if (t == CHAR) return 1;
    if (t == INT) return 4;
    if (t == POINTER) return 8;
    if (t == FLOAT) return 8;
    if (t == FUNCTION) return 0;
    return 0;
}

void symbolTable::print(string tabName)
{
    for (int i = 0; i < 150; i++)
    {
        cout << "-";
    }
    cout << '\n'<<'\t'<<'\t';
    cout << "Symbol Table: " << setfill(' ') << left << setw(50) << tabName << '\n';
    for (int i = 0; i < 150; i++) cout << "-";
    cout << '\n';
    cout<<'\t'<<'\t';
    cout << setfill(' ') << left << setw(25) << "Name";
    cout << left << setw(25) << "Type";
    cout << left << setw(20) << "Initial Value";
    cout << left << setw(15) << "Size";
    cout << left << setw(15) << "Offset";
    cout << left << "Nested" << '\n';

    for (int i = 0; i < 150; i++) cout << "-";
    cout << '\n';

    vector<pair<string, symbolTable *>> tableList;

    for (int i = 0; i < (int)symbols.size(); i++)
    {
        cout<<'\t'<<'\t';
        symbol *sym = symbols[i];
        cout << left << setw(25) << sym->name;
        cout << left << setw(25) << checkType(sym->type);
        cout << left << setw(20) << getInitVal(sym);
        cout << left << setw(15) << sym->size;
        cout << left << setw(15) << sym->offset;
        cout << left;

        if (sym->nestedTable != NULL)
        {
            string nestedTableName = tabName + "." + sym->name;
            cout << nestedTableName << '\n';
            tableList.push_back({nestedTableName, sym->nestedTable});
        }
        else
            cout << "NULL" << '\n';
    }

    for (int i = 0; i < 150; i++) cout << "-";
    cout << '\n' << '\n';

    for (vector<pair<string, symbolTable *>>::iterator it = tableList.begin(); it != tableList.end(); it++)
    {
        pair<string, symbolTable *> p = (*it);
        p.second->print(p.first);
    }
}

void symbolValue::setInitVal(int val)
{
    c = f = i = val;
    p = NULL;
}

void symbolValue::setInitVal(char val)
{
    c = f = i = val;
    p = NULL;
}

void symbolValue::setInitVal(float val)
{
    c = f = i = val;
    p = NULL;
}

quad::quad(string res_, string arg1_, string arg2_, opcode op_) : op(op_), arg1(arg1_), arg2(arg2_), result(res_) {}

string quad::print()
{
    string out = "";
    if (op >= ADD && op <= MOD)
    {
        out += (result + " = " + arg1 + " ");
        if(op == ADD) out+="+";
        else if(op ==SUB) out+="-";
        else if(op == MULT) out+="*";
        else if(op == DIV) out+="/";
        else if(op == MOD) out+="%";
        out += (" " + arg2);
    }
    else if (op >= U_PLUS && op <= U_NEG)
    {
        out += (result + " = ");
        if(op == U_PLUS) out+="+";
        else if(op == U_MINUS) out+= "-";
        else if(op == REFERENCE) out+= "&";
        else if(op == DEREFERENCE) out+="*";
        else if(op == U_NEG) out+="!";
        out += arg1;
    }
    else if (op >= GOTO_EQ && op <= IF_FALSE_GOTO)
    {
        out += ("if " + arg1 + " ");

        if(op == GOTO_EQ) out+= "==";
        else if(op == GOTO_NEQ) out+="!=";
        else if(op == GOTO_GT) out+=">";
        else if(op == GOTO_GTE) out+=">=";
        else if(op == GOTO_LT) out+="<";
        else if(op == GOTO_LTE) out+="<=";
        else if(op == IF_GOTO) out+="!= 0";
        else if(op == IF_FALSE_GOTO) out+="== 0";
        out += (" " + arg2 + " goto " + result);
    }
    else if (op == ASSIGN) out += (result + " = " + arg1);
    else if (op == GOTO) out += ("goto " + result);
    else if (op == RETURN) out += ("return " + result);
    else if (op == PARAM) out += ("param " + result);
    else if (op == CALL)
    {
        if (arg2.size() > 0) out += (arg2 + " = ");
        out += ("call " + result + ", " + arg1);
    }
    else if (op == ARR_IND_BRAC) out += (result + " = " + arg1 + "[" + arg2 + "]");
    else if (op == ARR_IND_ANS) out += (result + "[" + arg2 + "] = " + arg1);
    else if (op == FUNC_BEGIN) out += (result + ": ");
    else if (op == FUNC_END) out += ("function " + result + " ends");
    else if (op == L_DEREF) out += ("*" + result + " = " + arg1);
    return out;
}

void quad::quadprint()
{
    cout<<left<<setw(20)<<op;
    cout<<left<<setw(20)<<arg1;
    cout<<left<<setw(20)<<arg2;
    cout<<left<<setw(20)<<result;

}

void quadArray::print()
{
    for (int i = 0; i < 120; i++)
        cout << "-";
    cout << '\n';
    cout<<"\t\t";
    cout << "THREE ADDRESS CODE (TAC):" << '\n';
    for (int i = 0; i < 120; i++)
        cout << "-";
    cout << '\n';

    for (int i = 0; i < (int)quads.size(); i++)
    {
        cout<<"\t\t";
        if (quads[i].op != FUNC_BEGIN && quads[i].op != FUNC_END)cout  << i << ":    ";
        else if (quads[i].op == FUNC_BEGIN)cout << '\n'<<"\t\t" << i << ":    ";
        else if (quads[i].op == FUNC_END)cout << i << ":    ";
        cout << quads[i].print() << '\n';
    }
    cout << '\n';
}

expression::expression() : fold(0), folder(NULL) {}

quadArray quadList;

void emit(string result, string arg1, string arg2, opcode op)
{
    quad q(result, arg1, arg2, op);
    quadList.quads.push_back(q);
    nextInstr++;
}

void emit(string result, int constant, opcode op)
{
    quad q(result, to_string(constant), "", op);
    quadList.quads.push_back(q);
    nextInstr++;
}

void emit(string result, char constant, opcode op)
{
    quad q(result, to_string(constant), "", op);
    quadList.quads.push_back(q);
    nextInstr++;
}

void emit(string result, float constant, opcode op)
{
    quad q(result, to_string(constant), "", op);
    quadList.quads.push_back(q);
    nextInstr++;
}

list<int> makelist(int i)
{
    list<int> l(1, i);
    return l;
}

list<int> merge(list<int> list1, list<int> list2)
{
    list1.merge(list2);
    return list1;
}

void backpatch(list<int> l, int address)
{
    string str = to_string(address);
    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        quadList.quads[*it].result = str;
    }
}

void convertIntToBool(expression *expr)
{
    if (expr->type != BOOL)
    {
        expr->type = BOOL;
        expr->falselist = makelist(nextInstr);
        emit("", expr->loc, "", IF_FALSE_GOTO);
        expr->truelist = makelist(nextInstr);
        emit("", "", "", GOTO);
    }
}