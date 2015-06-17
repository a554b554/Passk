%{

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
%}

%union {
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
}



%token KW_PROGRAM
%token KW_CONST
%token KW_TYPE
%token KW_VAR
%token KW_ARRAY
%token KW_OF
%token KW_RECORD
%token KW_BEGIN
%token KW_END
%token KW_DIV
%token KW_MOD
%token KW_AND
%token KW_OR
%token KW_XOR
%token KW_NOT
%token KW_IF
%token KW_THEN
%token KW_ELSE
%token KW_CASE
%token KW_WHILE
%token KW_DO
%token KW_REPEAT
%token KW_UNTIL
%token KW_FOR
%token KW_TO
%token KW_DOWNTO
%token KW_PROC
%token KW_FUNC
%token KW_NIL
%token KW_INTEGER
%token KW_REAL
%token KW_BOOLEAN
%token KW_CHAR
%token KW_STRING

%token SEP_SCOL
%token SEP_DOT
%token SEP_DOTS
%token SEP_DOTDOT
%token SEP_COMMA
%token SEP_CO
%token SEP_CF
%token SEP_PO
%token SEP_PF

%token OP_EQ
%token OP_NEQ
%token OP_LT
%token OP_LTE
%token OP_GT
%token OP_GTE
%token OP_ADD
%token OP_SUB
%token OP_MUL
%token OP_SLASH
%token OP_EXP
%token OP_PTR
%token OP_AFFECT

%token TOK_IDENT
%token TOK_INTEGER
%token TOK_REAL
%token TOK_BOOLEAN
%token TOK_STRING

%start Program

%nonassoc OP_EQ OP_NEQ OP_GT OP_LT OP_GTE OP_LTE
%left OP_ADD OP_SUB KW_OR KW_XOR
%left OP_MUL OP_SLASH KW_AND KW_DIV KW_MOD
%right KW_NOT OP_NEG OP_POS
%left OP_EXP
%nonassoc OP_PTR
%nonassoc OP_DOT
%left SEP_CO

%nonassoc KW_IFX
%nonassoc KW_ELSE
%nonassoc KW_CASEX

%type<_node_program> Program
%type<_node_program_header> ProgramHeader
%type<_node_block> Block
%type<_node_block_decl_const> BlockDeclConst
%type<_node_list_decl_const> ListDeclConst
%type<_node_decl_const> DeclConst
%type<_node_block_decl_type> BlockDeclType
%type<_node_list_decl_type> ListDeclType
%type<_node_decl_type> DeclType
%type<_node_block_decl_var> BlockDeclVar
%type<_node_list_decl_var> ListDeclVar
%type<_node_decl_var> DeclVar
%type<_node_list_ident> ListIdent
%type<_node_block_decl_func> BlockDeclFunc
%type<_node_list_decl_func> ListDeclFunc
%type<_node_decl_func> DeclFunc
%type<_node_proc_decl> ProcDecl
%type<_node_proc_header> ProcHeader
%type<_node_proc_ident> ProcIdent
%type<_node_formal_args> FormalArgs
%type<_node_list_formal_args> ListFormalArgs
%type<_node_formal_arg> FormalArg
%type<_node_val_formal_arg> ValFormalArg
%type<_node_var_formal_arg> VarFormalArg
%type<_node_func_decl> FuncDecl
%type<_node_func_header> FuncHeader
%type<_node_func_ident> FuncIdent
%type<_node_func_result> FuncResult
%type<_node_type> Type
%type<_node_user_type> UserType
%type<_node_base_type> BaseType
%type<_node_inter_type> InterType
%type<_node_inter_base> InterBase
%type<_node_ns_inter_base> NSInterBase
%type<_node_array_type> ArrayType
%type<_node_list_array_index> ListArrayIndex
%type<_node_array_index> ArrayIndex
%type<_node_record_type> RecordType
%type<_node_record_fields> RecordFields
%type<_node_record_field> RecordField
%type<_node_pointer_type> PointerType
%type<_node_block_code> BlockCode
%type<_node_list_instr> ListInstr
%type<_node_instr> Instr
%type<_node_case_instr> CaseInstr
%type<_node_single_case_instr> Single_case_instr
%type<_node_case_tag> CaseTag
%type<_node_for_ident> ForIdent
%type<_node_for_direction> ForDirection
%type<_node_expression> Expression
%type<_node_left_expr> LeftExpr
%type<_node_math_expr> MathExpr
%type<_node_comp_expr> CompExpr
%type<_node_bool_expr> BoolExpr
%type<_node_atom_expr> AtomExpr
%type<_node_var_expr> VarExpr
%type<_node_call> Call
%type<_node_call_header> CallHeader
%type<_node_parameters> Parameters
%type<_node_list_indices> ListIndices
%type<_node_list_parameters> ListParameters


%%

/*
":"                             col += yyleng; return SEP_DOTS;
";"                             col += yyleng; return SEP_SCOL;
","                             col += yyleng; return SEP_COMMA;
"."                             col += yyleng; return SEP_DOT;
".."                            col += yyleng; return SEP_DOTDOT;
"["                             col += yyleng; return SEP_CO;
"]"                             col += yyleng; return SEP_CF;
"("                             col += yyleng; return SEP_PO;
")"                             col += yyleng; return SEP_PF;*/

Program         : ProgramHeader SEP_SCOL Block SEP_DOT
                {
					node_sep* n1 = new node_sep(";");
					node_sep* n2 = new node_sep(".");
					$$ = new node_program($1, n1, $3, n2);
                    root = $$;
                }
                ;

ProgramHeader   : KW_PROGRAM TOK_IDENT
                {
                    /*int ident = ti->get(TableIdentifier::_lastIdentifier);
                    Symbol* symbol = new SymbolProgram();
                    currentContext->add(ident, symbol);*/
					node_keyword* k = new node_keyword("program");
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);

					$$ = new node_program_header(k, n);
                }
                ;

Block           : BlockDeclConst BlockDeclType BlockDeclVar BlockDeclFunc BlockCode
                {
					$$ = new node_block($1, $2, $3, $4, $5);
                }
                ;

BlockDeclConst  : KW_CONST ListDeclConst
				{
					$$ = new node_block_decl_const(new node_keyword("const"), $2);
				}
                | 
				{
					$$ = new node_block_decl_const();
				}
                ;

ListDeclConst   : ListDeclConst DeclConst
				{
					$$ = new node_list_decl_const($1, $2);
				}
                | DeclConst
				{
					$$ = new node_list_decl_const($1);
				}
                ;

DeclConst       : TOK_IDENT OP_EQ Expression SEP_SCOL
                {
                    string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);


					$$ = new node_decl_const(n, new node_op(":"), $3, new node_sep(";"));

                }
                ;

BlockDeclType   : KW_TYPE ListDeclType
				{
					/*node_kw* nk = new node_kw($1);*/
					$$ = new node_block_decl_type(new node_keyword("type"), $2);
				}
                |
				{
					$$ = new node_block_decl_type();
				}
                ;

ListDeclType    : ListDeclType DeclType
				{
					$$ = new node_list_decl_type($1, $2);
				}
                | DeclType
				{
					$$ = new node_list_decl_type($1);
				}
                ;

DeclType        : TOK_IDENT OP_EQ Type SEP_SCOL
				{
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					
					$$ = new node_decl_type(n, new node_op("="), $3, new node_sep(";"));
				}
                ;

BlockDeclVar    : KW_VAR ListDeclVar
				{
					$$ = new node_block_decl_var(new node_keyword("var"), $2);
				}
                |
				{
					$$ = new node_block_decl_var();
				}
                ;

ListDeclVar     : ListDeclVar DeclVar
				{
					$$ = new node_list_decl_var($1, $2);
				}
                | DeclVar
				{
					$$ = new node_list_decl_var($1);
				}
                ;

DeclVar         : ListIdent SEP_DOTS Type SEP_SCOL
                {
                    $$ = new node_decl_var($1, new node_sep(":"), $3, new node_sep(";"));
                }
                ;

ListIdent       : ListIdent SEP_COMMA TOK_IDENT
                {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					$$ = new node_list_ident($1, new node_sep(","), n);
                }
                | TOK_IDENT
                {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					$$ = new node_list_ident(n);
                }
                ;

BlockDeclFunc   : ListDeclFunc SEP_SCOL
				{
					$$ = new node_block_decl_func($1, new node_sep(";"));
				}
                |
				{
					$$ = new node_block_decl_func();
				}
                ;

ListDeclFunc    : ListDeclFunc SEP_SCOL DeclFunc
				{
					$$ = new node_list_decl_func($1, new node_sep(";"), $3);
				}
                | DeclFunc
				{
					$$ = new node_list_decl_func($1);
				}
                ;

DeclFunc        : ProcDecl
                {
					$$ = new node_decl_func($1, 1);
				}
				| FuncDecl
                {
					$$ = new node_decl_func($1, 2);
				}
				;

ProcDecl        : ProcHeader SEP_SCOL Block
				{
					$$ = new node_proc_decl($1, new node_sep(";"), $3);
				}
                ;

ProcHeader      : ProcIdent
				{
					$$ = new node_proc_header($1);
				}
                | ProcIdent FormalArgs
                {
					$$ = new node_proc_header($1, $2);
				}
				;

ProcIdent       : KW_PROC TOK_IDENT
                {
                    string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					$$ = new node_proc_ident(new node_keyword("proc"), n);
                }
                ;

FormalArgs      : SEP_PO ListFormalArgs SEP_PF
				{
					$$ = new node_formal_args(new node_sep("("), $2, new node_sep(")"));
				}
                ;

ListFormalArgs  : ListFormalArgs SEP_SCOL FormalArg
				{
					$$ = new node_list_formal_args($1, new node_sep(";"), $3);
				}
                | FormalArg
				{
					$$ = new node_list_formal_args($1);
				}
                ;

FormalArg       : ValFormalArg
				{
					$$ = new node_formal_arg($1, 1);
				}
                | VarFormalArg
                {
					$$ = new node_formal_arg($1, 2);
				}
				;

ValFormalArg    : ListIdent SEP_DOTS BaseType
				{
					$$ = new node_val_formal_arg($1, new node_sep(":"), $3);
				}
                ;

VarFormalArg    : KW_VAR ListIdent SEP_DOTS BaseType
                {
					$$ = new node_var_formal_arg(new node_keyword("var"), $2, new node_sep(":"), $4);
				}
				;

FuncDecl        : FuncHeader SEP_SCOL Block
				{
					$$ = new node_func_decl($1, new node_sep(";"), $3);
				}
                ;

FuncHeader      : FuncIdent FuncResult
				{
					$$ = new node_func_header($1, $2);
				}
                | FuncIdent FormalArgs FuncResult
                {
					$$ = new node_func_header($1, $2, $3);
				}
				;

FuncIdent       : KW_FUNC TOK_IDENT
                {
                    string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					$$ = new node_func_ident(new node_keyword("function"), n);
                }
                ;

FuncResult      : SEP_DOTS BaseType
				{
					$$ = new node_func_result(new node_sep(":"), $2);
				}
                ;

Type            : UserType
				{
					$$ = new node_type($1, 1);
				}
                | BaseType
                {
					$$ = new node_type($1, 2);
				}
				;

UserType        : InterType
                {
					$$ = new node_user_type($1, 1);
				} 
				| ArrayType
                {
					$$ = new node_user_type($1, 2);
				}
				| RecordType
                {
					$$ = new node_user_type($1, 3);
				}
				| PointerType
				{
					$$ = new node_user_type($1, 4);
				}
                ;

BaseType        : KW_INTEGER
                {
                    $$ = new node_base_type(new node_keyword("integer"), 1);
                }
                | KW_REAL
                {
                    $$ = new node_base_type(new node_keyword("real"), 2);
                }
                | KW_BOOLEAN
                {
                    $$ = new node_base_type(new node_keyword("boolean"), 3);
                }
                | KW_CHAR
                {
                    $$ = new node_base_type(new node_keyword("char"), 4);
                }
                | KW_STRING
                {
                    $$ = new node_base_type(new node_keyword("string"), 5);
                }
                ;


InterType       : InterBase SEP_DOTDOT InterBase
                {
                    $$ = new node_inter_type($1, new node_sep(".."), $3);
                }
                ;

InterBase       : NSInterBase
				{
                    $$ = new node_inter_base($1);
                }
                | OP_SUB NSInterBase
                {
                    $$ = new node_inter_base(new node_op("-"), $2);
                }
                ;

NSInterBase     : TOK_IDENT
                {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
                    $$ = new node_ns_inter_base(n, 1);
                }
                | TOK_INTEGER
                {
					string _token = TableIdentifier::last_token;
					node_tok_integer* n = new node_tok_integer(_token);
                   				 $$ = new node_ns_inter_base(n, 2);
                }
                ;


ArrayType       : KW_ARRAY SEP_CO ListArrayIndex SEP_CF KW_OF Type
                {
                    $$ = new node_array_type(new node_keyword("array"), new node_sep("["), $3, new node_sep("]"), new node_keyword("if"), $6);
                }
                ;

ListArrayIndex  : ListArrayIndex SEP_COMMA ArrayIndex
				{
                    $$ = new node_list_array_index($1, new node_sep(","), $3);
                }
                | ArrayIndex
				{
                    $$ = new node_list_array_index($1);
                }
                ;

ArrayIndex      : TOK_IDENT
				{
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
                    $$ = new node_array_index(n, 1);
                }
                | InterType
                {
                    $$ = new node_array_index($1, 2);
                }
				;

RecordType      : KW_RECORD RecordFields KW_END
                {
                    $$ = new node_record_type(new node_keyword("record"), $2, new node_keyword("end"));
                }
                ;

RecordFields    : RecordFields SEP_SCOL RecordField
				{
                    $$ = new node_record_fields($1, new node_sep(";"), $3);
                }
                | RecordField
				{
                    $$ = new node_record_fields($1);
                }
                ;

RecordField     : ListIdent SEP_DOTS Type
                {
                    $$ = new node_record_field($1, new node_sep(":"), $3);
                }
				;

PointerType     : OP_PTR Type
                {
                    $$ = new node_pointer_type(new node_op("^"), $2);
                }
                ;

BlockCode       : KW_BEGIN ListInstr KW_END
                {
                    $$ = new node_block_code(new node_keyword("begin"), $2, new node_keyword("end"));
                }
                | KW_BEGIN ListInstr SEP_SCOL KW_END
                {
                    $$ = new node_block_code(new node_keyword("begin"), $2, new node_sep(";"), new node_keyword("end"));
                }
                | KW_BEGIN KW_END
                {
                    $$ = new node_block_code(new node_keyword("begin"), new node_keyword("end"));
                }
                ;

ListInstr       : ListInstr SEP_SCOL Instr
                {
                    $$ = new node_list_instr($1, new node_sep(";"), $3);
                }
                | Instr
                {
                    $$ = new node_list_instr($1);
                }
				;

Instr           : KW_WHILE Expression KW_DO Instr
                {
                    $$ = new node_instr(new node_keyword("while"), $2, new node_keyword("do"), $4, 1);
                }
                | KW_REPEAT ListInstr KW_UNTIL Expression
                {
                    $$ = new node_instr(new node_keyword("repeat"), $2, new node_keyword("until"), $4, 2);
                }
                | KW_FOR ForIdent OP_AFFECT Expression ForDirection Expression KW_DO Instr
                {
                    $$ = new node_instr(new node_keyword("for"), $2, new node_op(":="), $4, $5, $6, new node_keyword("do"), $8, 3);
                }
                | KW_IF Expression KW_THEN Instr %prec KW_IFX
                {
                    $$ = new node_instr(new node_keyword("if"), $2, new node_keyword("then"), $4, 4);
                }
                | KW_IF Expression KW_THEN Instr KW_ELSE Instr
                {
                    $$ = new node_instr(new node_keyword("if"), $2, new node_keyword("then"), $4, new node_keyword("else"), $6, 5);
                }
                | KW_CASE Expression KW_OF CaseInstr SEP_SCOL KW_END
                {
                    $$ = new node_instr(new node_keyword("case"), $2, new node_keyword("of"), $4, new node_sep(";"), new node_keyword("end"), 6);
                }
                | LeftExpr OP_AFFECT Expression
                {
                    $$ = new node_instr($1, new node_op(":="), $3, 7);
                }
                | Call
                {
                    $$ = new node_instr($1, 8);
                }
                | BlockCode
                {
                    $$ = new node_instr($1, 9);
                }
                ;


CaseInstr      : CaseInstr SEP_SCOL Single_case_instr 
                {
                    $$ = new node_case_instr($1, new node_sep(";"), $3);
                }
                | Single_case_instr
                {
                    $$ = new node_case_instr($1);
                }
                ;

Single_case_instr : CaseTag SEP_DOTS Instr
                    {
                        $$ = new node_single_case_instr($1, new node_sep(":"), $3); 
                    }
                  ;

CaseTag        : TOK_STRING
                {
					string _token = TableIdentifier::last_token;
					node_tok_string* n = new node_tok_string(_token);
					$$ = new node_case_tag(n, 1); 
                }
				| TOK_INTEGER
                {
					string _token = TableIdentifier::last_token;
					node_tok_integer* n = new node_tok_integer(_token);
					$$ = new node_case_tag(n, 2); 
                }
				;

ForIdent        : TOK_IDENT
                {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					$$ = new node_for_ident(n); 
                }

ForDirection    : KW_TO
                {
					$$ = new node_for_direction(new node_keyword("to"), 1); 
                }
                | KW_DOWNTO
                {
					$$ = new node_for_direction(new node_keyword("downto"), 2); 
                }
                ;

Expression      : MathExpr
				{
					$$ = new node_expression($1, 1); 
                }
                | CompExpr
				{
					$$ = new node_expression($1, 2); 
                }
                | BoolExpr
				{
					$$ = new node_expression($1, 3); 
                }
                | AtomExpr
				{
					$$ = new node_expression($1, 4); 
                }
                | VarExpr
				{
					$$ = new node_expression($1, 5); 
                }
                | Call
                {
					$$ = new node_expression($1, 6); 
                }
                ;

LeftExpr        : TOK_IDENT
                {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					$$ = new node_left_expr(n); 
                }

MathExpr        : Expression OP_ADD Expression
                {
					$$ = new node_math_expr($1, new node_op("+"), $3, 1); 
                }
                | Expression OP_SUB Expression
                {
					$$ = new node_math_expr($1, new node_op("-"), $3, 2); 
                }
                | Expression OP_MUL Expression
                {
					$$ = new node_math_expr($1, new node_op("*"), $3, 3);  
                }
                | Expression OP_SLASH Expression
                {
					$$ = new node_math_expr($1, new node_op("/"), $3, 4); 
                }
                | Expression KW_DIV Expression
                {
					$$ = new node_math_expr($1, new node_keyword("div"), $3, 5); 
                }
                | Expression KW_MOD Expression
                {
					$$ = new node_math_expr($1, new node_op("%"), $3, 6); 
                }
                | Expression OP_EXP Expression
                {
					$$ = new node_math_expr($1, new node_op("**"), $3, 7); 
                }
                ;

CompExpr        : Expression OP_EQ Expression
                {
					$$ = new node_comp_expr($1, new node_op("="), $3, 1); 
                }
                | Expression OP_NEQ Expression
                {
					$$ = new node_comp_expr($1, new node_op("<>"), $3, 2); 
                }
                | Expression OP_LT Expression
                {
					$$ = new node_comp_expr($1, new node_op("<"), $3, 3); 
                }
                | Expression OP_LTE Expression
                {
					$$ = new node_comp_expr($1, new node_op("<"), $3, 4); 
                }
                | Expression OP_GT Expression
                {
					$$ = new node_comp_expr($1, new node_op(">"), $3, 5); 
                }
                | Expression OP_GTE Expression
                {
					$$ = new node_comp_expr($1, new node_op(">="), $3, 6); 
                }
                ;

BoolExpr        : Expression KW_AND Expression
                {
					$$ = new node_bool_expr($1, new node_keyword("and"), $3, 1); 
                }
                | Expression KW_OR Expression
                {
					$$ = new node_bool_expr($1, new node_keyword("or"), $3, 2); 
                }
                | Expression KW_XOR Expression
                {
					$$ = new node_bool_expr($1, new node_keyword("xor"), $3, 3); 
                }
                | KW_NOT Expression
                {
					$$ = new node_bool_expr(new node_keyword("not"), $2, 4); 
                }
                ;
				
AtomExpr        : SEP_PO Expression SEP_PF
                {
					$$ = new node_atom_expr(new node_sep("("), $2, new node_sep(")"), 1); 
                }
                | TOK_INTEGER
                {
					string _token = TableIdentifier::last_token;
					node_tok_integer* n = new node_tok_integer(_token);
					$$ = new node_atom_expr(n, 2); 
                }
                | TOK_REAL
                {
					string _token = TableIdentifier::last_token;
					node_tok_real* n = new node_tok_real(_token);
					$$ = new node_atom_expr(n, 3); 
                }
                | TOK_BOOLEAN
                {
					string _token = TableIdentifier::last_token;
					node_tok_boolean* n = new node_tok_boolean(_token);
					$$ = new node_atom_expr(n, 4); 
                }
                | KW_NIL
                {
					$$ = new node_atom_expr(new node_keyword("nil"), 5); 
                }
                | TOK_STRING
                {
					string _token = TableIdentifier::last_token;
					node_tok_string* n = new node_tok_string(_token);
					$$ = new node_atom_expr(n, 6); 
                }
                ;

VarExpr         : TOK_IDENT
                {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
					$$ = new node_var_expr(n, 1); 
                }
                | VarExpr SEP_CO ListIndices SEP_CF
                {
					$$ = new node_var_expr($1, new node_sep("["), $3, new node_sep("]"), 2); 
                }
				| VarExpr OP_PTR
				{
					$$ = new node_var_expr($1, new node_op("^"), 3); 
                }
                ;

Call            : CallHeader Parameters
                {
                    $$ = new node_call($1, $2);
                }
                ;

CallHeader      : TOK_IDENT
                {
					string _token = TableIdentifier::last_token;
					node_tok_ident* n = new node_tok_ident(_token);
                    $$ = new node_call_header(n);
                }

Parameters      : SEP_PO ListParameters SEP_PF
                {
                    $$ = new node_parameters(new node_sep("("), $2, new node_sep(")"));
                }
                | SEP_PO SEP_PF
                {
                    $$ = new node_parameters(new node_sep("("), new node_sep(")"));
                }
                ;

ListIndices     : ListIndices SEP_COMMA Expression
				{
					$$ =  new node_list_indices($1, new node_sep(","), $3);
				}
                | Expression
                {
					$$ = new node_list_indices($1);
				}
				;

ListParameters  : ListParameters SEP_COMMA Expression
                {
					$$ = new node_list_parameters($1, new node_sep(","), $3);
				}
                | Expression
                {
					$$ = new node_list_parameters($1);
				}
                ;

%%

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

