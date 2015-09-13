//
//  Symtab.cpp
//  Passk
//
//  Created by DarkTango on 6/21/15.
//  Copyright (c) 2015 DarkTango. All rights reserved.
//

#include "Symtab.h"
#include "node.h"


//void Symbol::changeType(int _type){
//    type = _type;
//}
//
//void Symbol::setVal(int val){
//    type = TYPE_INT;
//    this->intval = val;
//}
//
//void Symbol::setVal(double val){
//    type = TYPE_REAL;
//}

int intSymbol::getType(){
    return TYPE_INT;
}

int funcSymbol::getType(){
    return TYPE_FUNC;
}

int boolSymbol::getType(){
    return TYPE_BOOLEAN;
}

/////////////////////////////////////////////////////////////

bool Symtab::addSymbol(Symbol& symbol){
    if (hasSymbol(symbol))
    {
        printf("redefine %s\n",symbol.name.c_str());
        return false;
    }
    else{
        pool[symbol.name] = &symbol;
        return true;
    }
}


bool Symtab::hasSymbol(Symbol& symbol){
    map<string, Symbol*>::iterator it;
    it = pool.find(symbol.name);
    if (it == pool.end())  //could not find
    {
        if (this->next == NULL){
            //printf("No symbol named %s\n", symbol.name);
            return false;
        }
        else{
            return this->next->hasSymbol(symbol);
        }
    }
    return true;
    
}

void Symtab::printSymbol(){
    map<string, Symbol*>::iterator it;
    printf("table contains:\n");
    for (it = pool.begin(); it != pool.end(); ++it)
    {
        printf("name: %s type: %d", it->second->name.c_str(), it->second->getType());
        
    }
}




Symbol* Symtab::getSymbolbyName(string name){
    map<string, Symbol*>::iterator it;
    it = pool.find(name);
    if (it == pool.end())
    {
        if (this->next == NULL)
        {
            return NULL;
        }
        else{
            return this->next->getSymbolbyName(name);
        }
    }
    else{
        return it->second;
    }
}


int Symtab::getSize(){
    return (int)pool.size()*8;
}

int Symtab::getPoolSize(){
    return (int)pool.size();
}











