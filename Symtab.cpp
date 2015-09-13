#include "Symtab.h"





Symbol::Symbol(){};







/////////////////////////////////////////////////////////////

bool Symtab::addSymbol(Symbol& symbol){
	if (hasSymbol(symbol))
	{
		printf("redefine %s\n",symbol.name.c_str());
		return false;
	}
	else{
		pool[symbol.name] = symbol;
		return true;
	}
}


bool Symtab::hasSymbol(Symbol& symbol){
	map<string, Symbol>::iterator it;
	it = pool.find(symbol.name);
	if (it == pool.end())  //could not find
	{
		if (this->next == NULL){
			//printf("No symbol named %s\n", symbol.name);
			return false;
		}
		else{
			this->next->hasSymbol(symbol);
		}
	}
	else{
		return true;
	}

}

void Symtab::printSymbol(){
	map<string, Symbol>::iterator it;
	printf("table contains:\n");
	for (it = pool.begin(); it != pool.end(); ++it)
	{
		printf("name: %s type: %d\n", it->second.name.c_str(), it->second.type);
	}
}


Symbol* Symtab::getSymbolbyName(string name){
	map<string, Symbol>::iterator it;
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
		return &(it->second);
	}
}
