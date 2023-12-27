#ifndef __TRANSLATE_H
#define __TRANSLATE_H

#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

extern char *yytext;
extern int yyparse();

typedef enum
{
    VOID,
    BOOL,
    CHAR,
    INT,
    FLOAT,
    ARRAY,
    POINTER,
    FUNCTION
} dataTypes;

typedef enum
{
    ADD,
    SUB,
    MULT,
    DIV,
    MOD,
    U_PLUS,
    U_MINUS,
    REFERENCE,
    DEREFERENCE,
    U_NEG,
    GOTO_EQ,
    GOTO_NEQ,
    GOTO_GT,
    GOTO_GTE,
    GOTO_LT,
    GOTO_LTE,
    IF_GOTO,
    IF_FALSE_GOTO,
    ASSIGN,
    GOTO,
    RETURN,
    PARAM,
    CALL,
    ARR_IND_BRAC,
    ARR_IND_ANS,
    FUNC_BEGIN,
    FUNC_END,
    L_DEREF
} opcode;


class expression
{
public:
    int instr;
    dataTypes type;
    string loc;
    list<int> truelist;
    list<int> falselist;
    list<int> nextlist;
    int fold;
    string *folder;

    expression();
};

class symbol;
class symbolTable;

class symbolType
{
public:
    int pointers;
    dataTypes type;     // type of symbol
    dataTypes nextType; // points to elements of array
    vector<int> dimension;  // stores dimesnion of array
};

class symbolValue
{
public:
    int i;
    char c;
    float f;
    void *p;

    void setInitVal(int val);
    void setInitVal(char val);
    void setInitVal(float val);
};

class symbol
{
public:
    string name;              // The name of the symbol
    symbolType type;          // Type of the symbol
    symbolValue *initVal;     // Initial value of the symbol, if any
    int size;                 // Size of the symbol(element)
    int offset;               // Offset of the symbol in the symbol table
    symbolTable *nestedTable; // Pointer to a nested symbol table, if any (useful for functions and blocks)

    symbol();
};

class symbolTable
{
public:
    map<string, symbol *> table;
    vector<symbol *> symbols;
    int offset;
    static int tempCount;

    symbolTable();
    symbol *lookup(string name, dataTypes t = INT, int pc = 0); // look for an id or create a new one
    symbol *searchGlobal(string name);                         // search for an id in the global symbol table. If the id exists, the entry is returned, otherwise NULL is returned.
    string gentemp(dataTypes t = INT);

    void print(string tabName);
};

class param
{
public:
    string name;
    symbolType type;
};


class quad
{
public:
    opcode op;
    string arg1;
    string arg2;
    string result;

    quad(string, string, string, opcode);

    string print();
    void quadprint();
};

class quadArray
{
public:
    vector<quad> quads;

    void print();
};

class declaration
{
public:
    string name;   // name of the declaration
    int pointers;  // number of pointers
    dataTypes type; // Type of the declaration
    dataTypes nextType;
    vector<int> li;      // list of instructions for the declaration
    expression *initVal; // initial value of the declaration
    int pc;              // useful for pointers and arrays
};

void emit(string result, string arg1, string arg2, opcode op);
void emit(string result, int constant, opcode op);
void emit(string result, char constant, opcode op);
void emit(string result, float constant, opcode op);

list<int> makelist(int i); // A global function to create a new list containing only i, an index into the array of quads, and to return a pointer to the newly created list

list<int> merge(list<int> list1, list<int> list2); // global function to concatenate two lists list1 and list2 and to return a pointer to the concatenated list

void backpatch(list<int> l, int address); // global function to insert address as the target label for each of the quads on the list

void convertIntToBool(expression *expr); // convert an int to a bool

int typeSz(dataTypes t); // gets size of a type

string checkType(symbolType t); // to print a type

string getInitVal(symbol *sym); // gets the initial value of a symbol

#endif