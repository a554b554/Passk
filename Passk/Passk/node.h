//
//  node.h
//  Passk
//
//  Created by DarkTango on 6/21/15.
//  Copyright (c) 2015 DarkTango. All rights reserved.
//

#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "common.h"
#include "Symtab.h"
#ifndef Passk_node_h
#define Passk_node_h
#define MAXLEN 100000


class Symbol{
public:
    Symbol():name(""){};
    // Symbol(const string name, int type, int val=0):name(name),type(type),intval(val){};
    // Symbol(const string name, int type, double val=0):name(name),type(type),realval(val){};
    // Symbol(const string name, int type, char val=0):name(name),type(type),charval(val){};
    // Symbol(const string name, int type, string val=''):name(name),type(type),strval(val){};
    // Symbol(const string name, int type, bool val=false):name(name),type(type),;
    Symbol(const string name):name(name){};
//    void changeType(int _type);
//    void setVal(int val);
//    void setVal(double val);
//    int type;
    int offset;
    string name;
//    union{
//        int intval;
//        double realval;
//        bool boolval;
//        char charval;
//        string* strval;
//        int funentry;
//    };
    virtual int getType()=0;
};

class intSymbol: public Symbol{
public:
    int val;
    int getType();
};

class boolSymbol: public Symbol{
public:
    bool val;
    int getType();
};


class funcSymbol: public Symbol{
public:
    int returnType();
    vector<int> paramsType;
    int getType();
};




class Symtab{
public:
    Symtab* next;
    bool addSymbol(Symbol& symbol);
    bool hasSymbol(Symbol& symbol);
    Symbol* getSymbolbyName(string name);
    void printSymbol();
    int getSize();
    int getPoolSize();
    map<string, Symbol*> pool;
};

static void addToSymbolTable(const vector<string>& ids, int type, Symtab* tab){
    for (int i = 0; i < ids.size(); ++i)
    {
        switch (type) {
            case TYPE_INT:
            {
                Symbol* tmp = new intSymbol();
                tmp->name = ids[i];
                tab->addSymbol(*tmp);
                break;
            }
            case TYPE_FUNC:
            {
                Symbol* tmp = new funcSymbol();
                tmp->name = ids[i];
                tab->addSymbol(*tmp);
            }
            case TYPE_BOOLEAN:
            {
                Symbol* tmp = new boolSymbol();
                tmp->name = ids[i];
                tab->addSymbol(*tmp);
            }
                
            
            default:
                break;
        }
        
        
    }
}
///////////////////////////////////////////////////////////////////
static string regToUse_64[7]={"%%rax","%%rdx","%%rcx","%%r8","%%r9","%%r10","%%r11"};
static string regToUse_32[7]={"%%eax","%%edx","%%ecx","%%r8","%%r9","%%r10","%%r11"};
const static int REG_SIZE = 7;
enum{
    REG_RAX,
    REG_RDX,
    REG_RCX,
    REG_R8,
    REG_R9,
    REG_R10,
    REG_R11
};
struct Context{ //rax,rdx,rcx,r8,r9,r10,r11
    Symtab* tab;
    bool regFlag[REG_SIZE];
    void clearFlag();
    int nextuse();
    int currentuse();
    void setReg(int i);
    void releaseReg(int i);
    bool inUse(int i);
    string getNext();
    int labelCount = 0;
    string getlabel();
};



///////////////////////////////////////////////////////////////////

using namespace std;
struct Program;
struct Block;

struct DeclareBlock;
struct ConstDecl;
struct TypeDecl;
struct VarDecl;
struct VarList;
struct FuncDecl;

struct CodeBlock;
struct Instr;
struct Expr;
struct ListInstr;
struct Type;
struct CallExpr;


//////////////////////////////////////////Definition////////////////////

struct Program{
    Block* block;
    void codeGen(Context& context);
};

struct Block{
    ConstDecl* constdecl;
    TypeDecl* typedecl;
    VarDecl* vardecl;
    FuncDecl* funcdecl;
    CodeBlock* codeblock;
    void genCode(Context& context);
};


enum{               // math operation
    EXPR_ADD,
    EXPR_SUB,
    EXPR_MUL,
    EXPR_DIV_INT,
    EXPR_DIV_FLOAT,
    EXPR_MOD,
    EXPR_EXP,
    EXPR_AND,
    EXPR_OR,
    EXPR_XOR,
    EXPR_NOT,
    EXPR_EQ,
    EXPR_NEQ,
    EXPR_LT,
    EXPR_LTE,
    EXPR_GT,
    EXPR_GTE
};




struct CodeBlock{
    Symtab* tab;
    ListInstr* listinstr;
    void genCode(Context& context);
};


struct VarDecl{
    VarDecl* decl;
    vector<VarList*> list;
    void updateSymbolTable(Symtab& tab);
};

struct FuncDecl{
    void updateSymbolTable(Symtab& tab);
    void genCode(Context& context);
};

struct VarList{
    VarList();
    VarList(vector<string>& _ids);
    void copyfrom(vector<string>& _ids);
    vector<string> ids;
    int type;
};


struct ListInstr{
    ListInstr(vector<Instr*>& _instrs);
    ListInstr();
    vector<Instr*> instrs;
    void genCode(Context& context);
};



struct Instr{
    virtual void genCode(Context& context);
};

struct AssignInstr: public Instr{
    string tokenid;
    Expr* expr;
    void genCode(Context& context);
};

struct CallInstr: public Instr{
    Expr* expr;
    void genCode(Context& context);
};

struct IfThenInstr: public Instr{
    Expr* expr;
    Instr* then;
    void genCode(Context& context);
};

struct IfThenElseInstr: public Instr{
    Expr* expr;
    Instr* then;
    Instr* elseins;
    void genCode(Context& context);
};

struct RepeatInstr: public Instr{
    ListInstr* listinstr;
    Expr* expr;
    void genCode(Context& context);
};

struct WhileInstr: public Instr{
    Expr* expr;
    Instr* instr;
    void genCode(Context& context);
};

struct BlockInstr: public Instr{
    CodeBlock* block;
    void genCode(Context& context);
};

struct Expr{
    char data[MAXLEN];
    int valtype;
    Expr* op1;
    Expr* op2;
    virtual void genCode(Context& context);
};


struct MathExpr: public Expr{
    int op;
    void genCode(Context& context);
};


struct AtomExpr: public Expr{
    void genCode(Context& context);
    static bool isAtomExpr(Expr* expr);
};

struct Type{
    Type():type(TYPE_UNDEFINED){};
    Type(int _type):type(_type){};
    int type;
    string typeName;
};



struct CallExpr: public Expr{
    string funcName;
    int paramsCount;
    vector<Expr*> params;
    void genCode(Context& context);
};

struct ListParameters{
    vector<Expr*> params;
};

struct VarExpr: public Expr{
    string name;
    void genCode(Context& context);
};

struct BoolExpr : public Expr{
    int op;
    void genCode(Context& context);
};

struct CompExpr: public Expr{
    int op;
    void genCode(Context& context);
};


struct Expr_AtomExpr: public AtomExpr{
    Expr* expr;
    void genCode(Context& context);
};

struct Int_AtomExpr: public AtomExpr{
    int val;
    void genCode(Context& context);
};

struct Bool_AtomExpr: public AtomExpr{
    bool val;
    void genCode(Context& context);
};

struct Str_AtomExpr: public AtomExpr{
    string str;
    void genCode(Context& context);
};

struct Real_AtomExpr: public AtomExpr{
    double val;
    void genCode(Context& context);
};







#endif
