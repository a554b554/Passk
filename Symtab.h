#ifndef SYMTAB_H
#define SYMTAB_H

#include <map>
#include <string>
#include <cstdio>
#include "node.h"
#include "common.h"
using namespace std;


class Symbol{
public:
	Symbol();
	// Symbol(const string name, int type, int val=0):name(name),type(type),intval(val){};
	// Symbol(const string name, int type, double val=0):name(name),type(type),realval(val){};
	// Symbol(const string name, int type, char val=0):name(name),type(type),charval(val){};
	// Symbol(const string name, int type, string val=''):name(name),type(type),strval(val){};
	// Symbol(const string name, int type, bool val=false):name(name),type(type),;
	Symbol(const string name, int type):name(name),type(type){};
	int type;
	string name;
	union{
		int intval;
		double realval;
		bool boolval;
		char charval;
		string* strval;
		int funentry;
	};
};


class Symtab{
public:
	Symtab* next;
	bool addSymbol(Symbol& symbol);
	bool hasSymbol(Symbol& symbol);
	Symbol* getSymbolbyName(string name);
	void printSymbol();
private:
	map<string, Symbol> pool;
};

static void addToSymbolTable(const vector<string>& ids, int type, Symtab* tab){
	for (int i = 0; i < ids.size(); ++i)
	{
		Symbol* tmp = new Symbol(ids[i],type);
		tab->addSymbol(*tmp);
	}
}

#endif