/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"


#include <cstddef>
#include <iostream>
#include <vector>
#include <string>

#include <stdio.h>
#include "TableIdentifier.h"

#include "node.h"

extern int yylex();
extern int yyerror(char*);
using namespace std;

node* root = NULL;
string TableIdentifier::last_token;

/* Line 371 of yacc.c  */
#line 88 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

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


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 21 "parser.y"

	node_program* _node_program;
	node_program_header* _node_program_header;
	node_block* _node_block;
	node_block_decl_const* _node_block_decl_const;
	node_list_decl_const* _node_list_decl_const;
	node_decl_const* _node_decl_const;
	node_block_decl_type* _node_block_decl_type;
	node_list_decl_type* _node_list_decl_type;
	node_decl_type* _node_decl_type;
	node_block_decl_var* _node_block_decl_var;
	node_list_decl_var* _node_list_decl_var;
	node_decl_var* _node_decl_var;
	node_list_ident* _node_list_ident;
	node_block_decl_func* _node_block_decl_func;
	node_list_decl_func* _node_list_decl_func;
	node_decl_func* _node_decl_func;
	node_proc_decl* _node_proc_decl;
	node_proc_header* _node_proc_header;
	node_proc_ident* _node_proc_ident;
	node_formal_args* _node_formal_args;
	node_list_formal_args* _node_list_formal_args;
	node_formal_arg* _node_formal_arg;
	node_val_formal_arg* _node_val_formal_arg;
	node_var_formal_arg* _node_var_formal_arg;
	node_func_decl* _node_func_decl;
	node_func_header* _node_func_header;
	node_func_ident* _node_func_ident;
	node_func_result* _node_func_result;
	node_type* _node_type;
	node_user_type* _node_user_type;
	node_base_type* _node_base_type;
	node_inter_type* _node_inter_type;
	node_inter_base* _node_inter_base;
	node_ns_inter_base* _node_ns_inter_base;
	node_array_type* _node_array_type;
	node_list_array_index* _node_list_array_index;
	node_array_index* _node_array_index;
	node_record_type* _node_record_type;
	node_record_fields* _node_record_fields;
	node_record_field* _node_record_field;
	node_pointer_type* _node_pointer_type;
	node_block_code* _node_block_code;
	node_list_instr* _node_list_instr;
	node_instr* _node_instr;
	node_case_instr* _node_case_instr;
	node_single_case_instr* _node_single_case_instr;
	node_case_tag* _node_case_tag;
	node_for_ident* _node_for_ident;
	node_for_direction* _node_for_direction;
	node_expression* _node_expression;
	node_left_expr* _node_left_expr;
	node_math_expr* _node_math_expr;
	node_comp_expr* _node_comp_expr;
	node_bool_expr* _node_bool_expr;
	node_atom_expr* _node_atom_expr;
	node_var_expr* _node_var_expr;
	node_call* _node_call;
	node_call_header* _node_call_header;
	node_parameters* _node_parameters;
	node_list_indices* _node_list_indices;
	node_list_parameters* _node_list_parameters;


/* Line 387 of yacc.c  */
#line 261 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 289 "parser.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
      -1,    99,    -1,   100,    -1,   101,    -1,   104,    -1,   107,
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
       0,   243,   243,   252,   265,   271,   276,   281,   285,   291,
     302,   308,   313,   317,   323,   332,   337,   342,   346,   352,
     358,   364,   372,   377,   382,   386,   392,   396,   402,   408,
     412,   418,   426,   432,   436,   442,   446,   452,   458,   464,
     470,   474,   480,   488,   494,   498,   504,   508,   512,   516,
     522,   526,   530,   534,   538,   545,   551,   555,   561,   567,
     576,   582,   586,   592,   598,   604,   610,   614,   620,   626,
     632,   636,   640,   646,   650,   656,   660,   664,   668,   672,
     676,   680,   684,   688,   695,   699,   705,   711,   717,   725,
     732,   736,   742,   746,   750,   754,   758,   762,   768,   775,
     779,   783,   787,   791,   795,   799,   805,   809,   813,   817,
     821,   825,   831,   835,   839,   843,   849,   853,   859,   865,
     871,   875,   883,   889,   893,   899,   905,   912,   916,   922,
     926,   932,   936
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "ListIndices", "ListParameters", YY_NULL
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

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
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
       0,    44,    45,    46,     0,    56,    47,    48,    49,    17,
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
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-132)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-127)))

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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 244 "parser.y"
    {
					node_sep* n1 = new node_sep(";");
					node_sep* n2 = new node_sep(".");
					(yyval._node_program) = new node_program((yyvsp[(1) - (4)]._node_program_header), n1, (yyvsp[(3) - (4)]._node_block), n2);
                    root = (yyval._node_program);
                }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 253 "parser.y"
    {
                    /*int ident = ti->get(TableIdentifier::_lastIdentifier);
                    Symbol* symbol = new SymbolProgram();
                    currentContext->add(ident, symbol);*/
					node_keyword* k = new node_keyword("program");
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);

					(yyval._node_program_header) = new node_program_header(k, n);
                }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 266 "parser.y"
    {
					(yyval._node_block) = new node_block((yyvsp[(1) - (5)]._node_block_decl_const), (yyvsp[(2) - (5)]._node_block_decl_type), (yyvsp[(3) - (5)]._node_block_decl_var), (yyvsp[(4) - (5)]._node_block_decl_func), (yyvsp[(5) - (5)]._node_block_code));
                }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 272 "parser.y"
    {
					(yyval._node_block_decl_const) = new node_block_decl_const(new node_keyword("const"), (yyvsp[(2) - (2)]._node_list_decl_const));
				}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 276 "parser.y"
    {
					(yyval._node_block_decl_const) = new node_block_decl_const();
				}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 282 "parser.y"
    {
					(yyval._node_list_decl_const) = new node_list_decl_const((yyvsp[(1) - (2)]._node_list_decl_const), (yyvsp[(2) - (2)]._node_decl_const));
				}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 286 "parser.y"
    {
					(yyval._node_list_decl_const) = new node_list_decl_const((yyvsp[(1) - (1)]._node_decl_const));
				}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 292 "parser.y"
    {
                    string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);


					(yyval._node_decl_const) = new node_decl_const(n, new node_op(":"), (yyvsp[(3) - (4)]._node_expression), new node_sep(";"));

                }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 303 "parser.y"
    {
					/*node_kw* nk = new node_kw($1);*/
					(yyval._node_block_decl_type) = new node_block_decl_type(new node_keyword("type"), (yyvsp[(2) - (2)]._node_list_decl_type));
				}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 308 "parser.y"
    {
					(yyval._node_block_decl_type) = new node_block_decl_type();
				}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 314 "parser.y"
    {
					(yyval._node_list_decl_type) = new node_list_decl_type((yyvsp[(1) - (2)]._node_list_decl_type), (yyvsp[(2) - (2)]._node_decl_type));
				}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 318 "parser.y"
    {
					(yyval._node_list_decl_type) = new node_list_decl_type((yyvsp[(1) - (1)]._node_decl_type));
				}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 324 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					
					(yyval._node_decl_type) = new node_decl_type(n, new node_op("="), (yyvsp[(3) - (4)]._node_type), new node_sep(";"));
				}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 333 "parser.y"
    {
					(yyval._node_block_decl_var) = new node_block_decl_var(new node_keyword("var"), (yyvsp[(2) - (2)]._node_list_decl_var));
				}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 337 "parser.y"
    {
					(yyval._node_block_decl_var) = new node_block_decl_var();
				}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 343 "parser.y"
    {
					(yyval._node_list_decl_var) = new node_list_decl_var((yyvsp[(1) - (2)]._node_list_decl_var), (yyvsp[(2) - (2)]._node_decl_var));
				}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 347 "parser.y"
    {
					(yyval._node_list_decl_var) = new node_list_decl_var((yyvsp[(1) - (1)]._node_decl_var));
				}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 353 "parser.y"
    {
                    (yyval._node_decl_var) = new node_decl_var((yyvsp[(1) - (4)]._node_list_ident), new node_sep(":"), (yyvsp[(3) - (4)]._node_type), new node_sep(";"));
                }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 359 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					(yyval._node_list_ident) = new node_list_ident((yyvsp[(1) - (3)]._node_list_ident), new node_sep(","), n);
                }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 365 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					(yyval._node_list_ident) = new node_list_ident(n);
                }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 373 "parser.y"
    {
					(yyval._node_block_decl_func) = new node_block_decl_func((yyvsp[(1) - (2)]._node_list_decl_func), new node_sep(";"));
				}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 377 "parser.y"
    {
					(yyval._node_block_decl_func) = new node_block_decl_func();
				}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 383 "parser.y"
    {
					(yyval._node_list_decl_func) = new node_list_decl_func((yyvsp[(1) - (3)]._node_list_decl_func), new node_sep(";"), (yyvsp[(3) - (3)]._node_decl_func));
				}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 387 "parser.y"
    {
					(yyval._node_list_decl_func) = new node_list_decl_func((yyvsp[(1) - (1)]._node_decl_func));
				}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 393 "parser.y"
    {
					(yyval._node_decl_func) = new node_decl_func((yyvsp[(1) - (1)]._node_proc_decl), 1);
				}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 397 "parser.y"
    {
					(yyval._node_decl_func) = new node_decl_func((yyvsp[(1) - (1)]._node_func_decl), 2);
				}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 403 "parser.y"
    {
					(yyval._node_proc_decl) = new node_proc_decl((yyvsp[(1) - (3)]._node_proc_header), new node_sep(";"), (yyvsp[(3) - (3)]._node_block));
				}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 409 "parser.y"
    {
					(yyval._node_proc_header) = new node_proc_header((yyvsp[(1) - (1)]._node_proc_ident));
				}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 413 "parser.y"
    {
					(yyval._node_proc_header) = new node_proc_header((yyvsp[(1) - (2)]._node_proc_ident), (yyvsp[(2) - (2)]._node_formal_args));
				}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 419 "parser.y"
    {
                    string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					(yyval._node_proc_ident) = new node_proc_ident(new node_keyword("proc"), n);
                }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 427 "parser.y"
    {
					(yyval._node_formal_args) = new node_formal_args(new node_sep("("), (yyvsp[(2) - (3)]._node_list_formal_args), new node_sep(")"));
				}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 433 "parser.y"
    {
					(yyval._node_list_formal_args) = new node_list_formal_args((yyvsp[(1) - (3)]._node_list_formal_args), new node_sep(";"), (yyvsp[(3) - (3)]._node_formal_arg));
				}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 437 "parser.y"
    {
					(yyval._node_list_formal_args) = new node_list_formal_args((yyvsp[(1) - (1)]._node_formal_arg));
				}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 443 "parser.y"
    {
					(yyval._node_formal_arg) = new node_formal_arg((yyvsp[(1) - (1)]._node_val_formal_arg), 1);
				}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 447 "parser.y"
    {
					(yyval._node_formal_arg) = new node_formal_arg((yyvsp[(1) - (1)]._node_var_formal_arg), 2);
				}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 453 "parser.y"
    {
					(yyval._node_val_formal_arg) = new node_val_formal_arg((yyvsp[(1) - (3)]._node_list_ident), new node_sep(":"), (yyvsp[(3) - (3)]._node_base_type));
				}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 459 "parser.y"
    {
					(yyval._node_var_formal_arg) = new node_var_formal_arg(new node_keyword("var"), (yyvsp[(2) - (4)]._node_list_ident), new node_sep(":"), (yyvsp[(4) - (4)]._node_base_type));
				}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 465 "parser.y"
    {
					(yyval._node_func_decl) = new node_func_decl((yyvsp[(1) - (3)]._node_func_header), new node_sep(";"), (yyvsp[(3) - (3)]._node_block));
				}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 471 "parser.y"
    {
					(yyval._node_func_header) = new node_func_header((yyvsp[(1) - (2)]._node_func_ident), (yyvsp[(2) - (2)]._node_func_result));
				}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 475 "parser.y"
    {
					(yyval._node_func_header) = new node_func_header((yyvsp[(1) - (3)]._node_func_ident), (yyvsp[(2) - (3)]._node_formal_args), (yyvsp[(3) - (3)]._node_func_result));
				}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 481 "parser.y"
    {
                    string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					(yyval._node_func_ident) = new node_func_ident(new node_keyword("function"), n);
                }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 489 "parser.y"
    {
					(yyval._node_func_result) = new node_func_result(new node_sep(":"), (yyvsp[(2) - (2)]._node_base_type));
				}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 495 "parser.y"
    {
					(yyval._node_type) = new node_type((yyvsp[(1) - (1)]._node_user_type), 1);
				}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 499 "parser.y"
    {
					(yyval._node_type) = new node_type((yyvsp[(1) - (1)]._node_base_type), 2);
				}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 505 "parser.y"
    {
					(yyval._node_user_type) = new node_user_type((yyvsp[(1) - (1)]._node_inter_type), 1);
				}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 509 "parser.y"
    {
					(yyval._node_user_type) = new node_user_type((yyvsp[(1) - (1)]._node_array_type), 2);
				}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 513 "parser.y"
    {
					(yyval._node_user_type) = new node_user_type((yyvsp[(1) - (1)]._node_record_type), 3);
				}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 517 "parser.y"
    {
					(yyval._node_user_type) = new node_user_type((yyvsp[(1) - (1)]._node_pointer_type), 4);
				}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 523 "parser.y"
    {
                    (yyval._node_base_type) = new node_base_type(new node_keyword("integer"), 1);
                }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 527 "parser.y"
    {
                    (yyval._node_base_type) = new node_base_type(new node_keyword("real"), 2);
                }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 531 "parser.y"
    {
                    (yyval._node_base_type) = new node_base_type(new node_keyword("boolean"), 3);
                }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 535 "parser.y"
    {
                    (yyval._node_base_type) = new node_base_type(new node_keyword("char"), 4);
                }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 539 "parser.y"
    {
                    (yyval._node_base_type) = new node_base_type(new node_keyword("string"), 5);
                }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 546 "parser.y"
    {
                    (yyval._node_inter_type) = new node_inter_type((yyvsp[(1) - (3)]._node_inter_base), new node_sep(".."), (yyvsp[(3) - (3)]._node_inter_base));
                }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 552 "parser.y"
    {
                    (yyval._node_inter_base) = new node_inter_base((yyvsp[(1) - (1)]._node_ns_inter_base));
                }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 556 "parser.y"
    {
                    (yyval._node_inter_base) = new node_inter_base(new node_op("-"), (yyvsp[(2) - (2)]._node_ns_inter_base));
                }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 562 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
                    (yyval._node_ns_inter_base) = new node_ns_inter_base(n, 1);
                }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 568 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_integer* n = new node_tok_integer(_token);
                   				 (yyval._node_ns_inter_base) = new node_ns_inter_base(n, 2);
                }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 577 "parser.y"
    {
                    (yyval._node_array_type) = new node_array_type(new node_keyword("array"), new node_sep("["), (yyvsp[(3) - (6)]._node_list_array_index), new node_sep("]"), new node_keyword("if"), (yyvsp[(6) - (6)]._node_type));
                }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 583 "parser.y"
    {
                    (yyval._node_list_array_index) = new node_list_array_index((yyvsp[(1) - (3)]._node_list_array_index), new node_sep(","), (yyvsp[(3) - (3)]._node_array_index));
                }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 587 "parser.y"
    {
                    (yyval._node_list_array_index) = new node_list_array_index((yyvsp[(1) - (1)]._node_array_index));
                }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 593 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
                    (yyval._node_array_index) = new node_array_index(n, 1);
                }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 599 "parser.y"
    {
                    (yyval._node_array_index) = new node_array_index((yyvsp[(1) - (1)]._node_inter_type), 2);
                }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 605 "parser.y"
    {
                    (yyval._node_record_type) = new node_record_type(new node_keyword("record"), (yyvsp[(2) - (3)]._node_record_fields), new node_keyword("end"));
                }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 611 "parser.y"
    {
                    (yyval._node_record_fields) = new node_record_fields((yyvsp[(1) - (3)]._node_record_fields), new node_sep(";"), (yyvsp[(3) - (3)]._node_record_field));
                }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 615 "parser.y"
    {
                    (yyval._node_record_fields) = new node_record_fields((yyvsp[(1) - (1)]._node_record_field));
                }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 621 "parser.y"
    {
                    (yyval._node_record_field) = new node_record_field((yyvsp[(1) - (3)]._node_list_ident), new node_sep(":"), (yyvsp[(3) - (3)]._node_type));
                }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 627 "parser.y"
    {
                    (yyval._node_pointer_type) = new node_pointer_type(new node_op("^"), (yyvsp[(2) - (2)]._node_type));
                }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 633 "parser.y"
    {
                    (yyval._node_block_code) = new node_block_code(new node_keyword("begin"), (yyvsp[(2) - (3)]._node_list_instr), new node_keyword("end"));
                }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 637 "parser.y"
    {
                    (yyval._node_block_code) = new node_block_code(new node_keyword("begin"), (yyvsp[(2) - (4)]._node_list_instr), new node_sep(";"), new node_keyword("end"));
                }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 641 "parser.y"
    {
                    (yyval._node_block_code) = new node_block_code(new node_keyword("begin"), new node_keyword("end"));
                }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 647 "parser.y"
    {
                    (yyval._node_list_instr) = new node_list_instr((yyvsp[(1) - (3)]._node_list_instr), new node_sep(";"), (yyvsp[(3) - (3)]._node_instr));
                }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 651 "parser.y"
    {
                    (yyval._node_list_instr) = new node_list_instr((yyvsp[(1) - (1)]._node_instr));
                }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 657 "parser.y"
    {
                    (yyval._node_instr) = new node_instr(new node_keyword("while"), (yyvsp[(2) - (4)]._node_expression), new node_keyword("do"), (yyvsp[(4) - (4)]._node_instr), 1);
                }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 661 "parser.y"
    {
                    (yyval._node_instr) = new node_instr(new node_keyword("repeat"), (yyvsp[(2) - (4)]._node_list_instr), new node_keyword("until"), (yyvsp[(4) - (4)]._node_expression), 2);
                }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 665 "parser.y"
    {
                    (yyval._node_instr) = new node_instr(new node_keyword("for"), (yyvsp[(2) - (8)]._node_for_ident), new node_op(":="), (yyvsp[(4) - (8)]._node_expression), (yyvsp[(5) - (8)]._node_for_direction), (yyvsp[(6) - (8)]._node_expression), new node_keyword("do"), (yyvsp[(8) - (8)]._node_instr), 3);
                }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 669 "parser.y"
    {
                    (yyval._node_instr) = new node_instr(new node_keyword("if"), (yyvsp[(2) - (4)]._node_expression), new node_keyword("then"), (yyvsp[(4) - (4)]._node_instr), 4);
                }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 673 "parser.y"
    {
                    (yyval._node_instr) = new node_instr(new node_keyword("if"), (yyvsp[(2) - (6)]._node_expression), new node_keyword("then"), (yyvsp[(4) - (6)]._node_instr), new node_keyword("else"), (yyvsp[(6) - (6)]._node_instr), 5);
                }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 677 "parser.y"
    {
                    (yyval._node_instr) = new node_instr(new node_keyword("case"), (yyvsp[(2) - (6)]._node_expression), new node_keyword("of"), (yyvsp[(4) - (6)]._node_case_instr), new node_sep(";"), new node_keyword("end"), 6);
                }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 681 "parser.y"
    {
                    (yyval._node_instr) = new node_instr((yyvsp[(1) - (3)]._node_left_expr), new node_op(":="), (yyvsp[(3) - (3)]._node_expression), 7);
                }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 685 "parser.y"
    {
                    (yyval._node_instr) = new node_instr((yyvsp[(1) - (1)]._node_call), 8);
                }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 689 "parser.y"
    {
                    (yyval._node_instr) = new node_instr((yyvsp[(1) - (1)]._node_block_code), 9);
                }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 696 "parser.y"
    {
                    (yyval._node_case_instr) = new node_case_instr((yyvsp[(1) - (3)]._node_case_instr), new node_sep(";"), (yyvsp[(3) - (3)]._node_single_case_instr));
                }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 700 "parser.y"
    {
                    (yyval._node_case_instr) = new node_case_instr((yyvsp[(1) - (1)]._node_single_case_instr));
                }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 706 "parser.y"
    {
                        (yyval._node_single_case_instr) = new node_single_case_instr((yyvsp[(1) - (3)]._node_case_tag), new node_sep(":"), (yyvsp[(3) - (3)]._node_instr)); 
                    }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 712 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_string* n = new node_tok_string(_token);
					(yyval._node_case_tag) = new node_case_tag(n, 1); 
                }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 718 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_integer* n = new node_tok_integer(_token);
					(yyval._node_case_tag) = new node_case_tag(n, 2); 
                }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 726 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					(yyval._node_for_ident) = new node_for_ident(n); 
                }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 733 "parser.y"
    {
					(yyval._node_for_direction) = new node_for_direction(new node_keyword("to"), 1); 
                }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 737 "parser.y"
    {
					(yyval._node_for_direction) = new node_for_direction(new node_keyword("downto"), 2); 
                }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 743 "parser.y"
    {
					(yyval._node_expression) = new node_expression((yyvsp[(1) - (1)]._node_math_expr), 1); 
                }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 747 "parser.y"
    {
					(yyval._node_expression) = new node_expression((yyvsp[(1) - (1)]._node_comp_expr), 2); 
                }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 751 "parser.y"
    {
					(yyval._node_expression) = new node_expression((yyvsp[(1) - (1)]._node_bool_expr), 3); 
                }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 755 "parser.y"
    {
					(yyval._node_expression) = new node_expression((yyvsp[(1) - (1)]._node_atom_expr), 4); 
                }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 759 "parser.y"
    {
					(yyval._node_expression) = new node_expression((yyvsp[(1) - (1)]._node_var_expr), 5); 
                }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 763 "parser.y"
    {
					(yyval._node_expression) = new node_expression((yyvsp[(1) - (1)]._node_call), 6); 
                }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 769 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					(yyval._node_left_expr) = new node_left_expr(n); 
                }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 776 "parser.y"
    {
					(yyval._node_math_expr) = new node_math_expr((yyvsp[(1) - (3)]._node_expression), new node_op("+"), (yyvsp[(3) - (3)]._node_expression), 1); 
                }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 780 "parser.y"
    {
					(yyval._node_math_expr) = new node_math_expr((yyvsp[(1) - (3)]._node_expression), new node_op("-"), (yyvsp[(3) - (3)]._node_expression), 2); 
                }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 784 "parser.y"
    {
					(yyval._node_math_expr) = new node_math_expr((yyvsp[(1) - (3)]._node_expression), new node_op("*"), (yyvsp[(3) - (3)]._node_expression), 3);  
                }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 788 "parser.y"
    {
					(yyval._node_math_expr) = new node_math_expr((yyvsp[(1) - (3)]._node_expression), new node_op("/"), (yyvsp[(3) - (3)]._node_expression), 4); 
                }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 792 "parser.y"
    {
					(yyval._node_math_expr) = new node_math_expr((yyvsp[(1) - (3)]._node_expression), new node_keyword("div"), (yyvsp[(3) - (3)]._node_expression), 5); 
                }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 796 "parser.y"
    {
					(yyval._node_math_expr) = new node_math_expr((yyvsp[(1) - (3)]._node_expression), new node_op("%"), (yyvsp[(3) - (3)]._node_expression), 6); 
                }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 800 "parser.y"
    {
					(yyval._node_math_expr) = new node_math_expr((yyvsp[(1) - (3)]._node_expression), new node_op("**"), (yyvsp[(3) - (3)]._node_expression), 7); 
                }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 806 "parser.y"
    {
					(yyval._node_comp_expr) = new node_comp_expr((yyvsp[(1) - (3)]._node_expression), new node_op("="), (yyvsp[(3) - (3)]._node_expression), 1); 
                }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 810 "parser.y"
    {
					(yyval._node_comp_expr) = new node_comp_expr((yyvsp[(1) - (3)]._node_expression), new node_op("<>"), (yyvsp[(3) - (3)]._node_expression), 2); 
                }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 814 "parser.y"
    {
					(yyval._node_comp_expr) = new node_comp_expr((yyvsp[(1) - (3)]._node_expression), new node_op("<"), (yyvsp[(3) - (3)]._node_expression), 3); 
                }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 818 "parser.y"
    {
					(yyval._node_comp_expr) = new node_comp_expr((yyvsp[(1) - (3)]._node_expression), new node_op("<"), (yyvsp[(3) - (3)]._node_expression), 4); 
                }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 822 "parser.y"
    {
					(yyval._node_comp_expr) = new node_comp_expr((yyvsp[(1) - (3)]._node_expression), new node_op(">"), (yyvsp[(3) - (3)]._node_expression), 5); 
                }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 826 "parser.y"
    {
					(yyval._node_comp_expr) = new node_comp_expr((yyvsp[(1) - (3)]._node_expression), new node_op(">="), (yyvsp[(3) - (3)]._node_expression), 6); 
                }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 832 "parser.y"
    {
					(yyval._node_bool_expr) = new node_bool_expr((yyvsp[(1) - (3)]._node_expression), new node_keyword("and"), (yyvsp[(3) - (3)]._node_expression), 1); 
                }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 836 "parser.y"
    {
					(yyval._node_bool_expr) = new node_bool_expr((yyvsp[(1) - (3)]._node_expression), new node_keyword("or"), (yyvsp[(3) - (3)]._node_expression), 2); 
                }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 840 "parser.y"
    {
					(yyval._node_bool_expr) = new node_bool_expr((yyvsp[(1) - (3)]._node_expression), new node_keyword("xor"), (yyvsp[(3) - (3)]._node_expression), 3); 
                }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 844 "parser.y"
    {
					(yyval._node_bool_expr) = new node_bool_expr(new node_keyword("not"), (yyvsp[(2) - (2)]._node_expression), 4); 
                }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 850 "parser.y"
    {
					(yyval._node_atom_expr) = new node_atom_expr(new node_sep("("), (yyvsp[(2) - (3)]._node_expression), new node_sep(")"), 1); 
                }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 854 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_integer* n = new node_tok_integer(_token);
					(yyval._node_atom_expr) = new node_atom_expr(n, 2); 
                }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 860 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_real* n = new node_tok_real(_token);
					(yyval._node_atom_expr) = new node_atom_expr(n, 3); 
                }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 866 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_boolean* n = new node_tok_boolean(_token);
					(yyval._node_atom_expr) = new node_atom_expr(n, 4); 
                }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 872 "parser.y"
    {
					(yyval._node_atom_expr) = new node_atom_expr(new node_keyword("nil"), 5); 
                }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 876 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_string* n = new node_tok_string(_token);
					(yyval._node_atom_expr) = new node_atom_expr(n, 6); 
                }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 884 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					(yyval._node_var_expr) = new node_var_expr(n, 1); 
                }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 890 "parser.y"
    {
					(yyval._node_var_expr) = new node_var_expr((yyvsp[(1) - (4)]._node_var_expr), new node_sep("["), (yyvsp[(3) - (4)]._node_list_indices), new node_sep("]"), 2); 
                }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 894 "parser.y"
    {
					(yyval._node_var_expr) = new node_var_expr((yyvsp[(1) - (2)]._node_var_expr), new node_op("^"), 3); 
                }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 900 "parser.y"
    {
                    (yyval._node_call) = new node_call((yyvsp[(1) - (2)]._node_call_header), (yyvsp[(2) - (2)]._node_parameters));
                }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 906 "parser.y"
    {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
                    (yyval._node_call_header) = new node_call_header(n);
                }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 913 "parser.y"
    {
                    (yyval._node_parameters) = new node_parameters(new node_sep("("), (yyvsp[(2) - (3)]._node_list_parameters), new node_sep(")"));
                }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 917 "parser.y"
    {
                    (yyval._node_parameters) = new node_parameters(new node_sep("("), new node_sep(")"));
                }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 923 "parser.y"
    {
					(yyval._node_list_indices) =  new node_list_indices((yyvsp[(1) - (3)]._node_list_indices), new node_sep(","), (yyvsp[(3) - (3)]._node_expression));
				}
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 927 "parser.y"
    {
					(yyval._node_list_indices) = new node_list_indices((yyvsp[(1) - (1)]._node_expression));
				}
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 933 "parser.y"
    {
					(yyval._node_list_parameters) = new node_list_parameters((yyvsp[(1) - (3)]._node_list_parameters), new node_sep(","), (yyvsp[(3) - (3)]._node_expression));
				}
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 937 "parser.y"
    {
					(yyval._node_list_parameters) = new node_list_parameters((yyvsp[(1) - (1)]._node_expression));
				}
    break;


/* Line 1792 of yacc.c  */
#line 2854 "parser.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 942 "parser.y"


extern FILE* yyin;

int main(int argc, char** argv)
{
    int state = 0;

    if (argc != 2) {
        cout << "You must specify a file." << endl;
        return 1;
    }

    /*yyin = fopen(argv[1], "r");
    state = yyparse();

    if (state == 0) {
        firstContext->dump();
        ti->dump();

        // G¨¦n¨¦ration du code 3@
        dumpCode(rootNode);
    }*/

    return 0;
}

