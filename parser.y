%{

#include "node.h"
#include <string>
#include <vector>
#include <iostream>
#include "Symtab.h"
#include "common.h"

//Write a fuxxxxk pascal compiler.
//The work is finished by DarkTango.
//hjahahhaha
Node *root;

Symtab* roottab;
Symtab* currtab;

extern int yylex();
void yyerror(const char *s){printf("ERROR:%s\n", s);}
using namespace std;


%}

%union {
	string* str;
	int token;
	Program* program;
	Block* block;
	BlockDeclVar* blockDeclVar;
	DeclVar* declVar;
	ListDeclVar* listDeclVar;
	BlockCode* blockCode;
	ListInstr* listInstr;
	ListIdent* listIdent;
	Instr* instr;
	AssignInstr* assignInstr;
	Expression* expression;
	MathExpr* mathExpr;
	AddExpr* addExpr;
	SubExpr* subExpr;
	MulExpr* mulExpr;
	DivExpr* divExpr;
	Type* type;
	BaseType* baseType;
	VarExpr* varexpr;
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

%token SEP_SCOL // ;
%token SEP_DOT // .
%token SEP_DOTS // :
%token SEP_DOTDOT // ..
%token SEP_COMMA // ,
%token SEP_CO // [
%token SEP_CF // ]
%token SEP_PO // (
%token SEP_PF // )

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
%left OP_MUL OP_SLASH KW_AND KW_DIV KW_MOD OP_DIV
%right KW_NOT OP_NEG OP_POS
%left OP_EXP
%nonassoc OP_PTR
%nonassoc OP_DOT
%left SEP_CO

%nonassoc KW_IFX
%nonassoc KW_ELSE
%nonassoc KW_CASEX

%type<program> Program
%type<block> Block
%type<blockDeclVar> BlockDeclVar
%type<listDeclVar> ListDeclVar
%type<declVar> DeclVar
%type<listIdent> ListIdent
%type<blockCode> BlockCode
%type<listInstr> ListInstr
%type<instr> Instr
%type<expression> Expression
%type<mathExpr> MathExpr
%type<type> Type
%type<baseType> BaseType
%type<str> TOK_IDENT
%type<varexpr> VarExpr







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

Program         : KW_PROGRAM TOK_IDENT SEP_SCOL Block SEP_DOT
                {
                	printf("program parsed!\n");
					$$ = new Program();
					$$->block = $4;
					root = new Node();
					root->program = $$;
                }
                ;

Block           : BlockDeclVar BlockCode
                {
                	printf("block parsed!\n");
					$$ = new Block();
					$$->blockDeclVar = $1;
					$$->blockCode = $2;
                }
                ;

// BlockDeclConst  : KW_CONST ListDeclConst
// 				{
// 					$$ = new node_block_decl_const(new node_keyword("const"), $2);
// 				}
//                 | 
// 				{
// 					$$ = new node_block_decl_const();
// 				}
//                 ;

// ListDeclConst   : ListDeclConst DeclConst
// 				{
// 					$$ = new node_list_decl_const($1, $2);
// 				}
//                 | DeclConst
// 				{
// 					$$ = new node_list_decl_const($1);
// 				}
//                 ;

// DeclConst       : TOK_IDENT OP_EQ Expression SEP_SCOL
//                 {
//                     string _token = TableIdentifier::last_token;
// 					node_tok_ident* n = new node_tok_ident(_token);


// 					$$ = new node_decl_const(n, new node_op(":"), $3, new node_sep(";"));

//                 }
//                 ;

// BlockDeclType   : KW_TYPE ListDeclType
// 				{
// 					/*node_kw* nk = new node_kw($1);*/
// 					$$ = new node_block_decl_type(new node_keyword("type"), $2);
// 				}
//                 |
// 				{
// 					$$ = new node_block_decl_type();
// 				}
//                 ;

// ListDeclType    : ListDeclType DeclType
// 				{
// 					$$ = new node_list_decl_type($1, $2);
// 				}
//                 | DeclType
// 				{
// 					$$ = new node_list_decl_type($1);
// 				}
//                 ;

// DeclType        : TOK_IDENT OP_EQ Type SEP_SCOL
// 				{
// 					string _token = TableIdentifier::last_token;
// 					node_tok_ident* n = new node_tok_ident(_token);
					
// 					$$ = new node_decl_type(n, new node_op("="), $3, new node_sep(";"));
// 				}
//                 ;

BlockDeclVar    : KW_VAR ListDeclVar
				{
					// printf("BlockDeclVar!\n");
					$$ = new BlockDeclVar();
					$$->listDeclVar = $2;
				}
                |
				{
					$$ = NULL;
				}
                ;

ListDeclVar     : ListDeclVar DeclVar
				{
					$$ = new ListDeclVar();
					$$->listDeclVar = $1;
					$$->declVar = $2;
				}
                | DeclVar
				{
					$$->listDeclVar = NULL;
					$$->declVar = $1;
				}
                ;

DeclVar         : ListIdent SEP_DOTS Type SEP_SCOL
                {
                	//printvec($1->ids);
                    $$ = new DeclVar();
                    $$->listIdent = $1;
                    $$->type = $3;

                    // add symbol to symbol table.
                    if ($$->type->baseType != NULL)
                    {
                    	addToSymbolTable($1->ids, $$->type->baseType->tp, currtab);
                    }
                    //if usertype
                }
                ;

ListIdent       : ListIdent SEP_COMMA TOK_IDENT
                {
                	// printf("listIdent!\n");
					//add to symbol table
					$$ = $1;
					$$->ids.push_back(*$3);
                }
                | TOK_IDENT
                {
					$$ = new ListIdent();
					$$->ids.push_back(*$1);
					
                }
                ;

// BlockDeclFunc   : ListDeclFunc SEP_SCOL
// 				{
// 					$$ = new node_block_decl_func($1, new node_sep(";"));
// 				}
//                 |
// 				{
// 					$$ = new node_block_decl_func();
// 				}
//                 ;

// ListDeclFunc    : ListDeclFunc SEP_SCOL DeclFunc
// 				{
// 					$$ = new node_list_decl_func($1, new node_sep(";"), $3);
// 				}
//                 | DeclFunc
// 				{
// 					$$ = new node_list_decl_func($1);
// 				}
//                 ;

// DeclFunc        : ProcDecl
//                 {
// 					$$ = new node_decl_func($1, 1);
// 				}
// 				| FuncDecl
//                 {
// 					$$ = new node_decl_func($1, 2);
// 				}
// 				;

// ProcDecl        : ProcHeader SEP_SCOL Block
// 				{
// 					$$ = new node_proc_decl($1, new node_sep(";"), $3);
// 				}
//                 ;

// ProcHeader      : ProcIdent
// 				{
// 					$$ = new node_proc_header($1);
// 				}
//                 | ProcIdent FormalArgs
//                 {
// 					$$ = new node_proc_header($1, $2);
// 				}
// 				;

// ProcIdent       : KW_PROC TOK_IDENT
//                 {
//                     string _token = TableIdentifier::last_token;
// 					node_tok_ident* n = new node_tok_ident(_token);
// 					$$ = new node_proc_ident(new node_keyword("proc"), n);
//                 }
//                 ;

// FormalArgs      : SEP_PO ListFormalArgs SEP_PF
// 				{
// 					$$ = new node_formal_args(new node_sep("("), $2, new node_sep(")"));
// 				}
//                 ;

// ListFormalArgs  : ListFormalArgs SEP_SCOL FormalArg
// 				{
// 					$$ = new node_list_formal_args($1, new node_sep(";"), $3);
// 				}
//                 | FormalArg
// 				{
// 					$$ = new node_list_formal_args($1);
// 				}
//                 ;

// FormalArg       : ValFormalArg
// 				{
// 					$$ = new node_formal_arg($1, 1);
// 				}
//                 | VarFormalArg
//                 {
// 					$$ = new node_formal_arg($1, 2);
// 				}
// 				;

// ValFormalArg    : ListIdent SEP_DOTS BaseType
// 				{
// 					$$ = new node_val_formal_arg($1, new node_sep(":"), $3);
// 				}
//                 ;

// VarFormalArg    : KW_VAR ListIdent SEP_DOTS BaseType
//                 {
// 					$$ = new node_var_formal_arg(new node_keyword("var"), $2, new node_sep(":"), $4);
// 				}
// 				;

// FuncDecl        : FuncHeader SEP_SCOL Block
// 				{
// 					$$ = new node_func_decl($1, new node_sep(";"), $3);
// 				}
//                 ;

// FuncHeader      : FuncIdent FuncResult
// 				{
// 					$$ = new node_func_header($1, $2);
// 				}
//                 | FuncIdent FormalArgs FuncResult
//                 {
// 					$$ = new node_func_header($1, $2, $3);
// 				}
// 				;

// FuncIdent       : KW_FUNC TOK_IDENT
//                 {
//                     string _token = TableIdentifier::last_token;
// 					node_tok_ident* n = new node_tok_ident(_token);
// 					$$ = new node_func_ident(new node_keyword("function"), n);
//                 }
//                 ;

// FuncResult      : SEP_DOTS BaseType
// 				{
// 					$$ = new node_func_result(new node_sep(":"), $2);
// 				}
//                 ;

Type            : BaseType
				{
					$$ = new Type();
					$$->baseType = $1;
				}
    //             | UserType
    //             {
				// 	$$ = new node_type($1, 2);
				// }
				;

// UserType        : InterType
//                 {
// 					$$ = new node_user_type($1, 1);
// 				} 
// 				| ArrayType
//                 {
// 					$$ = new node_user_type($1, 2);
// 				}
// 				| RecordType
//                 {
// 					$$ = new node_user_type($1, 3);
// 				}
// 				| PointerType
// 				{
// 					$$ = new node_user_type($1, 4);
// 				}
//                 ;

BaseType        : KW_INTEGER
                {
                    $$ = new BaseType();
                    $$->tp = TYPE_INT;
                }
                | KW_REAL
                {
                    $$ = new BaseType();
                    $$->tp = TYPE_REAL;
                }
                | KW_BOOLEAN
                {
                    $$ = new BaseType();
                    $$->tp = TYPE_BOOLEAN;
                }
                | KW_CHAR
                {
                    $$ = new BaseType();
                    $$->tp = TYPE_CHAR;
                }
                | KW_STRING
                {
                    $$ = new BaseType();
                    $$->tp = TYPE_STR;
                }
                ;


// InterType       : InterBase SEP_DOTDOT InterBase
//                 {
//                     $$ = new node_inter_type($1, new node_sep(".."), $3);
//                 }
//                 ;

// InterBase       : NSInterBase
// 				{
//                     $$ = new node_inter_base($1);
//                 }
//                 | OP_SUB NSInterBase
//                 {
//                     $$ = new node_inter_base(new node_op("-"), $2);
//                 }
//                 ;

// NSInterBase     : TOK_IDENT
//                 {
// 					string _token = TableIdentifier::last_token;
// 					node_tok_ident* n = new node_tok_ident(_token);
//                     $$ = new node_ns_inter_base(n, 1);
//                 }
//                 | TOK_INTEGER
//                 {
// 					string _token = TableIdentifier::last_token;
// 					node_tok_integer* n = new node_tok_integer(_token);
//                    				 $$ = new node_ns_inter_base(n, 2);
//                 }
//                 ;


// ArrayType       : KW_ARRAY SEP_CO ListArrayIndex SEP_CF KW_OF Type
//                 {
//                     $$ = new node_array_type(new node_keyword("array"), new node_sep("["), $3, new node_sep("]"), new node_keyword("if"), $6);
//                 }
//                 ;

// ListArrayIndex  : ListArrayIndex SEP_COMMA ArrayIndex
// 				{
//                     $$ = new node_list_array_index($1, new node_sep(","), $3);
//                 }
//                 | ArrayIndex
// 				{
//                     $$ = new node_list_array_index($1);
//                 }
//                 ;

// ArrayIndex      : TOK_IDENT
// 				{
// 					string _token = TableIdentifier::last_token;
// 					node_tok_ident* n = new node_tok_ident(_token);
//                     $$ = new node_array_index(n, 1);
//                 }
//                 | InterType
//                 {
//                     $$ = new node_array_index($1, 2);
//                 }
// 				;

// RecordType      : KW_RECORD RecordFields KW_END
//                 {
//                     $$ = new node_record_type(new node_keyword("record"), $2, new node_keyword("end"));
//                 }
//                 ;

// RecordFields    : RecordFields SEP_SCOL RecordField
// 				{
//                     $$ = new node_record_fields($1, new node_sep(";"), $3);
//                 }
//                 | RecordField
// 				{
//                     $$ = new node_record_fields($1);
//                 }
//                 ;

// RecordField     : ListIdent SEP_DOTS Type
//                 {
//                     $$ = new node_record_field($1, new node_sep(":"), $3);
//                 }
// 				;

// PointerType     : OP_PTR Type
//                 {
//                     $$ = new node_pointer_type(new node_op("^"), $2);
//                 }
//                 ;

BlockCode       : KW_BEGIN ListInstr KW_END
                {
                    $$ = new BlockCode();
                    $$->listInstr = $2;
                }
                | KW_BEGIN ListInstr SEP_SCOL KW_END
                {
                    $$ = new BlockCode();
                    $$->listInstr = $2;
                }
                | KW_BEGIN KW_END
                {
                    $$ = NULL;
                }
                ;

ListInstr       : ListInstr SEP_SCOL Instr
                {
                    $$ = new ListInstr();
                    $$->listInstr = $1;
                    $$->instr = $3;
                }
                | Instr
                {
                    $$ = new ListInstr();
                    $$->listInstr = NULL;
                    $$->instr = $1;
                }
				;

Instr           : TOK_IDENT OP_AFFECT Expression
                {
                    $$ = new AssignInstr();
                    // $$->id = *($1);
                    // $$->expression = $3;
                }
				// | KW_WHILE Expression KW_DO Instr
    //             {
    //                 $$ = new node_instr(new node_keyword("while"), $2, new node_keyword("do"), $4, 1);
    //             }
    //             | KW_REPEAT ListInstr KW_UNTIL Expression
    //             {
    //                 $$ = new node_instr(new node_keyword("repeat"), $2, new node_keyword("until"), $4, 2);
    //             }
    //             | KW_FOR ForIdent OP_AFFECT Expression ForDirection Expression KW_DO Instr
    //             {
    //                 $$ = new node_instr(new node_keyword("for"), $2, new node_op(":="), $4, $5, $6, new node_keyword("do"), $8, 3);
    //             }
    //             | KW_IF Expression KW_THEN Instr %prec KW_IFX
    //             {
    //                 $$ = new node_instr(new node_keyword("if"), $2, new node_keyword("then"), $4, 4);
    //             }
    //             | KW_IF Expression KW_THEN Instr KW_ELSE Instr
    //             {
    //                 $$ = new node_instr(new node_keyword("if"), $2, new node_keyword("then"), $4, new node_keyword("else"), $6, 5);
    //             }
    //             | KW_CASE Expression KW_OF CaseInstr SEP_SCOL KW_END
    //             {
    //                 $$ = new node_instr(new node_keyword("case"), $2, new node_keyword("of"), $4, new node_sep(";"), new node_keyword("end"), 6);
    //             }
                
                // | Call
                // {
                //     $$ = new node_instr($1, 8);
                // }
                // | BlockCode
                // {
                //     $$ = new node_instr($1, 9);
                // }
                ;


// CaseInstr      : CaseInstr SEP_SCOL Single_case_instr 
//                 {
//                     $$ = new node_case_instr($1, new node_sep(";"), $3);
//                 }
//                 | Single_case_instr
//                 {
//                     $$ = new node_case_instr($1);
//                 }
//                 ;

// Single_case_instr : CaseTag SEP_DOTS Instr
//                     {
//                         $$ = new node_single_case_instr($1, new node_sep(":"), $3); 
//                     }
//                   ;

// CaseTag        : TOK_STRING
//                 {
// 					string _token = TableIdentifier::last_token;
// 					node_tok_string* n = new node_tok_string(_token);
// 					$$ = new node_case_tag(n, 1); 
//                 }
// 				| TOK_INTEGER
//                 {
// 					string _token = TableIdentifier::last_token;
// 					node_tok_integer* n = new node_tok_integer(_token);
// 					$$ = new node_case_tag(n, 2); 
//                 }
// 				;

// ForIdent        : TOK_IDENT
//                 {
// 					string _token = TableIdentifier::last_token;
// 					node_tok_ident* n = new node_tok_ident(_token);
// 					$$ = new node_for_ident(n); 
//                 }

// ForDirection    : KW_TO
//                 {
// 					$$ = new node_for_direction(new node_keyword("to"), 1); 
//                 }
//                 | KW_DOWNTO
//                 {
// 					$$ = new node_for_direction(new node_keyword("downto"), 2); 
//                 }
//                 ;

Expression      : MathExpr
				{
					$$ = $1; 
                }
    //             | CompExpr
				// {
				// 	$$ = new node_expression($1, 2); 
    //             }
    //             | BoolExpr
				// {
				// 	$$ = new node_expression($1, 3); 
    //             }
    //             | AtomExpr
				// {
				// 	$$ = new node_expression($1, 4); 
    //             }
                | VarExpr
				{
					$$->intval = $1->intval; 
                }
    //             | Call
    //             {
				// 	$$ = new node_expression($1, 6); 
    //             }
                ;


MathExpr        : Expression OP_ADD Expression
                {
					$$ = new AddExpr();
					$$->lhs = $1;
					$$->rhs = $3; 
                }
                | Expression OP_SUB Expression
                {
					$$ = new SubExpr();
					$$->lhs = $1;
					$$->rhs = $3; 
                }
                | Expression OP_MUL Expression
                {
					$$ = new MulExpr();
					$$->lhs = $1;
					$$->rhs = $3;  
                }
                | Expression OP_DIV Expression
                {
					$$ = new DivExpr();
					$$->lhs = $1;
					$$->rhs = $3; 
                }
     //            | Expression KW_DIV Expression
     //            {
					// $$ = new node_math_expr($1, new node_keyword("div"), $3, 5); 
     //            }
     //            | Expression KW_MOD Expression
     //            {
					// $$ = new node_math_expr($1, new node_op("%"), $3, 6); 
     //            }
     //            | Expression OP_EXP Expression
     //            {
					// $$ = new node_math_expr($1, new node_op("**"), $3, 7); 
     //            }
                ;

// CompExpr        : Expression OP_EQ Expression
//                 {
// 					$$ = new node_comp_expr($1, new node_op("="), $3, 1); 
//                 }
//                 | Expression OP_NEQ Expression
//                 {
// 					$$ = new node_comp_expr($1, new node_op("<>"), $3, 2); 
//                 }
//                 | Expression OP_LT Expression
//                 {
// 					$$ = new node_comp_expr($1, new node_op("<"), $3, 3); 
//                 }
//                 | Expression OP_LTE Expression
//                 {
// 					$$ = new node_comp_expr($1, new node_op("<"), $3, 4); 
//                 }
//                 | Expression OP_GT Expression
//                 {
// 					$$ = new node_comp_expr($1, new node_op(">"), $3, 5); 
//                 }
//                 | Expression OP_GTE Expression
//                 {
// 					$$ = new node_comp_expr($1, new node_op(">="), $3, 6); 
//                 }
//                 ;

// BoolExpr        : Expression KW_AND Expression
//                 {
// 					$$ = new node_bool_expr($1, new node_keyword("and"), $3, 1); 
//                 }
//                 | Expression KW_OR Expression
//                 {
// 					$$ = new node_bool_expr($1, new node_keyword("or"), $3, 2); 
//                 }
//                 | Expression KW_XOR Expression
//                 {
// 					$$ = new node_bool_expr($1, new node_keyword("xor"), $3, 3); 
//                 }
//                 | KW_NOT Expression
//                 {
// 					$$ = new node_bool_expr(new node_keyword("not"), $2, 4); 
//                 }
//                 ;
				
// AtomExpr        : SEP_PO Expression SEP_PF
//                 {
// 					$$ = new node_atom_expr(new node_sep("("), $2, new node_sep(")"), 1); 
//                 }
//                 | TOK_INTEGER
//                 {
// 					string _token = TableIdentifier::last_token;
// 					node_tok_integer* n = new node_tok_integer(_token);
// 					$$ = new node_atom_expr(n, 2); 
//                 }
//                 | TOK_REAL
//                 {
// 					string _token = TableIdentifier::last_token;
// 					node_tok_real* n = new node_tok_real(_token);
// 					$$ = new node_atom_expr(n, 3); 
//                 }
//                 | TOK_BOOLEAN
//                 {
// 					string _token = TableIdentifier::last_token;
// 					node_tok_boolean* n = new node_tok_boolean(_token);
// 					$$ = new node_atom_expr(n, 4); 
//                 }
//                 | KW_NIL
//                 {
// 					$$ = new node_atom_expr(new node_keyword("nil"), 5); 
//                 }
//                 | TOK_STRING
//                 {
// 					string _token = TableIdentifier::last_token;
// 					node_tok_string* n = new node_tok_string(_token);
// 					$$ = new node_atom_expr(n, 6); 
//                 }
//                 ;

VarExpr         : TOK_IDENT
                {
					if (!currtab->hasSymbol((*$1)))
					{
						printf("symbol %s not defined!\n", *$1);
					}
					else{
						$$->symbol = currtab->getSymbolbyName(*$1);
					}
                }
//                 | VarExpr SEP_CO ListIndices SEP_CF
//                 {
// 					$$ = new node_var_expr($1, new node_sep("["), $3, new node_sep("]"), 2); 
//                 }
// 				| VarExpr OP_PTR
// 				{
// 					$$ = new node_var_expr($1, new node_op("^"), 3); 
//                 }
                ;

// Call            : CallHeader Parameters
//                 {
//                     $$ = new node_call($1, $2);
//                 }
//                 ;

// CallHeader      : TOK_IDENT
//                 {
// 					string _token = TableIdentifier::last_token;
// 					node_tok_ident* n = new node_tok_ident(_token);
//                     $$ = new node_call_header(n);
//                 }

// Parameters      : SEP_PO ListParameters SEP_PF
//                 {
//                     $$ = new node_parameters(new node_sep("("), $2, new node_sep(")"));
//                 }
//                 | SEP_PO SEP_PF
//                 {
//                     $$ = new node_parameters(new node_sep("("), new node_sep(")"));
//                 }
//                 ;

// ListIndices     : ListIndices SEP_COMMA Expression
// 				{
// 					$$ =  new node_list_indices($1, new node_sep(","), $3);
// 				}
//                 | Expression
//                 {
// 					$$ = new node_list_indices($1);
// 				}
// 				;

// ListParameters  : ListParameters SEP_COMMA Expression
//                 {
// 					$$ = new node_list_parameters($1, new node_sep(","), $3);
// 				}
//                 | Expression
//                 {
// 					$$ = new node_list_parameters($1);
// 				}
//                 ;

%%

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

