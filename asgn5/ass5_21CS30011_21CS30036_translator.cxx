#include "ass5_21CS30011_21CS30036_translator.h"
#include <iomanip>
using namespace std;

symbol *currSymb;
symbolTable *currSymTab;
symbolTable *globalSymTab;
quadArray quadList;
int SymTabCount;
string blockName;
string varType;

symbolType::symbolType(string type, symbolType *arrType, int width) : type(type), width(width), arrType(arrType) {}

symbol::symbol(string name, string t, symbolType *arrType, int width) : name(name), value("-"), offset(0), nestedTable(NULL)
{
    type = new symbolType(t, arrType, width);
    size = typeSz(type);
}

symbol *symbol::update(symbolType *t)
{
    type = t;
    size = typeSz(t);
    return this;
}

symbolTable::symbolTable(string name_) : name(name_), tempCount(0) {}

symbol *symbolTable::lookup(string name)
{
    for (list<symbol>::iterator it = table.begin(); it != table.end(); it++)
    {
        if (it->name == name)
        {
            return &(*it);
        }
    }

    symbol *s = NULL;
    if (this->parent != NULL)
    {
        s = this->parent->lookup(name);
    }

    if (currSymTab == this && s == NULL)
    {
        symbol *sym = new symbol(name);
        table.push_back(*sym);
        return &(table.back());
    }
    else if (s != NULL)
    {
        return s;
    }

    return NULL;
}

symbol *symbolTable::gentemp(symbolType *t, string initValue)
{
    string name = "t" + to_string(currSymTab->tempCount++);
    symbol *sym = new symbol(name);
    sym->type = t;
    sym->value = initValue;
    sym->size = typeSz(t);

    currSymTab->table.push_back(*sym);
    return &(currSymTab->table.back());
}

void symbolTable::print()
{
    for (int i = 0; i < 150; i++)
    {
        cout << '-';
    }
    cout << '\n';
    cout<<"\t\t";
    cout << "Symbol Table: " << setfill(' ') << left << setw(50) << this->name;
    cout << "Parent Table: " << setfill(' ') << left << setw(50) << ((this->parent != NULL) ? this->parent->name : "NULL") << '\n';
    cout<<"\t\t";
    cout << setfill(' ') << left << setw(25) << "Name";
    cout << left << setw(25) << "Type";
    cout << left << setw(20) << "Initial Value";
    cout << left << setw(15) << "Size";
    cout << left << setw(15) << "Offset";
    cout << left << "Nested" << '\n';

    for (int i = 0; i < 150; i++)
    {
        cout << '-';
    }
    cout << '\n';

    list<symbolTable *> tableList;

    for (list<symbol>::iterator it = this->table.begin(); it != this->table.end(); it++)
    {
        cout<<"\t\t";
        cout << left << setw(25) << it->name;
        cout << left << setw(25) << checkType(it->type);
        cout << left << setw(20) << (it->value != "" ? it->value : "-");
        cout << left << setw(15) << it->size;
        cout << left << setw(15) << it->offset;
        cout << left;

        if (it->nestedTable != NULL)
        {
            cout << it->nestedTable->name << '\n';
            tableList.push_back(it->nestedTable);
        }
        else
        {
            cout << "NULL" << '\n';
        }
    }

    for (int i = 0; i < 150; i++)
    {
        cout << '-';
    }
    cout << '\n' << '\n';

    for (list<symbolTable *>::iterator it = tableList.begin(); it != tableList.end(); it++)
    {
        (*it)->print();
    }
}

void symbolTable::update()
{
    list<symbolTable *> tableList;
    int off_set;

    for (list<symbol>::iterator it = table.begin(); it != table.end(); it++)
    {
        if (it == table.begin())
        {
            it->offset = 0;
            off_set = it->size;
        }
        else
        {
            it->offset = off_set;
            off_set = it->offset + it->size;
        }

        if (it->nestedTable != NULL)
        {
            tableList.push_back(it->nestedTable);
        }
    }

    for (list<symbolTable *>::iterator iter = tableList.begin(); iter != tableList.end(); iter++)
    {
        (*iter)->update();
    }
}

quad::quad(string res, string arg1, string operation, string arg2) : result(res), arg1(arg1), op(operation), arg2(arg2) {}

quad::quad(string res, int arg1_, string operation, string arg2) : result(res), op(operation), arg2(arg2)
{
    arg1 = to_string(arg1_);
}

quad::quad(string res, float arg1_, string operation, string arg2) : result(res), op(operation), arg2(arg2)
{
    arg1 = to_string(arg1_);
}

void quad::print()
{
    if (op == "=") cout << result << " = " << arg1;
    else if (op == "*=") cout << "*" << result << " = " << arg1;
    else if (op == "[]=") cout << result << "[" << arg1 << "]" << " = " << arg2;
    else if (op == "=[]") cout << result << " = " << arg1 << "[" << arg2 << "]";
    else if (op == "goto" || op == "param" || op == "return")cout << op << " " << result;
    else if (op == "call") cout << result << " = "<< "call " << arg1 << ", " << arg2;
    else if (op == "label") cout << result << ": ";
    else if (op == "+" || op == "-" || op == "*" || op == "/" || op == "%" || op == "^" || op == "|" || op == "&" || op == "<<" || op == ">>")cout << result << " = " << arg1 << " " << op << " " << arg2;
    else if (op == "==" || op == "!=" || op == "<" || op == ">" || op == "<=" || op == ">=") cout << "if " << arg1 << " " << op << " " << arg2 << " goto " << result;
    else if (op == "= &" || op == "= *" || op == "= -" || op == "= ~" || op == "= !") cout << result << " " << op << arg1;
    else cout << "Unknown Operator";
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
    cout << "THREE ADDRESS CODE (TAC):" << '\n';
    int cnt = 0;

    for (vector<quad>::iterator it = this->quads.begin(); it != this->quads.end(); it++, cnt++)
    {
        cout<<"\t\t";
        if (it->op != "label")
        {
            cout << left << setw(4) << cnt << ":    ";
            it->print();
        }
        else
        {
            cout << '\n'<<"\t\t"<< left << setw(4) << cnt << ": ";
            it->print();
        }
        cout << '\n';
    }
}

void emit(string op, string result, string arg1, string arg2)
{
    quad *q = new quad(result, arg1, op, arg2);
    quadList.quads.push_back(*q);
}

void emit(string op, string result, int arg1, string arg2)
{
    quad *q = new quad(result, arg1, op, arg2);
    quadList.quads.push_back(*q);
}

void emit(string op, string result, float arg1, string arg2)
{
    quad *q = new quad(result, arg1, op, arg2);
    quadList.quads.push_back(*q);
}

list<int> makelist(int i)
{
    list<int> l(1, i);
    return l;
}

list<int> merge(list<int> &list1, list<int> &list2)
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

bool typecheck(symbol *&s1, symbol *&s2)
{
    symbolType *t1 = s1->type;
    symbolType *t2 = s2->type;

    if (typecheck(t1, t2)) return true;
    else if (s1 = convertType(s1, t2->type)) return true;
    else if (s2 = convertType(s2, t1->type)) return true;
    else return false;
}

bool typecheck(symbolType *t1, symbolType *t2)
{
    if (t1 == NULL && t2 == NULL) return true;
    else if (t1 == NULL || t2 == NULL) return false;
    else if (t1->type != t2->type) return false;
    return typecheck(t1->arrType, t2->arrType);
}

symbol *convertType(symbol *s, string t)
{
    symbol *temp = symbolTable::gentemp(new symbolType(t));

    if (s->type->type == "float")
    {
        if (t == "int")
        {
            emit("=", temp->name, "float2int(" + s->name + ")");
            return temp;
        }
        else if (t == "char")
        {
            emit("=", temp->name, "float2char(" + s->name + ")");
            return temp;
        }
        return s;
    }

    else if (s->type->type == "int")
    {
        if (t == "float")
        {
            emit("=", temp->name, "int2float(" + s->name + ")");
            return temp;
        }
        else if (t == "char")
        {
            emit("=", temp->name, "int2char(" + s->name + ")");
            return temp;
        }
        return s;
    }

    else if (s->type->type == "char")
    {
        if (t == "float")
        {
            emit("=", temp->name, "char2float(" + s->name + ")");
            return temp;
        }
        else if (t == "int")
        {
            emit("=", temp->name, "char2int(" + s->name + ")");
            return temp;
        }
        return s;
    }

    return s;
}

expression *convertIntToBool(expression *expr)
{
    if (expr->type != "bool")
    {
        expr->falselist = makelist(nextInstr()); // Add falselist for boolean expressions
        emit("==", expr->loc->name, "0");
        expr->truelist = makelist(nextInstr()); // Add truelist for boolean expressions
        emit("goto", "");
    }
    return expr;
}

expression *convertBoolToInt(expression *expr)
{
    if (expr->type == "bool")
    {
        expr->loc = symbolTable::gentemp(new symbolType("int"));
        backpatch(expr->truelist, nextInstr());
        emit("=", expr->loc->name, "true");
        emit("goto", to_string(nextInstr() + 1));
        backpatch(expr->falselist, nextInstr());
        emit("=", expr->loc->name, "false");
    }
    return expr;
}

void switchTable(symbolTable *newTable)
{
    currSymTab = newTable;
}

int nextInstr()
{
    return quadList.quads.size();
}

int typeSz(symbolType *t)
{
    if (t->type == "void") return __VOID_SIZE;
    else if (t->type == "char") return __CHARACTER_SIZE;
    else if (t->type == "int") return __INTEGER_SIZE;
    else if (t->type == "ptr") return __POINTER_SIZE;
    else if (t->type == "float") return __FLOAT_SIZE;
    else if (t->type == "arr") return t->width * typeSz(t->arrType);
    else if (t->type == "func") return __FUNCTION_SIZE;
    else return -1;
}

string checkType(symbolType *t)
{
    if (t == NULL) return "null";
    else if (t->type == "void" || t->type == "char" || t->type == "int" || t->type == "float" || t->type == "block" || t->type == "func") return t->type;
    else if (t->type == "ptr") return "ptr(" + checkType(t->arrType) + ")";
    else if (t->type == "arr") return "arr(" + to_string(t->width) + ", " + checkType(t->arrType) + ")";
    else return "unknown";
}

int main()
{

    SymTabCount = 0;
    globalSymTab = new symbolTable("Global");
    currSymTab = globalSymTab;
    blockName = "";

    yyparse();
    globalSymTab->update();
    quadList.print();
    cout << '\n';
    globalSymTab->print();

    return 0;
}