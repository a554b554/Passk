#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <vector>
#include <string>
#include "CodeGen.h"
#include "Symtab.h"
using namespace std;
class CodeGenContext;
class Program;
class Block;
class BlockDeclVar;
class ListDeclVar;
class DeclVar;
class BlockCode;
class ListIdent;
class ListInstr;
class Instr;
class Expression;
class Type;
class BaseType;


class Node{
public:
	Program* program;
	virtual ~Node(){}
};


class Program : public Node{
public:
	Block* block;
};

class Block : public Node{
public:
	BlockDeclVar* blockDeclVar;
	BlockCode* blockCode;
};

class BlockDeclVar : public Node{  //KW_VAR listdeclvar
public:
	ListDeclVar* listDeclVar;
};


class ListDeclVar : public Node{
public:
	ListDeclVar *listDeclVar;
	DeclVar* declVar;
};


class DeclVar : public Node{
public:
	ListIdent* listIdent;
	Type *type;
};

class ListIdent : public Node{
public:
	vector<string> ids;
};

class BlockCode : public Node{
public:
	ListInstr* listInstr;
};

class ListInstr : public Node{
public:
	ListInstr* listInstr;
	Instr *instr;
};

class Instr: public Node{

};

class AssignInstr : public Instr{
public:
	string id;
	Expression* expression;
};

class Expression : public Node{
public:
	int intval;
	double realval;
};

class MathExpr : public Expression{
	string type;
	
};

class AddExpr : public MathExpr{
public:
	Expression* lhs;
	Expression* rhs;
};

class SubExpr : public MathExpr{
public:
	Expression* lhs;
	Expression* rhs;
};

class MulExpr : public MathExpr{
public:
	Expression* lhs;
	Expression* rhs;
};

class DivExpr : public MathExpr{
public:
	Expression* lhs;
	Expression* rhs;
};

class Type : public Node{
public:
	BaseType* baseType;
};

class BaseType : public Node{
public:
	int tp;
};

class VarExpr : public Node{
public:
	Symbol* symbol;
};



#endif