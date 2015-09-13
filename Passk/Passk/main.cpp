//
//  main.cpp
//  Passk
//
//  Created by DarkTango on 6/21/15.
//  Copyright (c) 2015 DarkTango. All rights reserved.
//

#include <iostream>
#include "common.h"
#include "Symtab.h"
#include "node.h"
#include "parser.hpp"
#include "genCode.h"
using namespace std;



Program* root;
//Symtab* roottab;
//extern Symtab* currtab;
extern int yyparse();
extern Symtab* currtab;


extern FILE* yyin;

int main(){

    yyin = fopen("test.pas", "r");
    yyparse();
    initEmit();
    Context* context = new Context();
    root->codeGen(*context);
    emitLibrary();
    return 0;
}