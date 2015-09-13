#include"node.h"
/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "parser.y"


#include <cstddef>
#include <iostream>
#include <vector>
#include <string>

#include <stdio.h>
#include "Symtab.h"

#include "node.h"

extern int yylex();
extern int yyerror(char*);
using namespace std;

void initSymbolTable();
void pushTable();
void popTable();


Symtab* roottab;
Symtab* currtab;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

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
	FuncDecl* _funcdecl;
}
/* Line 193 of yacc.c.  */
#line 270 "parser.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 283 "parser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   406

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNRULES -- Number of states.  */
#define YYNSTATES  239

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    17,    20,    21,    24,    26,
      31,    34,    35,    38,    40,    45,    48,    49,    52,    54,
      59,    63,    65,    68,    69,    73,    75,    77,    79,    83,
      85,    88,    91,    95,    99,   101,   103,   105,   109,   114,
     118,   121,   125,   128,   131,   133,   135,   137,   139,   141,
     143,   145,   147,   149,   151,   153,   157,   159,   162,   164,
     166,   173,   177,   179,   181,   183,   187,   191,   193,   197,
     200,   204,   209,   212,   216,   218,   223,   228,   237,   242,
     249,   256,   260,   262,   264,   268,   270,   274,   276,   278,
     280,   282,   284,   286,   288,   290,   292,   294,   296,   298,
     302,   306,   310,   314,   318,   322,   326,   330,   334,   338,
     342,   346,   350,   354,   358,   362,   365,   369,   371,   373,
     375,   377,   379,   381,   386,   389,   392,   394,   398,   401,
     405,   407,   411
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      70,     0,    -1,    71,    37,    72,    38,    -1,     3,    59,
      -1,    73,    76,    79,    83,   111,    -1,     4,    74,    -1,
      -1,    74,    75,    -1,    75,    -1,    59,    46,   119,    37,
      -1,     5,    77,    -1,    -1,    77,    78,    -1,    78,    -1,
      59,    46,    98,    37,    -1,     6,    80,    -1,    -1,    80,
      81,    -1,    81,    -1,    82,    39,    98,    37,    -1,    82,
      41,    59,    -1,    59,    -1,    84,    37,    -1,    -1,    84,
      37,    85,    -1,    85,    -1,    86,    -1,    94,    -1,    87,
      37,    72,    -1,    88,    -1,    88,    89,    -1,    29,    59,
      -1,    44,    90,    45,    -1,    90,    37,    91,    -1,    91,
      -1,    92,    -1,    93,    -1,    82,    39,   100,    -1,     6,
      82,    39,   100,    -1,    95,    37,    72,    -1,    96,    97,
      -1,    96,    89,    97,    -1,    30,    59,    -1,    39,   100,
      -1,   100,    -1,    99,    -1,   101,    -1,   104,    -1,   107,
      -1,   110,    -1,    32,    -1,    33,    -1,    34,    -1,    35,
      -1,    36,    -1,   102,    40,   102,    -1,   103,    -1,    53,
     103,    -1,    59,    -1,    60,    -1,     7,    42,   105,    43,
       8,    98,    -1,   105,    41,   106,    -1,   106,    -1,    59,
      -1,   101,    -1,     9,   108,    11,    -1,   108,    37,   109,
      -1,   109,    -1,    82,    39,    98,    -1,    57,    98,    -1,
      10,   112,    11,    -1,    10,   112,    37,    11,    -1,    10,
      11,    -1,   112,    37,   113,    -1,   113,    -1,    22,   119,
      23,   113,    -1,    24,   112,    25,   119,    -1,    26,   117,
      58,   119,   118,   119,    23,   113,    -1,    18,   119,    19,
     113,    -1,    18,   119,    19,   113,    20,   113,    -1,    21,
     119,     8,   114,    37,    11,    -1,   120,    58,   119,    -1,
     126,    -1,   111,    -1,   114,    37,   115,    -1,   115,    -1,
     116,    39,   113,    -1,    63,    -1,    60,    -1,    59,    -1,
      27,    -1,    28,    -1,   121,    -1,   122,    -1,   123,    -1,
     124,    -1,   125,    -1,   126,    -1,    59,    -1,   119,    52,
     119,    -1,   119,    53,   119,    -1,   119,    54,   119,    -1,
     119,    55,   119,    -1,   119,    12,   119,    -1,   119,    13,
     119,    -1,   119,    56,   119,    -1,   119,    46,   119,    -1,
     119,    47,   119,    -1,   119,    48,   119,    -1,   119,    49,
     119,    -1,   119,    50,   119,    -1,   119,    51,   119,    -1,
     119,    14,   119,    -1,   119,    15,   119,    -1,   119,    16,
     119,    -1,    17,   119,    -1,    44,   119,    45,    -1,    60,
      -1,    61,    -1,    62,    -1,    31,    -1,    63,    -1,    59,
      -1,   125,    42,   129,    43,    -1,   125,    57,    -1,   127,
     128,    -1,    59,    -1,    44,   130,    45,    -1,    44,    45,
      -1,   129,    41,   119,    -1,   119,    -1,   130,    41,   119,
      -1,   119,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   196,   196,   202,   208,   214,   219,   224,   228,   234,
     241,   246,   251,   255,   261,   267,   272,   277,   281,   287,
     293,   297,   303,   308,   313,   317,   323,   327,   333,   339,
     343,   349,   355,   361,   365,   371,   375,   381,   387,   393,
     399,   403,   409,   415,   421,   425,   431,   435,   439,   443,
     449,   453,   457,   461,   465,   472,   478,   482,   488,   492,
     499,   505,   509,   515,   519,   525,   531,   535,   541,   547,
     553,   557,   561,   567,   571,   577,   581,   585,   589,   593,
     597,   601,   605,   609,   616,   620,   626,   632,   636,   642,
     647,   651,   657,   661,   665,   669,   673,   677,   683,   688,
     692,   696,   700,   704,   708,   712,   718,   722,   726,   730,
     734,   738,   744,   748,   752,   756,   762,   766,   770,   774,
     778,   782,   788,   792,   796,   802,   808,   813,   817,   823,
     827,   833,   837
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_PROGRAM", "KW_CONST", "KW_TYPE",
  "KW_VAR", "KW_ARRAY", "KW_OF", "KW_RECORD", "KW_BEGIN", "KW_END",
  "KW_DIV", "KW_MOD", "KW_AND", "KW_OR", "KW_XOR", "KW_NOT", "KW_IF",
  "KW_THEN", "KW_ELSE", "KW_CASE", "KW_WHILE", "KW_DO", "KW_REPEAT",
  "KW_UNTIL", "KW_FOR", "KW_TO", "KW_DOWNTO", "KW_PROC", "KW_FUNC",
  "KW_NIL", "KW_INTEGER", "KW_REAL", "KW_BOOLEAN", "KW_CHAR", "KW_STRING",
  "SEP_SCOL", "SEP_DOT", "SEP_DOTS", "SEP_DOTDOT", "SEP_COMMA", "SEP_CO",
  "SEP_CF", "SEP_PO", "SEP_PF", "OP_EQ", "OP_NEQ", "OP_LT", "OP_LTE",
  "OP_GT", "OP_GTE", "OP_ADD", "OP_SUB", "OP_MUL", "OP_SLASH", "OP_EXP",
  "OP_PTR", "OP_AFFECT", "TOK_IDENT", "TOK_INTEGER", "TOK_REAL",
  "TOK_BOOLEAN", "TOK_STRING", "OP_POS", "OP_NEG", "OP_DOT", "KW_IFX",
  "KW_CASEX", "$accept", "Program", "ProgramHeader", "Block",
  "BlockDeclConst", "ListDeclConst", "DeclConst", "BlockDeclType",
  "ListDeclType", "DeclType", "BlockDeclVar", "ListDeclVar", "DeclVar",
  "ListIdent", "BlockDeclFunc", "ListDeclFunc", "DeclFunc", "ProcDecl",
  "ProcHeader", "ProcIdent", "FormalArgs", "ListFormalArgs", "FormalArg",
  "ValFormalArg", "VarFormalArg", "FuncDecl", "FuncHeader", "FuncIdent",
  "FuncResult", "Type", "UserType", "BaseType", "InterType", "InterBase",
  "NSInterBase", "ArrayType", "ListArrayIndex", "ArrayIndex", "RecordType",
  "RecordFields", "RecordField", "PointerType", "BlockCode", "ListInstr",
  "Instr", "CaseInstr", "Single_case_instr", "CaseTag", "ForIdent",
  "ForDirection", "Expression", "LeftExpr", "MathExpr", "CompExpr",
  "BoolExpr", "AtomExpr", "VarExpr", "Call", "CallHeader", "Parameters",
  "ListIndices", "ListParameters", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    72,    73,    73,    74,    74,    75,
      76,    76,    77,    77,    78,    79,    79,    80,    80,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    87,
      87,    88,    89,    90,    90,    91,    91,    92,    93,    94,
      95,    95,    96,    97,    98,    98,    99,    99,    99,    99,
     100,   100,   100,   100,   100,   101,   102,   102,   103,   103,
     104,   105,   105,   106,   106,   107,   108,   108,   109,   110,
     111,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   114,   114,   115,   116,   116,   117,
     118,   118,   119,   119,   119,   119,   119,   119,   120,   121,
     121,   121,   121,   121,   121,   121,   122,   122,   122,   122,
     122,   122,   123,   123,   123,   123,   124,   124,   124,   124,
     124,   124,   125,   125,   125,   126,   127,   128,   128,   129,
     129,   130,   130
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     5,     2,     0,     2,     1,     4,
       2,     0,     2,     1,     4,     2,     0,     2,     1,     4,
       3,     1,     2,     0,     3,     1,     1,     1,     3,     1,
       2,     2,     3,     3,     1,     1,     1,     3,     4,     3,
       2,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     1,     1,
       6,     3,     1,     1,     1,     3,     3,     1,     3,     2,
       3,     4,     2,     3,     1,     4,     4,     8,     4,     6,
       6,     3,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     1,     1,
       1,     1,     1,     4,     2,     2,     1,     3,     2,     3,
       1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     6,     0,     0,    11,
       0,     5,     8,     2,     0,    16,     0,     7,     0,    10,
      13,     0,    23,     0,   120,     0,   122,   117,   118,   119,
     121,     0,    92,    93,    94,    95,    96,    97,     0,     0,
      12,    21,    15,    18,     0,     0,     0,     0,     0,    25,
      26,     0,    29,    27,     0,     0,   115,     0,     0,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,     0,   125,     0,
       0,    50,    51,    52,    53,    54,     0,     0,    58,    59,
       0,    45,    44,    46,     0,    56,    47,    48,    49,    17,
       0,     0,    31,    42,     0,     4,    22,     6,     0,    30,
       6,     0,     0,    40,   116,   103,   104,   112,   113,   114,
     106,   107,   108,   109,   110,   111,    99,   100,   101,   102,
     105,   130,     0,   128,   132,     0,     0,     0,     0,    67,
      57,    69,    14,     0,     0,    20,    72,     0,     0,     0,
       0,     0,    98,    83,     0,    74,     0,    82,    24,    28,
       0,     0,     0,    34,    35,    36,    39,    43,    41,     0,
     123,     0,   127,    63,    64,     0,    62,     0,    65,     0,
      55,    19,     0,     0,     0,     0,    89,     0,    70,     0,
       0,     0,     0,     0,    32,   129,   131,     0,     0,    68,
      66,     0,     0,     0,     0,     0,     0,    71,    73,    81,
       0,    37,    33,    61,     0,    78,    88,    87,     0,    85,
       0,    75,    76,     0,    38,    60,     0,     0,     0,    90,
      91,     0,    79,    80,    84,    86,     0,     0,    77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    11,    12,    15,    19,    20,
      22,    42,    43,    44,    47,    48,    49,    50,    51,    52,
     109,   162,   163,   164,   165,    53,    54,    55,   113,    90,
      91,    92,    93,    94,    95,    96,   175,   176,    97,   138,
     139,    98,   153,   154,   155,   218,   219,   220,   187,   231,
      31,   156,    32,    33,    34,    35,    36,    37,    38,    78,
     132,   135
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -132
static const yytype_int16 yypact[] =
{
      37,   -44,    33,    25,  -132,  -132,   101,    51,    80,   137,
     123,    51,  -132,  -132,   115,   170,   154,  -132,   131,   115,
    -132,   121,   104,   154,  -132,   154,   138,  -132,  -132,  -132,
    -132,   219,  -132,  -132,  -132,  -132,   -30,  -132,   140,    54,
    -132,  -132,   121,  -132,   -28,   132,   133,   189,   163,  -132,
    -132,   172,   166,  -132,   175,    30,   155,   191,   154,   154,
     154,   154,   154,  -132,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,  -132,   134,  -132,   176,
     121,  -132,  -132,  -132,  -132,  -132,   113,    54,  -132,  -132,
     182,  -132,  -132,  -132,   213,  -132,  -132,  -132,  -132,  -132,
      54,   195,  -132,  -132,    -1,  -132,   104,   101,     0,  -132,
     101,    65,   218,  -132,  -132,   155,   155,   155,    81,    81,
     305,   305,   305,   305,   305,   305,    81,    81,   155,   155,
    -132,   350,   -19,  -132,   350,    32,    12,    91,    44,  -132,
    -132,  -132,  -132,    85,   221,  -132,  -132,   154,   154,   154,
      58,   200,   138,  -132,    59,  -132,   202,  -132,  -132,  -132,
     121,   108,    19,  -132,  -132,  -132,  -132,  -132,  -132,   154,
    -132,   154,  -132,   222,  -132,   109,  -132,    54,  -132,   121,
    -132,  -132,   236,   107,   281,    -9,  -132,   203,  -132,     8,
     154,   129,    65,     0,  -132,   350,   350,    12,   255,  -132,
    -132,    58,    15,    58,   154,    58,   154,  -132,  -132,   350,
      65,  -132,  -132,  -132,    54,   244,  -132,  -132,   239,  -132,
     238,  -132,   350,   174,  -132,  -132,    58,    -3,    58,  -132,
    -132,   154,  -132,  -132,  -132,  -132,   293,    58,  -132
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,     2,  -132,  -132,   267,  -132,  -132,   260,
    -132,  -132,   256,   -77,  -132,  -132,   193,  -132,  -132,  -132,
     225,  -132,    88,  -132,  -132,  -132,  -132,  -132,   188,   -86,
    -132,  -107,  -131,   158,   216,  -132,  -132,   106,  -132,  -132,
     135,  -132,   263,   161,   -62,  -132,    86,  -132,  -132,  -132,
     -23,  -132,  -132,  -132,  -132,  -132,  -132,   -97,  -132,  -132,
    -132,  -132
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -127
static const yytype_int16 yytable[] =
{
      56,   141,    57,   137,   167,   174,   160,   157,   233,   104,
     146,   100,    75,   101,   144,     4,   204,   147,   104,   207,
     148,   149,   169,   150,   170,   151,   147,    76,   205,   148,
     149,   161,   150,     5,   151,   115,   116,   117,   118,   119,
       1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   157,   134,   178,   193,   216,   152,    41,
     217,    79,     6,    80,   194,    86,   174,   152,   104,   111,
     188,   173,    89,   171,   108,   216,   147,   172,   217,   148,
     149,   179,   150,   191,   151,   211,    81,    82,    83,    84,
      85,   199,   157,    58,    59,    60,   189,    81,    82,    83,
      84,    85,   137,   224,   157,     7,   157,    86,   157,   159,
      10,    87,   166,    88,    89,   202,   161,   152,    13,    58,
      59,    60,    61,    62,   182,   183,   184,   208,   225,   157,
     177,   157,   101,    45,    46,    72,    73,    74,    86,   215,
     157,   221,    14,   208,    88,    89,   195,   192,   196,   101,
     197,    23,   198,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,   232,    24,   235,   209,   210,    16,
     101,    23,    88,    89,    18,   238,    21,    39,    25,   133,
      41,   222,  -126,   223,    77,    24,    58,    59,    60,    61,
      62,   102,   103,    26,    27,    28,    29,    30,    25,   104,
     106,   229,   230,    58,    59,    60,    61,    62,   236,   107,
     108,    74,   110,    26,    27,    28,    29,    30,   136,   142,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    58,    59,    60,    61,    62,   114,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    58,    59,
      60,    61,    62,   143,   145,   201,    63,   111,   181,   186,
     190,   206,   -58,   214,   226,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,   227,   228,    17,    40,
     112,   212,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    58,    59,    60,    61,    62,    99,   158,
     168,   180,   140,   213,   203,    58,    59,    60,    61,    62,
     105,   185,     0,   234,   200,     0,   237,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
       0,  -127,  -127,  -127,  -127,  -127,  -127,    70,    71,    72,
      73,    74,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74
};

static const yytype_int16 yycheck[] =
{
      23,    87,    25,    80,   111,   136,     6,   104,    11,    10,
      11,    39,    42,    41,   100,    59,    25,    18,    10,    11,
      21,    22,    41,    24,    43,    26,    18,    57,    37,    21,
      22,   108,    24,     0,    26,    58,    59,    60,    61,    62,
       3,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,   150,    77,    11,    37,    60,    59,    59,
      63,     7,    37,     9,    45,    53,   197,    59,    10,    39,
      11,    59,    60,    41,    44,    60,    18,    45,    63,    21,
      22,    37,    24,   160,    26,   192,    32,    33,    34,    35,
      36,   177,   189,    12,    13,    14,    37,    32,    33,    34,
      35,    36,   179,   210,   201,     4,   203,    53,   205,   107,
      59,    57,   110,    59,    60,     8,   193,    59,    38,    12,
      13,    14,    15,    16,   147,   148,   149,   189,   214,   226,
      39,   228,    41,    29,    30,    54,    55,    56,    53,   201,
     237,   203,     5,   205,    59,    60,   169,    39,   171,    41,
      41,    17,    43,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,   226,    31,   228,   190,    39,    46,
      41,    17,    59,    60,    59,   237,     6,    46,    44,    45,
      59,   204,    44,   206,    44,    31,    12,    13,    14,    15,
      16,    59,    59,    59,    60,    61,    62,    63,    44,    10,
      37,    27,    28,    12,    13,    14,    15,    16,   231,    37,
      44,    56,    37,    59,    60,    61,    62,    63,    42,    37,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    12,    13,    14,    15,    16,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    12,    13,
      14,    15,    16,    40,    59,    19,    37,    39,    37,    59,
      58,    58,    40,     8,    20,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    37,    39,    11,    19,
      55,   193,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    12,    13,    14,    15,    16,    42,   106,
     112,   143,    86,   197,    23,    12,    13,    14,    15,    16,
      47,   150,    -1,   227,   179,    -1,    23,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    70,    71,    59,     0,    37,     4,    72,    73,
      59,    74,    75,    38,     5,    76,    46,    75,    59,    77,
      78,     6,    79,    17,    31,    44,    59,    60,    61,    62,
      63,   119,   121,   122,   123,   124,   125,   126,   127,    46,
      78,    59,    80,    81,    82,    29,    30,    83,    84,    85,
      86,    87,    88,    94,    95,    96,   119,   119,    12,    13,
      14,    15,    16,    37,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    42,    57,    44,   128,     7,
       9,    32,    33,    34,    35,    36,    53,    57,    59,    60,
      98,    99,   100,   101,   102,   103,   104,   107,   110,    81,
      39,    41,    59,    59,    10,   111,    37,    37,    44,    89,
      37,    39,    89,    97,    45,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   129,    45,   119,   130,    42,    82,   108,   109,
     103,    98,    37,    40,    98,    59,    11,    18,    21,    22,
      24,    26,    59,   111,   112,   113,   120,   126,    85,    72,
       6,    82,    90,    91,    92,    93,    72,   100,    97,    41,
      43,    41,    45,    59,   101,   105,   106,    39,    11,    37,
     102,    37,   119,   119,   119,   112,    59,   117,    11,    37,
      58,    82,    39,    37,    45,   119,   119,    41,    43,    98,
     109,    19,     8,    23,    25,    37,    58,    11,   113,   119,
      39,   100,    91,   106,     8,   113,    60,    63,   114,   115,
     116,   113,   119,   119,   100,    98,    20,    37,    39,    27,
      28,   118,   113,    11,   115,   113,   119,    23,   113
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 197 "parser.y"
    {
					
                ;}
    break;

  case 3:
#line 203 "parser.y"
    {
                    initSymbolTable();
                ;}
    break;

  case 4:
#line 209 "parser.y"
    {
					
                ;}
    break;

  case 5:
#line 215 "parser.y"
    {
					
				;}
    break;

  case 6:
#line 219 "parser.y"
    {
					
				;}
    break;

  case 7:
#line 225 "parser.y"
    {
					
				;}
    break;

  case 8:
#line 229 "parser.y"
    {
					
				;}
    break;

  case 9:
#line 235 "parser.y"
    {
                    

                ;}
    break;

  case 10:
#line 242 "parser.y"
    {
					
				;}
    break;

  case 11:
#line 246 "parser.y"
    {
					
				;}
    break;

  case 12:
#line 252 "parser.y"
    {
					
				;}
    break;

  case 13:
#line 256 "parser.y"
    {
					
				;}
    break;

  case 14:
#line 262 "parser.y"
    {
					
				;}
    break;

  case 15:
#line 268 "parser.y"
    {
					printf("var get!\n");
				;}
    break;

  case 16:
#line 272 "parser.y"
    {
					
				;}
    break;

  case 17:
#line 278 "parser.y"
    {
					
				;}
    break;

  case 18:
#line 282 "parser.y"
    {
					
				;}
    break;

  case 19:
#line 288 "parser.y"
    {
                    
                ;}
    break;

  case 20:
#line 294 "parser.y"
    {
					
                ;}
    break;

  case 21:
#line 298 "parser.y"
    {
					
                ;}
    break;

  case 22:
#line 304 "parser.y"
    {
					
				;}
    break;

  case 23:
#line 308 "parser.y"
    {
					
				;}
    break;

  case 24:
#line 314 "parser.y"
    {
					
				;}
    break;

  case 25:
#line 318 "parser.y"
    {
					
				;}
    break;

  case 26:
#line 324 "parser.y"
    {
					
				;}
    break;

  case 27:
#line 328 "parser.y"
    {
					
				;}
    break;

  case 28:
#line 334 "parser.y"
    {
					
				;}
    break;

  case 29:
#line 340 "parser.y"
    {
					
				;}
    break;

  case 30:
#line 344 "parser.y"
    {
					
				;}
    break;

  case 31:
#line 350 "parser.y"
    {
                    
                ;}
    break;

  case 32:
#line 356 "parser.y"
    {
					
				;}
    break;

  case 33:
#line 362 "parser.y"
    {
					
				;}
    break;

  case 34:
#line 366 "parser.y"
    {
					
				;}
    break;

  case 35:
#line 372 "parser.y"
    {
					
				;}
    break;

  case 36:
#line 376 "parser.y"
    {
					
				;}
    break;

  case 37:
#line 382 "parser.y"
    {
					
				;}
    break;

  case 38:
#line 388 "parser.y"
    {
					
				;}
    break;

  case 39:
#line 394 "parser.y"
    {
					
				;}
    break;

  case 40:
#line 400 "parser.y"
    {
					
				;}
    break;

  case 41:
#line 404 "parser.y"
    {
					
				;}
    break;

  case 42:
#line 410 "parser.y"
    {
                    
                ;}
    break;

  case 43:
#line 416 "parser.y"
    {
					
				;}
    break;

  case 44:
#line 422 "parser.y"
    {
					
				;}
    break;

  case 45:
#line 426 "parser.y"
    {
					
				;}
    break;

  case 46:
#line 432 "parser.y"
    {
					
				;}
    break;

  case 47:
#line 436 "parser.y"
    {
					
				;}
    break;

  case 48:
#line 440 "parser.y"
    {
					
				;}
    break;

  case 49:
#line 444 "parser.y"
    {
					
				;}
    break;

  case 50:
#line 450 "parser.y"
    {
                    
                ;}
    break;

  case 51:
#line 454 "parser.y"
    {
                    
                ;}
    break;

  case 52:
#line 458 "parser.y"
    {
                    
                ;}
    break;

  case 53:
#line 462 "parser.y"
    {
                   
                ;}
    break;

  case 54:
#line 466 "parser.y"
    {
                    
                ;}
    break;

  case 55:
#line 473 "parser.y"
    {
                   
                ;}
    break;

  case 56:
#line 479 "parser.y"
    {
                   
                ;}
    break;

  case 57:
#line 483 "parser.y"
    {
                    
                ;}
    break;

  case 58:
#line 489 "parser.y"
    {
					
                ;}
    break;

  case 59:
#line 493 "parser.y"
    {
					
                ;}
    break;

  case 60:
#line 500 "parser.y"
    {
                    
                ;}
    break;

  case 61:
#line 506 "parser.y"
    {
                    
                ;}
    break;

  case 62:
#line 510 "parser.y"
    {
                    
                ;}
    break;

  case 63:
#line 516 "parser.y"
    {
					
                ;}
    break;

  case 64:
#line 520 "parser.y"
    {
                    
                ;}
    break;

  case 65:
#line 526 "parser.y"
    {
                    
                ;}
    break;

  case 66:
#line 532 "parser.y"
    {
                    
                ;}
    break;

  case 67:
#line 536 "parser.y"
    {
                    
                ;}
    break;

  case 68:
#line 542 "parser.y"
    {
                    
                ;}
    break;

  case 69:
#line 548 "parser.y"
    {
                    
                ;}
    break;

  case 70:
#line 554 "parser.y"
    {
                    
                ;}
    break;

  case 71:
#line 558 "parser.y"
    {
                    
                ;}
    break;

  case 72:
#line 562 "parser.y"
    {
                    
                ;}
    break;

  case 73:
#line 568 "parser.y"
    {
                    
                ;}
    break;

  case 74:
#line 572 "parser.y"
    {
                    
                ;}
    break;

  case 75:
#line 578 "parser.y"
    {
                    
                ;}
    break;

  case 76:
#line 582 "parser.y"
    {
                    
                ;}
    break;

  case 77:
#line 586 "parser.y"
    {
                    
                ;}
    break;

  case 78:
#line 590 "parser.y"
    {
                    
                ;}
    break;

  case 79:
#line 594 "parser.y"
    {
                    
                ;}
    break;

  case 80:
#line 598 "parser.y"
    {
                   
                ;}
    break;

  case 81:
#line 602 "parser.y"
    {
                   
                ;}
    break;

  case 82:
#line 606 "parser.y"
    {
                   
                ;}
    break;

  case 83:
#line 610 "parser.y"
    {
                   
                ;}
    break;

  case 84:
#line 617 "parser.y"
    {
                    
                ;}
    break;

  case 85:
#line 621 "parser.y"
    {
                    
                ;}
    break;

  case 86:
#line 627 "parser.y"
    {
                        
                   ;}
    break;

  case 87:
#line 633 "parser.y"
    {
					
                ;}
    break;

  case 88:
#line 637 "parser.y"
    {
					
                ;}
    break;

  case 89:
#line 643 "parser.y"
    {
					 
                ;}
    break;

  case 90:
#line 648 "parser.y"
    {
					
                ;}
    break;

  case 91:
#line 652 "parser.y"
    {
					 
                ;}
    break;

  case 92:
#line 658 "parser.y"
    {
					
                ;}
    break;

  case 93:
#line 662 "parser.y"
    {
					 
                ;}
    break;

  case 94:
#line 666 "parser.y"
    {
					
                ;}
    break;

  case 95:
#line 670 "parser.y"
    {
					
                ;}
    break;

  case 96:
#line 674 "parser.y"
    {
					
                ;}
    break;

  case 97:
#line 678 "parser.y"
    {
					
                ;}
    break;

  case 98:
#line 684 "parser.y"
    {
					 
                ;}
    break;

  case 99:
#line 689 "parser.y"
    {
					
                ;}
    break;

  case 100:
#line 693 "parser.y"
    {
					
                ;}
    break;

  case 101:
#line 697 "parser.y"
    {
					
                ;}
    break;

  case 102:
#line 701 "parser.y"
    {
					 
                ;}
    break;

  case 103:
#line 705 "parser.y"
    {
					 
                ;}
    break;

  case 104:
#line 709 "parser.y"
    {
					
                ;}
    break;

  case 105:
#line 713 "parser.y"
    {
					 
                ;}
    break;

  case 106:
#line 719 "parser.y"
    {
					
                ;}
    break;

  case 107:
#line 723 "parser.y"
    {
					 
                ;}
    break;

  case 108:
#line 727 "parser.y"
    {
					 
                ;}
    break;

  case 109:
#line 731 "parser.y"
    {
					 
                ;}
    break;

  case 110:
#line 735 "parser.y"
    {
					 
                ;}
    break;

  case 111:
#line 739 "parser.y"
    {
					 
                ;}
    break;

  case 112:
#line 745 "parser.y"
    {
					 
                ;}
    break;

  case 113:
#line 749 "parser.y"
    {
					
                ;}
    break;

  case 114:
#line 753 "parser.y"
    {
					
                ;}
    break;

  case 115:
#line 757 "parser.y"
    {
					
                ;}
    break;

  case 116:
#line 763 "parser.y"
    {
					
                ;}
    break;

  case 117:
#line 767 "parser.y"
    {
					
                ;}
    break;

  case 118:
#line 771 "parser.y"
    {
					
                ;}
    break;

  case 119:
#line 775 "parser.y"
    {
					
                ;}
    break;

  case 120:
#line 779 "parser.y"
    {
					 
                ;}
    break;

  case 121:
#line 783 "parser.y"
    {
					
                ;}
    break;

  case 122:
#line 789 "parser.y"
    {
					
                ;}
    break;

  case 123:
#line 793 "parser.y"
    {
					
                ;}
    break;

  case 124:
#line 797 "parser.y"
    {
					
                ;}
    break;

  case 125:
#line 803 "parser.y"
    {
                   
                ;}
    break;

  case 126:
#line 809 "parser.y"
    {
					
                ;}
    break;

  case 127:
#line 814 "parser.y"
    {
                    
                ;}
    break;

  case 128:
#line 818 "parser.y"
    {
                    
                ;}
    break;

  case 129:
#line 824 "parser.y"
    {
					
				;}
    break;

  case 130:
#line 828 "parser.y"
    {
					
				;}
    break;

  case 131:
#line 834 "parser.y"
    {
					
				;}
    break;

  case 132:
#line 838 "parser.y"
    {
					
				;}
    break;


/* Line 1267 of yacc.c.  */
#line 2669 "parser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 843 "parser.y"

void initSymbolTable(){
	roottab = new Symtab();
	currtab = roottab;
}

void pushTable(){
	Symtab* tmp = new Symtab();
	tmp->next = currtab;
	currtab = tmp;
}

void popTable(){
	if (currtab->next==NULL)
	{
		printf("error symbol table pop\n");
	}
	else{
		currtab = currtab->next;
	}
}


// extern FILE* yyin;

// int main(int argc, char** argv)
// {
//     int state = 0;

//     if (argc != 2) {
//         cout << "You must specify a file." << endl;
//         return 1;
//     }

//     yyin = fopen(argv[1], "r");
//     state = yyparse();

//     if (state == 0) {
//         firstContext->dump();
//         ti->dump();

//         // G¨¦n¨¦ration du code 3@
//         dumpCode(rootNode);
//     }

//     return 0;
// }


