%option noyywrap case-insensitive

%{

#include <cstdio>
#include <cmath>
#include <string>
#include "TableIdentifier.h"
using namespace std;
#include "parser.tab.h"
int row = 1, col = 1;
extern int yyerror ( char* m );
extern int yylex ();
extern void commenteof ();


%}


NQUOTE [^']
DIGITS [0-9]+

%%

"and"								col += yyleng; return KW_AND;
"array"							col += yyleng; return KW_ARRAY;
"begin"               			{
									/*SymbolsTable* tmp = new SymbolsTable();
									tmp->setParent(currentContext);
									currentContext = tmp;*/
									col += yyleng;
									return KW_BEGIN;
                    			}
"const"               			col += yyleng; return KW_CONST;
"div"                 			col += yyleng; return KW_DIV;
"do"                  			col += yyleng; return KW_DO;
"downto"              			col += yyleng; return KW_DOWNTO;
"else"                			col += yyleng; return KW_ELSE;
"end"                 			{
									/*currentContext->dump();
									currentContext = currentContext->getParent();*/
									col += yyleng;
									return KW_END;
                    			}
"for"								col += yyleng; return KW_FOR;
"function"						col += yyleng; return KW_FUNC;
"if"								col += yyleng; return KW_IF;
"mod"                 			col += yyleng; return KW_MOD;
"nil"                 			col += yyleng; return KW_NIL;
"not"                 			col += yyleng; return KW_NOT;
"of"                  			col += yyleng; return KW_OF;
"or"                  			col += yyleng; return KW_OR;
"procedure"						col += yyleng; return KW_PROC;
"program"							col += yyleng; return KW_PROGRAM;
"record"              			col += yyleng; return KW_RECORD;
"repeat"              			col += yyleng; return KW_REPEAT;
"then"							col += yyleng; return KW_THEN;
"to"								col += yyleng; return KW_TO;
"type"							col += yyleng; return KW_TYPE;
"until"							col += yyleng; return KW_UNTIL;
"var"								col += yyleng; return KW_VAR;
"while"							col += yyleng; return KW_WHILE;
"xor"								col += yyleng; return KW_XOR;
"integer"							col += yyleng; return KW_INTEGER;
"real"							col += yyleng; return KW_REAL;
"boolean"							col += yyleng; return KW_BOOLEAN;
"char"							col += yyleng; return KW_CHAR;
"string"              			col += yyleng; return KW_STRING;
"case"							col += yyleng; return KW_CASE;
":="							col += yyleng; return OP_AFFECT;
"="								col += yyleng; return OP_EQ;
">="							col += yyleng; return OP_GTE;
">"								col += yyleng; return OP_GT;
"<="							col += yyleng; return OP_LTE;
"<"								col += yyleng; return OP_LT;
"-"								col += yyleng; return OP_SUB;
"<>"							col += yyleng; return OP_NEQ;
"+"								col += yyleng; return OP_ADD;
"/"								col += yyleng; return OP_SLASH;
"*"								col += yyleng; return OP_MUL;
"**"							col += yyleng; return OP_EXP;
"^"								col += yyleng; return OP_PTR;
"true"							{			
									//TableIdentifier::_lastBoolean = true;
									TableIdentifier::last_token = "true";
									col += yyleng;
									return TOK_BOOLEAN;
								}
"false"							{
									//TableIdentifier::_lastBoolean = false;
									TableIdentifier::last_token = "false";
									col += yyleng;
									return TOK_BOOLEAN;
								}

[a-zA-Z]([a-zA-Z0-9_])*         {
                                    /*TableIdentifier::_lastIdentifier = yytext;
                                    TableIdentifier* ti = TableIdentifier::getInstance();

                                    ti->add(yytext);
                                    col += yyleng;*/
									TableIdentifier::last_token = string(yytext);
									col += yyleng;
                                    return TOK_IDENT;
                                }

'({NQUOTE}|'')+'                {
                                    /*TableIdentifier::_lastString = yytext;*/
									TableIdentifier::last_token = string(yytext);
                                    col += yyleng;

                                    return TOK_STRING;
                                }
{DIGITS}						{
									/*int digits = atoi(yytext);
                                    TableIdentifier::_lastInteger = digits;
									TableIdentifier::_lastReal = digits;*/
									TableIdentifier::last_token = string(yytext);
                                    col += yyleng;

                                    return TOK_INTEGER;
                                }
{DIGITS}"."{DIGITS}				{
									/*TableIdentifier::_lastReal = atof(yytext);*/
									TableIdentifier::last_token = string(yytext);
                                    col += yyleng;

									return TOK_REAL;
                                }
":"                             col += yyleng; return SEP_DOTS;
";"                             col += yyleng; return SEP_SCOL;
","                             col += yyleng; return SEP_COMMA;
"."                             col += yyleng; return SEP_DOT;
".."                            col += yyleng; return SEP_DOTDOT;
"["                             col += yyleng; return SEP_CO;
"]"                             col += yyleng; return SEP_CF;
"("                             col += yyleng; return SEP_PO;
")"                             col += yyleng; return SEP_PF;

"(*" |
"{"                             {
                                    register int c;
                                    while ((c = yyinput())) {
                                        col ++;
                                        if (c == '}')
                                            break;
                                        else if (c == '*') {
                                            if ((c = yyinput()) == ')') {
                                                break;
											}
                                            else {
                                                unput (c);
											}
                                        }
                                        else if (c == '\n') {
                                            row ++;
                                            col = 1;
                                        }
                                        else if (c == 0) {
                                            commenteof ();
										}
                                    }
                                }

[ \t\f]                         col++;
\n                              row++; col = 1;
.                               {
                                    fprintf (stderr, "'%c' (0%o): illegal character at line %d, col %d\n", yytext[0], yytext[0], row, col );
                                }

%%


int yyerror ( char* m ) {
	fprintf (stderr, "Error (%d,%d) [%s] : %s\n", row, col, yytext, m);
	return 1;
}

void commenteof () {
	fprintf(stderr, "unexpected EOF inside comment at line %d, col %d\n", row, col);
	exit(1);
}
