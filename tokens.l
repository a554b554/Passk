%{
	#include "node.h"
	#include "parser.hpp"
	#define SAVE_TOKEN yylval.str = new std::string(yytext, yyleng)
	#define TOKEN(t) (yylval.token = t)
	extern "C" int yywrap();
%}

%%

[ \t\n] ;

"program" return KW_PROGRAM;
"var"	return KW_VAR;
"end"   return KW_END;
"begin" return KW_BEGIN;
"const" return KW_CONST;
"type" return KW_TYPE;
"array"  return KW_ARRAY;
"of" return KW_OF;
"record" return KW_RECORD;
"div" return KW_DIV;
"mod" return KW_MOD;
"and" return KW_AND;
"or" return KW_OR;
"xor" return KW_XOR;
"not" return KW_NOT;
"if" return KW_IF;
"then" return KW_THEN;
"else" return KW_ELSE;
"case" return KW_CASE;
"while" return KW_WHILE;
"do" return KW_DO;
"repeat" return KW_REPEAT;
"until" return KW_UNTIL;
"for" return KW_FOR;
"to" return KW_TO;
"downto" return KW_DOWNTO;
"procedure" return KW_PROC;
"function" return KW_FUNC;
"nil" return KW_NIL;
"integer" return KW_INTEGER;
"real" return KW_REAL;
"boolean" return KW_BOOLEAN;
"char" return KW_CHAR;
"string" return KW_STRING;





[a-zA-Z_][a-zA-Z0-9_]*	SAVE_TOKEN; return TOK_IDENT;
[0-9]+\.[0-9]*	SAVE_TOKEN; return TOK_REAL;
[0-9]+	SAVE_TOKEN; return TOK_INTEGER;

":"		return SEP_DOTS;
"("     return SEP_PO;
")"     return SEP_PF;
";"		return SEP_SCOL;
".."    return SEP_DOTDOT;
"."     printf("dot!\n"); return SEP_DOT;
","     return SEP_COMMA;

"="   	return OP_EQ;
":="  	return OP_AFFECT;
"!="	return OP_NEQ;
"<"		return OP_LT;
"<="    return OP_LTE;
">"     return OP_GT;
">="    return OP_GTE;
"+"     return OP_ADD;
"-"     return OP_SUB;
"*"     return OP_MUL;
"/"     return OP_DIV;


.       printf("Unknown token!\n"); yyterminate();

%%
