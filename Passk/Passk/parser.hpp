#include"node.h"
#include"node.h"
#include"node.h"
/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KW_PROGRAM = 258,
     KW_CONST = 259,
     KW_TYPE = 260,
     KW_VAR = 261,
     KW_ARRAY = 262,
     KW_OF = 263,
     KW_RECORD = 264,
     KW_BEGIN = 265,
     KW_END = 266,
     KW_DIV = 267,
     KW_MOD = 268,
     KW_AND = 269,
     KW_OR = 270,
     KW_XOR = 271,
     KW_NOT = 272,
     KW_IF = 273,
     KW_THEN = 274,
     KW_ELSE = 275,
     KW_CASE = 276,
     KW_WHILE = 277,
     KW_DO = 278,
     KW_REPEAT = 279,
     KW_UNTIL = 280,
     KW_FOR = 281,
     KW_TO = 282,
     KW_DOWNTO = 283,
     KW_PROC = 284,
     KW_FUNC = 285,
     KW_NIL = 286,
     KW_INTEGER = 287,
     KW_REAL = 288,
     KW_BOOLEAN = 289,
     KW_CHAR = 290,
     KW_STRING = 291,
     SEP_SCOL = 292,
     SEP_DOT = 293,
     SEP_DOTS = 294,
     SEP_DOTDOT = 295,
     SEP_COMMA = 296,
     SEP_CO = 297,
     SEP_CF = 298,
     SEP_PO = 299,
     SEP_PF = 300,
     OP_EQ = 301,
     OP_NEQ = 302,
     OP_LT = 303,
     OP_LTE = 304,
     OP_GT = 305,
     OP_GTE = 306,
     OP_ADD = 307,
     OP_SUB = 308,
     OP_MUL = 309,
     OP_SLASH = 310,
     OP_EXP = 311,
     OP_PTR = 312,
     OP_AFFECT = 313,
     TOK_IDENT = 314,
     TOK_INTEGER = 315,
     TOK_REAL = 316,
     TOK_BOOLEAN = 317,
     TOK_STRING = 318,
     OP_POS = 319,
     OP_NEG = 320,
     OP_DOT = 321,
     KW_IFX = 322,
     KW_CASEX = 323
   };
#endif
/* Tokens.  */
#define KW_PROGRAM 258
#define KW_CONST 259
#define KW_TYPE 260
#define KW_VAR 261
#define KW_ARRAY 262
#define KW_OF 263
#define KW_RECORD 264
#define KW_BEGIN 265
#define KW_END 266
#define KW_DIV 267
#define KW_MOD 268
#define KW_AND 269
#define KW_OR 270
#define KW_XOR 271
#define KW_NOT 272
#define KW_IF 273
#define KW_THEN 274
#define KW_ELSE 275
#define KW_CASE 276
#define KW_WHILE 277
#define KW_DO 278
#define KW_REPEAT 279
#define KW_UNTIL 280
#define KW_FOR 281
#define KW_TO 282
#define KW_DOWNTO 283
#define KW_PROC 284
#define KW_FUNC 285
#define KW_NIL 286
#define KW_INTEGER 287
#define KW_REAL 288
#define KW_BOOLEAN 289
#define KW_CHAR 290
#define KW_STRING 291
#define SEP_SCOL 292
#define SEP_DOT 293
#define SEP_DOTS 294
#define SEP_DOTDOT 295
#define SEP_COMMA 296
#define SEP_CO 297
#define SEP_CF 298
#define SEP_PO 299
#define SEP_PF 300
#define OP_EQ 301
#define OP_NEQ 302
#define OP_LT 303
#define OP_LTE 304
#define OP_GT 305
#define OP_GTE 306
#define OP_ADD 307
#define OP_SUB 308
#define OP_MUL 309
#define OP_SLASH 310
#define OP_EXP 311
#define OP_PTR 312
#define OP_AFFECT 313
#define TOK_IDENT 314
#define TOK_INTEGER 315
#define TOK_REAL 316
#define TOK_BOOLEAN 317
#define TOK_STRING 318
#define OP_POS 319
#define OP_NEG 320
#define OP_DOT 321
#define KW_IFX 322
#define KW_CASEX 323




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 27 "parser.y"
{
	int v_int;
	double v_real;
	bool v_bool;
	std::string* str;
	Program* _program;
	ConstDecl* _constdecl;
	TypeDecl* _typedecl;
	VarDecl* _vardecl;
	VarList* _varlist;
	FuncDecl* _funcdecl;
	Expr* _expr;
	ListInstr* _listinstr;
	Instr* _instr;
	Type *_type;
	CodeBlock* _codeblock;
	ListParameters* _listparams;
	Block* _block;
}
/* Line 1529 of yacc.c.  */
#line 205 "parser.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

