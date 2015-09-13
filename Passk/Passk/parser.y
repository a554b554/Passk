%{

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
extern Program* root;

Symtab* roottab;
Symtab* currtab;

%}

%union {
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

%token<str> TOK_IDENT
%token<v_int> TOK_INTEGER
%token<v_real> TOK_REAL
%token<v_bool> TOK_BOOLEAN
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

%type<_program> Program
%type<_block> Block
%type<_constdecl> BlockDeclConst
%type<_constdecl> DeclConst
%type<_node_block_decl_type> BlockDeclType
%type<_node_list_decl_type> ListDeclType
%type<_node_decl_type> DeclType
%type<_node_block_decl_var> BlockDeclVar
%type<_vardecl> ListDeclVar
%type<_vardecl> DeclVar
%type<_varlist> ListIdent
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
%type<_type> Type
%type<_type> UserType
%type<_type> BaseType
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
%type<_codeblock> BlockCode
%type<_listinstr> ListInstr
%type<_instr> Instr
%type<_instr> CaseInstr
%type<_instr> Single_case_instr
%type<_node_case_tag> CaseTag
%type<_node_for_ident> ForIdent
%type<_node_for_direction> ForDirection
%type<_expr> Expression
%type<_node_left_expr> LeftExpr
%type<_expr> MathExpr
%type<_expr> CompExpr
%type<_expr> BoolExpr
%type<_expr> AtomExpr
%type<_expr> VarExpr
%type<_expr> Call
%type<_node_call_header> CallHeader
%type<_listparams> Parameters
%type<_node_list_indices> ListIndices
%type<_listparams> ListParameters


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
                	$$ = new Program();
                	$$->block = $3;
                	root = $$;
					printf("parsing finished!\n");
                }
                ;

ProgramHeader   : KW_PROGRAM TOK_IDENT
                {
                    initSymbolTable();
                }
                ;

Block           : BlockDeclConst BlockDeclType BlockDeclVar BlockDeclFunc BlockCode
                {
					$$ = new Block();
					$$ -> codeblock = $5;
					$5 -> tab = currtab;
					// printf("tab size:%d\n",currtab->pool.size() );
					//$$->constdecl = $1;
					// $$->typedecl = $2;
					// $$->vardecl = $3;
					// $$->funcdecl = $4;
					// $$->codeblock = $5;
					// root = $$;
                }
                ;

BlockDeclConst  : KW_CONST ListDeclConst
				{
                    $$ = new node_block_decl_const(new node_keyword("const"), $2);
				}
                | 
				{
					
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
                	
                	switch($3->valtype){
                		case TYPE_INT:
                		{
                			intSymbol* tmp = new intSymbol();
                			tmp->name = *$1;
                			tmp->val = atoi($3->data);
                            currtab->addSymbol(*tmp);
                        }
                			break;

                		case TYPE_BOOLEAN:
                		{
                			boolSymbol* tmp = new boolSymbol();
                			tmp->name = *$1;
                			tmp->val = atoi($3->data);
                			currtab->addSymbol(*tmp);
                			break;
                		}
                		default:
                			break;

                	}

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
					$$ = new node_decl_type(n, new node_op("="), $3, new node_sep(";"));
				}
                ;

BlockDeclVar    : KW_VAR ListDeclVar 
				{
					$$ = new node_block_decl_var(new node_keyword("var"), $2);
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
					 $$ = new VarDecl();
					 $$->list->push_back()
				}
                ;

DeclVar         : ListIdent SEP_DOTS Type SEP_SCOL
                {
                	 printf("add to Symtab\n");
                     printf("type: %d\n", $3->type);
                     addToSymbolTable($1->ids, $3->type, currtab);
                	 $1->type = $3->type;
                	 $$ = $1;
                }
                ;

ListIdent       : ListIdent SEP_COMMA TOK_IDENT
                {
					$$ = $1;
					$$->ids.push_back(*$3)
                }
                | TOK_IDENT
                {
					$$ = new VarList();
					$$->ids.push_back(*$1);
                }
                ;

BlockDeclFunc   : ListDeclFunc SEP_SCOL
				{
					$$ = new node_block_decl_func($1, new node_sep(";"));
				}
                |
				{
					
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
					$ = new node_proc_header($1, $2);
				}
				;

ProcIdent       : KW_PROC TOK_IDENT
                {
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
                     $$ = new node_func_ident(new node_keyword("function"), n);
                }
                ;

FuncResult      : SEP_DOTS BaseType
				{
					$$ = new node_func_result(new node_sep(":"), $2);
				}
                ;

Type            : BaseType
				{
					$$ = $1;
				}
                | UserType
                {
					$$ = $1;
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
                	$$ = new Type(TYPE_INT);
                }
                | KW_REAL
                {
                    $$ = new Type(TYPE_REAL);
                }
                | KW_BOOLEAN
                {
                    $$ = new Type(TYPE_BOOLEAN);
                }
                | KW_CHAR
                {
                   $$ = new Type(TYPE_CHAR);
                }
                | KW_STRING
                {
                    $$ = new Type(TYPE_STR);
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
					$$ = new node_ns_inter_base(n, 1);
                }
                | TOK_INTEGER
                {
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
                    $$ = new CodeBlock();
                    $$->listinstr = $2;
                    
                }
                | KW_BEGIN ListInstr SEP_SCOL KW_END
                {
                    $$ = new CodeBlock();
                    $$->listinstr = $2;
                }
                | KW_BEGIN KW_END
                {
                    
                }
                ;

ListInstr       : ListInstr SEP_SCOL Instr
                {
                    $$ = $1;
                    $$->instrs.push_back($3);
                    
                }
                | Instr
                {
                    $$ = new ListInstr();
                    $$->instrs.push_back($1);
                    
                }
				;

Instr           : KW_WHILE Expression KW_DO Instr
                {
                    WhileInstr* tmp = new WhileInstr();
                    tmp->expr = $2;
                    tmp->instr = $4;
                    $$ = tmp;
                }
                | KW_REPEAT ListInstr KW_UNTIL Expression
                {
                    RepeatInstr* tmp = new RepeatInstr();
                    tmp->listinstr = $2;
                    tmp->expr = $4;
                    $$ = tmp;
                }
                | KW_FOR ForIdent OP_AFFECT Expression ForDirection Expression KW_DO Instr
                {
                    
                }
                | KW_IF Expression KW_THEN Instr KW_ELSE Instr 
                {
                    IfThenElseInstr* tmp = new IfThenElseInstr();
                    tmp->expr = $2;
                    tmp->then = $4;
                    tmp->elseins = $6;
                    $$ = tmp;
                }
                | KW_IF Expression KW_THEN Instr %prec KW_IFX
                {
                    IfThenInstr* tmp = new IfThenInstr();
                    tmp->expr = $2;
                    tmp->then = $4;
                    $$ = tmp;
                }

                | KW_CASE Expression KW_OF CaseInstr SEP_SCOL KW_END
                {
                   
                }
                | TOK_IDENT OP_AFFECT Expression
                {
                	AssignInstr* tmp = new AssignInstr();
                	tmp->tokenid = *$1;
                	tmp->expr = $3;
                	$$ = tmp;
                    // printf("assign instr\n");
                }
                | Call
                {
                   CallInstr* tmp = new CallInstr();
                   tmp->expr = $1;

                   $$ = tmp;

                }
                | BlockCode
                {
                   BlockInstr* tmp = new BlockInstr();
                   tmp->block = $1;
                   $$ = tmp;
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
					$$ = new node_case_tag(n, 1); 
                }
				| TOK_INTEGER
                {
					$$ = new node_case_tag(n, 2); 
                }
				;

ForIdent        : TOK_IDENT
                {
					 $$ = new node_for_ident(n); 
                }

ForDirection    : KW_TO
                {
					
                }
                | KW_DOWNTO
                {
					 
                }
                ;

Expression      : MathExpr
				{
					$$ = $1;
                }
                | CompExpr
				{
					 $$ = $1;
                }
                | BoolExpr
				{
					$$ = $1;
                }
                | AtomExpr
				{
					$$ = $1;
                }
                | VarExpr
				{
					$$ = $1;
                }
                | Call
                {
					$$ = $1;
                }
                ;



MathExpr        : Expression OP_ADD Expression
                {
                	MathExpr* tmp = new MathExpr();
                	tmp -> op = EXPR_ADD;
                	tmp -> op1 = $1;
                	tmp -> op2 = $3;
                	$$ = tmp;
					printf("parse add!\n");
                }
                | Expression OP_SUB Expression
                {
					MathExpr* tmp = new MathExpr();
                	tmp -> op = EXPR_SUB;
                	tmp -> op1 = $1;
                	tmp -> op2 = $3;
                	$$ = tmp;
                }
                | Expression OP_MUL Expression
                {
					MathExpr* tmp = new MathExpr();
                	tmp -> op = EXPR_MUL;
                	tmp -> op1 = $1;
                	tmp -> op2 = $3;
                	$$ = tmp;
                }
                | Expression OP_SLASH Expression
                {
					MathExpr* tmp = new MathExpr();
                	tmp -> op = EXPR_DIV_FLOAT;
                	tmp -> op1 = $1;
                	tmp -> op2 = $3;
                	$$ = tmp;
                }
                | Expression KW_DIV Expression
                {
					MathExpr* tmp = new MathExpr();
                	tmp -> op = EXPR_DIV_INT;
                	tmp -> op1 = $1;
                	tmp -> op2 = $3;
                	$$ = tmp;
                }
                | Expression KW_MOD Expression
                {
					
                }
                | Expression OP_EXP Expression
                {
					 
                }
                ;

CompExpr        : Expression OP_EQ Expression
                {
					CompExpr* tmp = new CompExpr();
					tmp->op1 = $1;
					tmp->op2 = $3;
					tmp->op = EXPR_EQ;
					$$ = tmp;
					printf("cmp eq!\n");
                }
                | Expression OP_NEQ Expression
                {
					CompExpr* tmp = new CompExpr();
					tmp->op1 = $1;
					tmp->op2 = $3;
					tmp->op = EXPR_NEQ;
					$$ = tmp;	 
                }
                | Expression OP_LT Expression
                {
					CompExpr* tmp = new CompExpr();
					tmp->op1 = $1;
					tmp->op2 = $3;
					tmp->op = EXPR_LT;
					$$ = tmp;
                }
                | Expression OP_LTE Expression
                {
					CompExpr* tmp = new CompExpr();
					tmp->op1 = $1;
					tmp->op2 = $3;
					tmp->op = EXPR_LTE;
					$$ = tmp;
                }
                | Expression OP_GT Expression
                {
                	printf("greater\n");
					CompExpr* tmp = new CompExpr();
					tmp->op1 = $1;
					tmp->op2 = $3;
					tmp->op = EXPR_GT;
					$$ = tmp;
                }
                | Expression OP_GTE Expression
                {
					CompExpr* tmp = new CompExpr();
					tmp->op1 = $1;
					tmp->op2 = $3;
					tmp->op = EXPR_GTE;
					$$ = tmp; 
                }
                ;

BoolExpr        : Expression KW_AND Expression
                {
					 BoolExpr* tmp = new BoolExpr();
					 tmp->op1 = $1;
					 tmp->op2 = $3;
					 tmp->op = EXPR_AND;
					 $$ = tmp;
                }
                | Expression KW_OR Expression
                {
					 BoolExpr* tmp = new BoolExpr();
					 tmp->op1 = $1;
					 tmp->op2 = $3;
					 tmp->op = EXPR_OR;
					 $$ = tmp;
                }
                | Expression KW_XOR Expression
                {
					 BoolExpr* tmp = new BoolExpr();
					 tmp->op1 = $1;
					 tmp->op2 = $3;
					 tmp->op = EXPR_XOR;
					 $$ = tmp;
                }
                | KW_NOT Expression
                {
					BoolExpr* tmp = new BoolExpr();
					 tmp->op1 = $2;
					 tmp->op = EXPR_NOT;
					 $$ = tmp;
                }
                ;
				
AtomExpr        : SEP_PO Expression SEP_PF
                {
					Expr_AtomExpr* tmp = new Expr_AtomExpr();
					tmp->expr = $2;
					$$ = tmp;
                }
                | TOK_INTEGER
                {
					Int_AtomExpr* tmp = new Int_AtomExpr();
					tmp->val = $1;
					$$ = tmp;

                }
                | TOK_REAL
                {
					Real_AtomExpr* tmp = new Real_AtomExpr();
					tmp->val = $1;
					$$ = tmp;
                }
                | TOK_BOOLEAN
                {
					Bool_AtomExpr* tmp = new Bool_AtomExpr();
					tmp -> val = $1;
					$$ = tmp;

                }
                | KW_NIL
                {
					 
                }
                | TOK_STRING
                {
					
                }
                ;

VarExpr         : TOK_IDENT
                {
					VarExpr* tmp = new VarExpr();
					tmp->name = *$1;
					$$ = tmp;
					printf("get var expr!\n");
                }
                | VarExpr SEP_CO ListIndices SEP_CF
                {
					
                }
				| VarExpr OP_PTR
				{
					
                }
                ;

Call            : TOK_IDENT Parameters
                {
                   CallExpr* tmp = new CallExpr();
                   tmp->funcName = *$1;
                   for (int i = 0; i < $2->params.size(); ++i)
                   {
                   		tmp->params.push_back($2->params[i]);
                   }
                   tmp->paramsCount = $2->params.size();
                   $$ = tmp;
                   printf("call!!\n");
                   printf("params size:%d\n", tmp->params.size());
                }
                ;


Parameters      : SEP_PO ListParameters SEP_PF
                {
                    $$ = $2;
                    // printf("pa:%d\n", $2->params.size());
                }
                | SEP_PO SEP_PF
                {
                    $$ = new ListParameters();
                }
                ;

ListIndices     : ListIndices SEP_COMMA Expression
				{
					
				}
                | Expression
                {
					
				}
				;

ListParameters  : ListParameters SEP_COMMA Expression
                {
					$$ = $1;
					$$->params.push_back($3);
				}
                | Expression
                {
					$$ = new ListParameters();
					$$->params.push_back($1);
				}
                ;

%%
void initSymbolTable(){
	printf("initializing symbol table.\n");
	roottab = new Symtab();
	currtab = roottab;
	Symtab* voidtable = new Symtab();
	roottab->next = voidtable;
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

