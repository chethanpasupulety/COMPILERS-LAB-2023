#include "ass6_21CS30011_21CS30036_translator.h"
#include <fstream>
#include <sstream>
#include <stack>
using namespace std;

extern symbolTable symTabGlobal;
extern symbolTable *symTab;
extern quadArray quadList;

vector<string> string_constants;

void printOutGlb(ofstream &outFile)
{
    for (auto it = symTabGlobal.symbols.begin(); it != symTabGlobal.symbols.end(); it++)
    {
        symbol *sym = *it;
        if (sym->type.type == CHAR && sym->name[0] != 't')
        {
            if (sym->initVal != NULL)
            {
                outFile << "\t.globl\t" << sym->name << '\n';
                outFile << "\t.data" << '\n';
                outFile << "\t.type\t" << sym->name << ", @object" << '\n';
                outFile << "\t.size\t" << sym->name << ", 1" << '\n';
                outFile << sym->name << ":" << '\n';
                outFile << "\t.byte\t" << sym->initVal->c << '\n';
            }
            else outFile << "\t.comm\t" << sym->name << ",1,1" << '\n';
        }
        else if (sym->type.type == INT && sym->name[0] != 't')
        {
            if (sym->initVal != NULL)
            {
                outFile << "\t.globl\t" << sym->name << '\n';
                outFile << "\t.data" << '\n';
                outFile << "\t.align\t4" << '\n';
                outFile << "\t.type\t" << sym->name << ", @object" << '\n';
                outFile << "\t.size\t" << sym->name << ", 4" << '\n';
                outFile << sym->name << ":" << '\n';
                outFile << "\t.long\t" << sym->initVal->i << '\n';
            }
            else outFile << "\t.comm\t" << sym->name << ",4,4" << '\n';
        }
    }
}

void printStrings(ofstream &outFile)
{
    outFile << ".section\t.rodata" << '\n';
    int i = 0;
    for (auto it = string_constants.begin(); it != string_constants.end(); it++)
    {
        outFile << ".LC" << i++ << ":" << '\n';
        outFile << "\t.string " << *it << '\n';
    }
}

map<int, string> labels;
stack<pair<string, int>> params;
int labelCount = 0;

void setLabels()
{
    int i = 0;
    for (auto it = quadList.quads.begin(); it != quadList.quads.end(); it++)
    {
        if (it->op == GOTO || (it->op >= GOTO_EQ && it->op <= IF_FALSE_GOTO))
        {
            int target = atoi((it->result.c_str()));
            if (!labels.count(target))
            {
                string labelName = ".L" + to_string(labelCount++);
                labels[target] = labelName;
            }
            it->result = labels[target];
        }
    }
}

string nowFunc = "";

void genASMdat(int memBind, ofstream &outFile)
{
    outFile << '\n' << "\t.text" << '\n';
    outFile << "\t.globl\t" << nowFunc << '\n';
    outFile << "\t.type\t" << nowFunc << ", @function" << '\n';
    outFile << nowFunc << ":" << '\n';
    outFile << "\tpushq\t" << "%rbp" << '\n';
    outFile << "\tmovq\t" << "%rsp, %rbp" << '\n';
    outFile << "\tsubq\t$" << (memBind / 16 +1) * 16 << ", %rsp" << '\n';
}

void quadCode(quad q, ofstream &outFile)
{
    string strLabel = q.result;
    bool hasStrLabel = (q.result[0] == '.' && q.result[1] == 'L' && q.result[2] == 'C');
    string toPrint1 = "", toPrint2 = "", toPrintRes = "";
    int off1 = 0, off2 = 0, offRes = 0;

    symbol *loc1 = symTab->lookup(q.arg1);
    symbol *loc2 = symTab->lookup(q.arg2);
    symbol *loc3 = symTab->lookup(q.result);
    symbol *glb1 = symTabGlobal.searchGlobal(q.arg1);
    symbol *glb2 = symTabGlobal.searchGlobal(q.arg2);
    symbol *glb3 = symTabGlobal.searchGlobal(q.result);

    if (symTab != &symTabGlobal)
    {
        if (glb1 == NULL) off1 = loc1->offset;
        if (glb2 == NULL) off2 = loc2->offset;
        if (glb3 == NULL) offRes = loc3->offset;

        if (q.arg1[0] < '0' || q.arg1[0] > '9')
        {
            if (glb1 != NULL) toPrint1 = q.arg1 + "(%rip)";
            else toPrint1 = to_string(off1) + "(%rbp)";
        }
        if (q.arg2[0] < '0' || q.arg2[0] > '9')
        {
            if (glb2 != NULL) toPrint2 = q.arg2 + "(%rip)";
            else toPrint2 = to_string(off2) + "(%rbp)";
        }
        if (q.result[0] < '0' || q.result[0] > '9')
        {
            if (glb3 != NULL) toPrintRes = q.result + "(%rip)";
            else toPrintRes = to_string(offRes) + "(%rbp)";
        }
    }
    else
    {
        toPrint1 = q.arg1;
        toPrint2 = q.arg2;
        toPrintRes = q.result;
    }

    if (hasStrLabel) toPrintRes = strLabel;

    if (q.op == ASSIGN)
    {
        if (q.result[0] != 't' || loc3->type.type == INT || loc3->type.type == POINTER)
        {
            if (loc3->type.type != POINTER)
            {
                if (q.arg1[0] < '0' || q.arg1[0] > '9')
                {
                    outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
                    outFile << "\tmovl\t%eax, " << toPrintRes << '\n';
                }
                else
                    outFile << "\tmovl\t$" << q.arg1 << ", " << toPrintRes << '\n';
            }
            else
            {
                outFile << "\tmovq\t" << toPrint1 << ", %rax" << '\n';
                outFile << "\tmovq\t%rax, " << toPrintRes << '\n';
            }
        }
        else
        {
            int temp = q.arg1[0];
            outFile << "\tmovb\t$" << temp << ", " << toPrintRes << '\n';
        }
    }
    else if (q.op == ADD)
    {
        if (q.arg1[0] > '0' && q.arg1[0] <= '9') outFile << "\tmovl\t$" << q.arg1 << ", %eax" << '\n';
        else outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        if (q.arg2[0] > '0' && q.arg2[0] <= '9') outFile << "\tmovl\t$" << q.arg2 << ", %edx" << '\n';
        else outFile << "\tmovl\t" << toPrint2 << ", %edx" << '\n';
        outFile << "\taddl\t%edx, %eax" << '\n';
        outFile << "\tmovl\t%eax, " << toPrintRes << '\n';
    }
    else if (q.op == SUB)
    {
        if (q.arg1[0] > '0' && q.arg1[0] <= '9') outFile << "\tmovl\t$" << q.arg1 << ", %edx" << '\n';
        else outFile << "\tmovl\t" << toPrint1 << ", %edx" << '\n';
        if (q.arg2[0] > '0' && q.arg2[0] <= '9') outFile << "\tmovl\t$" << q.arg2 << ", %eax" << '\n';
        else outFile << "\tmovl\t" << toPrint2 << ", %eax" << '\n';
        outFile << "\tsubl\t%eax, %edx" << '\n';
        outFile << "\tmovl\t%edx, %eax" << '\n';
        outFile << "\tmovl\t%eax, " << toPrintRes << '\n';
    }
    else if (q.op == MULT)
    {
        if (q.arg1[0] > '0' && q.arg1[0] <= '9') outFile << "\tmovl\t$" << q.arg1 << ", %eax" << '\n';
        else outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\timull\t";
        if (q.arg2[0] > '0' && q.arg2[0] <= '9') outFile << "$" << q.arg2 << ", %eax" << '\n';
        else outFile << toPrint2 << ", %eax" << '\n';
        outFile << "\tmovl\t%eax, " << toPrintRes << '\n';
    }
    else if (q.op == DIV)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tcltd\n\tidivl\t" << toPrint2 << '\n';
        outFile << "\tmovl\t%eax, " << toPrintRes << '\n';
    }
    else if (q.op == MOD)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tcltd\n\tidivl\t" << toPrint2 << '\n';
        outFile << "\tmovl\t%edx, " << toPrintRes << '\n';
    }
    else if (q.op == GOTO)
        outFile << "\tjmp\t" << q.result << '\n';
    else if (q.op == GOTO_LT)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tcmpl\t" << toPrint2 << ", %eax" << '\n';
        outFile << "\tjge\t.L" << labelCount << '\n';
        outFile << "\tjmp\t" << q.result << '\n';
        outFile << ".L" << labelCount++ << ":" << '\n';
    }
    else if (q.op == GOTO_GT)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tcmpl\t" << toPrint2 << ", %eax" << '\n';
        outFile << "\tjle\t.L" << labelCount << '\n';
        outFile << "\tjmp\t" << q.result << '\n';
        outFile << ".L" << labelCount++ << ":" << '\n';
    }
    else if (q.op == GOTO_GTE)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tcmpl\t" << toPrint2 << ", %eax" << '\n';
        outFile << "\tjl\t.L" << labelCount << '\n';
        outFile << "\tjmp\t" << q.result << '\n';
        outFile << ".L" << labelCount++ << ":" << '\n';
    }
    else if (q.op == GOTO_LTE)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tcmpl\t" << toPrint2 << ", %eax" << '\n';
        outFile << "\tjg\t.L" << labelCount << '\n';
        outFile << "\tjmp\t" << q.result << '\n';
        outFile << ".L" << labelCount++ << ":" << '\n';
    }
    else if (q.op == GOTO_GTE)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tcmpl\t" << toPrint2 << ", %eax" << '\n';
        outFile << "\tjl\t.L" << labelCount << '\n';
        outFile << "\tjmp\t" << q.result << '\n';
        outFile << ".L" << labelCount++ << ":" << '\n';
    }
    else if (q.op == GOTO_EQ)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        if (q.arg2[0] >= '0' && q.arg2[0] <= '9') outFile << "\tcmpl\t$" << q.arg2 << ", %eax" << '\n';
        else outFile << "\tcmpl\t" << toPrint2 << ", %eax" << '\n';
        outFile << "\tjne\t.L" << labelCount << '\n';
        outFile << "\tjmp\t" << q.result << '\n';
        outFile << ".L" << labelCount++ << ":" << '\n';
    }
    else if (q.op == GOTO_NEQ)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tcmpl\t" << toPrint2 << ", %eax" << '\n';
        outFile << "\tje\t.L" << labelCount << '\n';
        outFile << "\tjmp\t" << q.result << '\n';
        outFile << ".L" << labelCount++ << ":" << '\n';
    }
    else if (q.op == IF_GOTO)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tcmpl\t$0" << ", %eax" << '\n';
        outFile << "\tje\t.L" << labelCount << '\n';
        outFile << "\tjmp\t" << q.result << '\n';
        outFile << ".L" << labelCount++ << ":" << '\n';
    }
    else if (q.op == IF_FALSE_GOTO)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tcmpl\t$0" << ", %eax" << '\n';
        outFile << "\tjne\t.L" << labelCount << '\n';
        outFile << "\tjmp\t" << q.result << '\n';
        outFile << ".L" << labelCount++ << ":" << '\n';
    }
    else if (q.op == U_MINUS)
    {
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tnegl\t%eax" << '\n';
        outFile << "\tmovl\t%eax, " << toPrintRes << '\n';
    }
    else if (q.op == ARR_IND_BRAC)
    {
        outFile << "\tmovl\t" << toPrint2 << ", %edx" << '\n';
        outFile << "cltq" << '\n';
        if (off1 < 0)
        {
            outFile << "\tmovl\t" << off1 << "(%rbp,%rdx,1), %eax" << '\n';
            outFile << "\tmovl\t%eax, " << toPrintRes << '\n';
        }
        else
        {
            outFile << "\tmovq\t" << off1 << "(%rbp), %rdi" << '\n';
            outFile << "\taddq\t%rdi, %rdx" << '\n';
            outFile << "\tmovq\t(%rdx) ,%rax" << '\n';
            outFile << "\tmovq\t%rax, " << toPrintRes << '\n';
        }
    }
    else if (q.op == ARR_IND_ANS)
    {
        outFile << "\tmovl\t" << toPrint2 << ", %edx" << '\n';
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "cltq" << '\n';
        if (offRes > 0)
        {
            outFile << "\tmovq\t" << offRes << "(%rbp), %rdi" << '\n';
            outFile << "\taddq\t%rdi, %rdx" << '\n';
            outFile << "\tmovl\t%eax, (%rdx)" << '\n';
        }
        else
            outFile << "\tmovl\t%eax, " << offRes << "(%rbp,%rdx,1)" << '\n';
    }
    else if (q.op == REFERENCE)
    {
        if (off1 < 0)
        {
            outFile << "\tleaq\t" << toPrint1 << ", %rax" << '\n';
            outFile << "\tmovq\t%rax, " << toPrintRes << '\n';
        }
        else
        {
            outFile << "\tmovq\t" << toPrint1 << ", %rax" << '\n';
            outFile << "\tmovq\t%rax, " << toPrintRes << '\n';
        }
    }
    else if (q.op == L_DEREF)
    {
        outFile << "\tmovq\t" << toPrintRes << ", %rdx" << '\n';
        outFile << "\tmovl\t" << toPrint1 << ", %eax" << '\n';
        outFile << "\tmovl\t%eax, (%rdx)" << '\n';
    }
    else if (q.op == PARAM)
    {
        int paramSize;
        dataTypes t;
        if (glb3 != NULL) t = glb3->type.type;
        else t = loc3->type.type;
        if (t == INT) paramSize = 4;
        else if (t == CHAR) paramSize = 1;
        else paramSize = 8;
        stringstream ss;
        if (q.result[0] == '.') ss << "\tmovq\t$" << toPrintRes << ", %rax" << '\n';
        else if (q.result[0] >= '0' && q.result[0] <= '9') ss << "\tmovq\t$" << q.result << ", %rax" << '\n';
        else
        {
            if (loc3->type.type != ARRAY)
            {
                if (loc3->type.type != POINTER) ss << "\tmovq\t" << toPrintRes << ", %rax" << '\n';
                else if (loc3 == NULL) ss << "\tleaq\t" << toPrintRes << ", %rax" << '\n';
                else ss << "\tmovq\t" << toPrintRes << ", %rax" << '\n';
            }
            else
            {
                if (offRes < 0) ss << "\tleaq\t" << toPrintRes << ", %rax" << '\n';
                else
                {
                    ss << "\tmovq\t" << offRes << "(%rbp), %rdi" << '\n';
                    ss << "\tmovq\t%rdi, %rax" << '\n';
                }
            }
        }
        params.push(make_pair(ss.str(), paramSize));
    }
    else if (q.op == DEREFERENCE)
    {
        outFile << "\tmovq\t" << toPrint1 << ", %rax" << '\n';
        outFile << "\tmovq\t(%rax), %rdx" << '\n';
        outFile << "\tmovq\t%rdx, " << toPrintRes << '\n';
    }
    else if (q.op == CALL)
    {
        int numParams = atoi(q.arg1.c_str());
        int totalSize = 0, k = 0;

        if (numParams > 6)
        {
            for (int i = 0; i < numParams - 6; i++)
            {
                string s = params.top().first;
                outFile << s << "\tpushq\t%rax" << '\n';
                totalSize += params.top().second;
                params.pop();
            }
            outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %r9d" << '\n';
            totalSize += params.top().second;
            params.pop();
            outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %r8d" << '\n';
            totalSize += params.top().second;
            params.pop();
            outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %rcx" << '\n';
            totalSize += params.top().second;
            params.pop();
            outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %rdx" << '\n';
            totalSize += params.top().second;
            params.pop();
            outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %rsi" << '\n';
            totalSize += params.top().second;
            params.pop();
            outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %rdi" << '\n';
            totalSize += params.top().second;
            params.pop();
        }
        else
        {
            while (!params.empty())
            {
                if (params.size() == 6)
                {
                    outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %r9d" << '\n';
                    totalSize += params.top().second;
                    params.pop();
                }
                else if (params.size() == 5)
                {
                    outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %r8d" << '\n';
                    totalSize += params.top().second;
                    params.pop();
                }
                else if (params.size() == 4)
                {
                    outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %rcx" << '\n';
                    totalSize += params.top().second;
                    params.pop();
                }
                else if (params.size() == 3)
                {
                    outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %rdx" << '\n';
                    totalSize += params.top().second;
                    params.pop();
                }
                else if (params.size() == 2)
                {
                    outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %rsi" << '\n';
                    totalSize += params.top().second;
                    params.pop();
                }
                else if (params.size() == 1)
                {
                    outFile << params.top().first << "\tpushq\t%rax" << '\n' << "\tmovq\t%rax, %rdi" << '\n';
                    totalSize += params.top().second;
                    params.pop();
                }
            }
        }
        outFile << "\tcall\t" << q.result << '\n';
        if (q.arg2 != "") outFile << "\tmovq\t%rax, " << toPrint2 << '\n';
        outFile << "\taddq\t$" << totalSize << ", %rsp" << '\n';
    }
    else if (q.op == RETURN)
    {
        if (q.result != "") outFile << "\tmovq\t" << toPrintRes << ", %rax" << '\n';
        outFile << "\tleave" << '\n';
        outFile << "\tret" << '\n';
    }
}

void genCodeTar(ofstream &outFile)
{
    printOutGlb(outFile);
    printStrings(outFile);
    symbolTable *currFuncTable = NULL;
    symbol *currFunc = NULL;
    setLabels();

    for (int i = 0; i < (int)quadList.quads.size(); i++)
    {
        outFile << "# " << quadList.quads[i].print() << '\n';
        if (labels.count(i)) outFile << labels[i] << ":" << '\n';

        if (quadList.quads[i].op == FUNC_BEGIN)
        {
            i++;
            if (quadList.quads[i].op != FUNC_END) i--;
            else continue;
            currFunc = symTabGlobal.searchGlobal(quadList.quads[i].result);
            currFuncTable = currFunc->nestedTable;
            int takingParam = 1, memBind = 16;
            symTab = currFuncTable;
            for (int j = 0; j < (int)currFuncTable->symbols.size(); j++)
            {
                if (currFuncTable->symbols[j]->name == "RETVAL")
                {
                    takingParam = 0;
                    memBind = 0;
                    if (currFuncTable->symbols.size() > j + 1) memBind = -currFuncTable->symbols[j + 1]->size;
                }
                else
                {
                    if (!takingParam)
                    {
                        currFuncTable->symbols[j]->offset = memBind;
                        if (currFuncTable->symbols.size() > j + 1)
                            memBind -= currFuncTable->symbols[j + 1]->size;
                    }
                    else
                    {
                        currFuncTable->symbols[j]->offset = memBind;
                        memBind += 8;
                    }
                }
            }
            if (memBind >= 0) memBind = 0;
            else memBind *= -1;
            nowFunc = quadList.quads[i].result;
            genASMdat(memBind, outFile);
        }

        else if (quadList.quads[i].op == FUNC_END)
        {
            symTab = &symTabGlobal;
            nowFunc = "";
            outFile << "\tleave" << '\n';
            outFile << "\tret" << '\n';
            outFile << "\t.size\t" << quadList.quads[i].result << ", .-" << quadList.quads[i].result << '\n';
        }

        if (nowFunc != "") quadCode(quadList.quads[i], outFile);
    }
}

int main(int argc, char *argv[])
{
    symTab = &symTabGlobal;
    yyparse();
    string ASMFile;
    ASMFile = "ass6_21CS30011_21CS30036_" + string(argv[argc - 1]) + ".s";
    ofstream outFile;
    outFile.open(ASMFile);

    quadList.print();
    symTab->print("symTab.global");
    symTab = &symTabGlobal;
    genCodeTar(outFile);
    outFile.close();

    return 0;
}