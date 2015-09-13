#include <iostream>
#include "node.h"
#include "common.h"
#include "Symtab.h"

extern Node* root;
extern Symtab* roottab;
extern Symtab* currtab;
extern int yyparse();
using namespace std;


int main(){
	roottab = new Symtab();
	currtab = roottab;
	yyparse();
	currtab->printSymbol();
	return 0;
}