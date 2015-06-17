#ifndef _NODE_H
#define _NODE_H

#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;


struct node;
struct node_tok_ident;
struct node_tok_boolean;
struct node_tok_integer;
struct node_tok_real;
struct node_tok_string;
struct node_sep;
struct node_op;
struct node_token;
struct node_keyword;
struct node_program;
struct node_program_header;
struct node_block;
struct node_block_decl_const;
struct node_list_decl_const;
struct node_decl_const;
struct node_block_decl_type;
struct node_list_decl_type;
struct node_decl_type;
struct node_block_decl_var;
struct node_list_decl_var;
struct node_decl_var;
struct node_list_ident;
struct node_block_decl_func;
struct node_list_decl_func;
struct node_decl_func;
struct node_proc_decl;
struct node_proc_header;
struct node_proc_ident;
struct node_formal_args;
struct node_list_formal_args;
struct node_formal_arg;
struct node_val_formal_arg;
struct node_var_formal_arg;
struct node_func_decl;
struct node_func_header;
struct node_func_ident;
struct node_func_result;
struct node_type;
struct node_user_type;
struct node_base_type;
struct node_inter_type;
struct node_inter_base;
struct node_ns_inter_base;
struct node_array_type;
struct node_list_array_index;
struct node_array_index;
struct node_record_type;
struct node_record_fields;
struct node_record_field;
struct node_pointer_type;
struct node_block_code;
struct node_list_instr;
struct node_instr;
struct node_case_instr;
struct node_single_case_instr;
struct node_case_tag;
struct node_for_ident;
struct node_for_direction;
struct node_expression;
struct node_left_expr;
struct node_math_expr;
struct node_comp_expr;
struct node_bool_expr;
struct node_atom_expr;
struct node_var_expr;
struct node_call;
struct node_call_header;
struct node_parameters;
struct node_list_indices;
struct node_list_parameters;


struct node {
	int child_num;
	vector<node*> childs;

};

struct node_tok_ident : public node {
	string name;
	node_tok_ident(string s) {
		name = s;
	}
};


struct node_tok_boolean : public node {
	bool value;

	node_tok_boolean(string s) {
		if (s == "true") {
			value = true;
		}
		else {
			value = false;
		}
	}

};

struct node_tok_integer : public node{
	int value;
	node_tok_integer(string s) {
		int tmp = atoi(s.c_str());
		value = tmp;
	}
};

struct node_tok_real : public node{
	float value;
	node_tok_real(string f) {
		float tmp = atof(f.c_str());
		value = tmp;
	}
};

struct node_tok_string : public node{
	string value;
	node_tok_string(string s) {
		value = s;
	}
};


struct node_sep : public node {
	string sep;
	node_sep(string s) : sep(s) {}
};

struct node_op : public node {
	string op;
	node_op(string s) : op(s) {}
};

struct node_token : public node {
	string token;
	node_token(string s) : token(s) {}
};

struct node_keyword : public node {
	string keyword;
	node_keyword(string s) : keyword(s) {}
};





struct node_list_parameters : public node {
	// ListParameters SEP_COMMA Expression
	node_list_parameters(node_list_parameters* _list_parameters, node_sep* _sep, node_expression* _expression) {
	}

	// Expression
	node_list_parameters(node_expression* _expression) {
	}
};

struct node_list_indices : public node {
	// ListIndices SEP_COMMA Expression
	node_list_indices(node_list_indices* _list_indices, node_sep* _sep, node_expression* _expression) {
	}

	// Expression
	node_list_indices(node_expression* _expression) {
	}

};


struct node_parameters : public node {
	// SEP_PO ListParameters SEP_PF
	node_parameters(node_sep* _sep1, node_list_parameters* _list_parameters, node_sep* _sep2) {
	}

	// SEP_PO SEP_PF
	node_parameters(node_sep* _sep1, node_sep* _sep2) {
	}

};


struct node_call_header : public node {
	// TOK_IDENT
	node_call_header(node_tok_ident* _tok_ident) {
	}

};


struct node_call : public node {
	// CallHeader Parameters
	node_call(node_call_header* _call_header, node_parameters* _parameters) {
	}

};


struct node_var_expr : public node {
	// TOK_IDENT
	node_var_expr(node_tok_ident* _tok_ident, int flag) {
	}

	// VarExpr SEP_CO ListIndices SEP_CF
	node_var_expr(node_var_expr* _var_expr, node_sep* _sep1, node_list_indices* _list_indices, node_sep* _sep2, int flag) {
	}

	// VarExpr OP_PTR
	node_var_expr(node_var_expr* _var_expr, node_op* _op, int flag) {
	}

};


struct node_atom_expr : public node {
	// SEP_PO Expression SEP_PF
	node_atom_expr(node_sep* _sep1, node_expression* _expression, node_sep* _sep2, int flag) {
	}

	// TOK_INTEGER
	node_atom_expr(node_tok_integer* _tok_integer, int flag) {
	}

	// TOK_REAL
	node_atom_expr(node_tok_real* _tok_real, int flag) {
	}

	// TOK_BOOLEAN
	node_atom_expr(node_tok_boolean* _tok_boolean, int flag) {
	}

	// KW_NIL
	node_atom_expr(node_keyword* _keyword, int flag) {
	}

	// TOK_STRING
	node_atom_expr(node_tok_string* _tok_string, int flag) {
	}

};


struct node_bool_expr : public node {
	// Expression KW_AND Expression
	// Expression KW_OR Expression
	// Expression KW_XOR Expression
	node_bool_expr(node_expression* _expression1, node_keyword* _keyword, node_expression* _expression2, int flag) {
	}

	// KW_NOT Expression
	node_bool_expr(node_keyword* _keyword, node_expression* _expression, int flag) {
	}

};


struct node_comp_expr : public node {
	// Expression OP_EQ Expression
	// Expression OP_NEQ Expression
	// Expression OP_LT Expression
	// Expression OP_LTE Expression
	// Expression OP_GT Expression
	// Expression OP_GTE Expression
	node_comp_expr(node_expression* _expression1, node_op* _op, node_expression* _expression2, int flag) {
	}

};


struct node_math_expr : public node {
	// Expression OP_ADD Expression
	// Expression OP_SUB Expression
	// Expression OP_MUL Expression
	// Expression OP_SLASH Expression
	// Expression OP_EXP Expression
	node_math_expr(node_expression* _expression1, node_op* _op, node_expression* _expression2, int flag) {
	}

	// Expression KW_DIV Expression
	// Expression KW_MOD Expression
	node_math_expr(node_expression* _expression1, node_keyword* _keyword, node_expression* _expression2, int flag) {
	}


};


struct node_left_expr : public node {
	// TOK_IDENT
	node_left_expr(node_tok_ident* _tok_ident) {
	}

};


struct node_expression : public node {
	// MathExpr
	node_expression(node_math_expr* _math_expr, int flag) {
	}

	// CompExpr
	node_expression(node_comp_expr* _comp_expr, int flag) {
	}

	// BoolExpr
	node_expression(node_bool_expr* _bool_expr, int flag) {
	}

	// AtomExpr
	node_expression(node_atom_expr* _atom_expr, int flag) {
	}

	// VarExpr
	node_expression(node_var_expr* _var_expr, int flag) {
	}

	// Call
	node_expression(node_call* _call, int flag) {
	}

};


struct node_for_direction : public node {
	// KW_TO
	// KW_DOWNTO
	node_for_direction(node_keyword* _keyword, int flag) {
	}

	

};


struct node_for_ident : public node {
	// TOK_IDENT
	node_for_ident(node_tok_ident* _tok_ident) {
	}

};


struct node_case_tag : public node {
	// TOK_STRING
	node_case_tag(node_tok_string* _tok_string, int flag) {
	}

	// TOK_INTEGER
	node_case_tag(node_tok_integer* _tok_integer, int flag) {
	}

};


struct node_single_case_instr : public node {
	// CaseTag SEP_DOTS Instr
	node_single_case_instr(node_case_tag* _case_tag, node_sep* _sep, node_instr* _instr) {
	}

};


struct node_case_instr : public node {
	// CaseInstr SEP_SCOL Single_case_instr 
	node_case_instr(node_case_instr* _case_instr, node_sep* _sep, node_single_case_instr* _single_case_instr) {
	}

	// Single_case_instr
	node_case_instr(node_single_case_instr* _single_case_instr) {
	}

};

struct node_instr : public node {
	// KW_WHILE Expression KW_DO Instr
	// KW_IF Expression KW_THEN Instr %prec KW_IFX
	node_instr(node_keyword* _keyword1, node_expression* _expression, node_keyword* _keyword2, node_instr* _instr, int flag) {
	}

	// KW_REPEAT ListInstr KW_UNTIL Expression
	node_instr(node_keyword* _keyword1, node_list_instr* _list_instr, node_keyword* _keyword2, node_expression* _expression, int flag) {
	}

	// KW_FOR ForIdent OP_AFFECT Expression ForDirection Expression KW_DO Instr
	node_instr(node_keyword* _keyword1, node_for_ident* _for_ident, node_op* _op, node_expression* _expression1, node_for_direction* _for_direction, node_expression* _expression2, node_keyword* _keyword2, node_instr* _instr, int flag) {
	}

	
	// KW_IF Expression KW_THEN Instr KW_ELSE Instr
	node_instr(node_keyword* _keyword1, node_expression* _expression, node_keyword* _keyword2, node_instr* _instr1, node_keyword* _keyword3, node_instr* _instr2, int flag) {
	}

	// KW_CASE Expression KW_OF CaseInstr SEP_SCOL KW_END
	node_instr(node_keyword* _keyword1, node_expression* _expression, node_keyword* _keyword2, node_case_instr* _case_instr, node_sep* _sep, node_keyword* _keyword3, int flag) {
	}

	// LeftExpr OP_AFFECT Expression
	node_instr(node_left_expr* _left_expr, node_op* _op, node_expression* _expression, int flag) {
	}

	// Call
	node_instr(node_call* _call, int flag) {
	}

	// BlockCode
	node_instr(node_block_code* _block_code, int flag) {
	}

};


struct node_list_instr : public node {
	// ListInstr SEP_SCOL Instr
	node_list_instr(node_list_instr* _list_instr, node_sep* _sep, node_instr* _instr) {
	}

	// Instr
	node_list_instr(node_instr* _instr) {
	}

};


struct node_block_code : public node {
	// KW_BEGIN ListInstr KW_END
	node_block_code(node_keyword* _keyword1, node_list_instr* _list_instr, node_keyword* _keyword2) {
	}

	// KW_BEGIN ListInstr SEP_SCOL KW_END
	node_block_code(node_keyword* _keyword1, node_list_instr* _list_instr, node_sep* _sep, node_keyword* _keyword2) {
	}

	// KW_BEGIN KW_END
	node_block_code(node_keyword* _keyword1, node_keyword* _keyword2) {
	}

};


struct node_pointer_type : public node {
	// OP_PTR Type
	node_pointer_type(node_op* _op, node_type* _type) {
	}

};


struct node_record_field : public node {
	// ListIdent SEP_DOTS Type
	node_record_field(node_list_ident* _list_ident, node_sep* _sep, node_type* _type) {
	}

};


struct node_record_fields : public node {
	// RecordFields SEP_SCOL RecordField
	node_record_fields(node_record_fields* _record_fields, node_sep* _sep, node_record_field* _record_field) {
	}

	// RecordField
	node_record_fields(node_record_field* _record_field) {
	}

};


struct node_record_type : public node {
	// KW_RECORD RecordFields KW_END
	node_record_type(node_keyword* _keyword1, node_record_fields* _record_fields, node_keyword* _keyword2) {
	}

};


struct node_array_index : public node {
	// TOK_IDENT
	node_array_index(node_tok_ident* _tok_ident, int flag) {
	}

	// InterType
	node_array_index(node_inter_type* _inter_type, int flag) {
	}

};


struct node_list_array_index : public node {
	// ListArrayIndex SEP_COMMA ArrayIndex
	node_list_array_index(node_list_array_index* _list_array_index, node_sep* _sep, node_array_index* _array_index) {
	}

	// ArrayIndex
	node_list_array_index(node_array_index* _array_index) {
	}

};


struct node_array_type : public node {
	// KW_ARRAY SEP_CO ListArrayIndex SEP_CF KW_OF Type
	node_array_type(node_keyword* _keyword1, node_sep* _sep1, node_list_array_index* _list_array_index, node_sep* _sep2, node_keyword* _keyword2, node_type* _type) {
	}

};


struct node_ns_inter_base : public node {
	// TOK_IDENT
	node_ns_inter_base(node_tok_ident* _tok_ident, int flag) {
	}

	// TOK_INTEGER
	node_ns_inter_base(node_tok_integer* _tok_integer, int flag) {
	}

};


struct node_inter_base : public node {
	// NSInterBase
	node_inter_base(node_ns_inter_base* _ns_inter_base) {
	}

	// OP_SUB NSInterBase
	node_inter_base(node_op* _op, node_ns_inter_base* _ns_inter_base) {
	}

};


struct node_inter_type : public node {
	// InterBase SEP_DOTDOT InterBase
	node_inter_type(node_inter_base* _inter_base1, node_sep* _sep, node_inter_base* _inter_base2) {
	}

};


struct node_base_type : public node {
	// KW_INTEGER
	// KW_REAL
	// KW_BOOLEAN
	// KW_CHAR
	// KW_STRING
	node_base_type(node_keyword* _keyword, int flag) {
	}

};


struct node_user_type : public node {
	// InterType
	node_user_type(node_inter_type* _inter_type, int flag) {
	}

	// ArrayType
	node_user_type(node_array_type* _array_type, int flag) {
	}

	// RecordType
	node_user_type(node_record_type* _record_type, int flag) {
	}

	// PointerType
	node_user_type(node_pointer_type* _pointer_type, int flag) {
	}

};


struct node_type : public node {
	// UserType
	node_type(node_user_type* _user_type, int flag) {
	}

	// BaseType
	node_type(node_base_type* _base_type, int flag) {
	}

};


struct node_func_result : public node {
	// SEP_DOTS BaseType
	node_func_result(node_sep* _sep, node_base_type* _base_type) {
	}

};


struct node_func_ident : public node {
	// KW_FUNC TOK_IDENT
	node_func_ident(node_keyword* _keyword, node_tok_ident* _tok_ident) {
	}

};


struct node_func_header : public node {
	// FuncIdent FuncResult
	node_func_header(node_func_ident* _func_ident, node_func_result* _func_result) {
	}

	// FuncIdent FormalArgs FuncResult
	node_func_header(node_func_ident* _func_ident, node_formal_args* _formal_args, node_func_result* _func_result) {
	}

};


struct node_func_decl : public node {
	// FuncHeader SEP_SCOL Block
	node_func_decl(node_func_header* _func_header, node_sep* _sep, node_block* _block) {
	}

};


struct node_var_formal_arg : public node {
	// KW_VAR ListIdent SEP_DOTS BaseType
	node_var_formal_arg(node_keyword* _keyword, node_list_ident* _list_ident, node_sep* _sep, node_base_type* _base_type) {
	}

};


struct node_val_formal_arg : public node {
	// ListIdent SEP_DOTS BaseType
	node_val_formal_arg(node_list_ident* _list_ident, node_sep* _sep, node_base_type* _base_type) {
	}

};


struct node_formal_arg : public node {
	// ValFormalArg
	node_formal_arg(node_val_formal_arg* _val_formal_arg, int flag) {
	}

	// VarFormalArg
	node_formal_arg(node_var_formal_arg* _var_formal_arg, int flag) {
	}

};


struct node_list_formal_args : public node {
	// ListFormalArgs SEP_SCOL FormalArg
	node_list_formal_args(node_list_formal_args* _list_formal_args, node_sep* _sep, node_formal_arg* _formal_arg) {
	}

	// FormalArg
	node_list_formal_args(node_formal_arg* _formal_arg) {
	}

};


struct node_formal_args : public node {
	// SEP_PO ListFormalArgs SEP_PF
	node_formal_args(node_sep* _sep1, node_list_formal_args* _list_formal_args, node_sep* _sep2) {
	}

};


struct node_proc_ident : public node {
	// KW_PROC TOK_IDENT
	node_proc_ident(node_keyword* _keyword, node_tok_ident* _tok_ident) {
	}

};


struct node_proc_header : public node {
	// ProcIdent
	node_proc_header(node_proc_ident* _proc_ident) {
	}

	// ProcIdent FormalArgs
	node_proc_header(node_proc_ident* _proc_ident, node_formal_args* _formal_args) {
	}

};


struct node_proc_decl : public node {
	// ProcHeader SEP_SCOL Block
	node_proc_decl(node_proc_header* _proc_header, node_sep* _sep, node_block* _block) {
	}

};


struct node_decl_func : public node {
	// ProcDecl
	node_decl_func(node_proc_decl* _proc_decl, int flag) {
	}

	// FuncDecl
	node_decl_func(node_func_decl* _func_decl, int flag) {
	}

};


struct node_list_decl_func : public node {
	// ListDeclFunc SEP_SCOL DeclFunc
	node_list_decl_func(node_list_decl_func* _list_decl_func, node_sep* _sep, node_decl_func* _decl_func) {
	}

	// DeclFunc
	node_list_decl_func(node_decl_func* _decl_func) {
	}

};


struct node_block_decl_func : public node {
	// ListDeclFunc SEP_SCOL
	node_block_decl_func(node_list_decl_func* _list_decl_func, node_sep* _sep) {
	}

	node_block_decl_func() {
	}

};


struct node_list_ident : public node {
	// ListIdent SEP_COMMA TOK_IDENT
	node_list_ident(node_list_ident* _list_ident, node_sep* _sep, node_tok_ident* _tok_ident) {
	}

	// TOK_IDENT
	node_list_ident(node_tok_ident* _tok_ident) {
	}

};


struct node_decl_var : public node {
	// ListIdent SEP_DOTS Type SEP_SCOL
	node_decl_var(node_list_ident* _list_ident, node_sep* _sep1, node_type* _type, node_sep* _sep2) {
	}

};


struct node_list_decl_var : public node {
	// ListDeclVar DeclVar
	node_list_decl_var(node_list_decl_var* _list_decl_var, node_decl_var* _decl_var) {
	}

	// DeclVar
	node_list_decl_var(node_decl_var* _decl_var) {
	}

};


struct node_block_decl_var : public node {
	// KW_VAR ListDeclVar
	node_block_decl_var(node_keyword* _keyword, node_list_decl_var* _list_decl_var) {
	}

	node_block_decl_var() {
	}

};


struct node_decl_type : public node {
	// TOK_IDENT OP_EQ Type SEP_SCOL
	node_decl_type(node_tok_ident* _tok_ident, node_op* _op, node_type* _type, node_sep* _sep) {
	}

};


struct node_list_decl_type : public node {
	// ListDeclType DeclType
	node_list_decl_type(node_list_decl_type* _list_decl_type, node_decl_type* _decl_type) {
	}

	// DeclType
	node_list_decl_type(node_decl_type* _decl_type) {
	}

};


struct node_block_decl_type : public node {
	// KW_TYPE ListDeclType
	node_block_decl_type(node_keyword* _keyword, node_list_decl_type* _list_decl_type) {
	}

	node_block_decl_type() {
	}

};


struct node_decl_const : public node {
	// TOK_IDENT OP_EQ Expression SEP_SCOL
	node_decl_const(node_tok_ident* _tok_ident, node_op* _op, node_expression* _expression, node_sep* _sep) {
	}

};


struct node_list_decl_const : public node {
	// ListDeclConst DeclConst
	node_list_decl_const(node_list_decl_const* _list_decl_const, node_decl_const* _decl_const) {
	}

	// DeclConst
	node_list_decl_const(node_decl_const* _decl_const) {
	}

};


struct node_block_decl_const : public node {
	// KW_CONST ListDeclConst
	node_block_decl_const(node_keyword* _keyword, node_list_decl_const* _list_decl_const) {
	}

	// 
	node_block_decl_const() {
	}

};


struct node_block : public node {
	// BlockDeclConst BlockDeclType BlockDeclVar BlockDeclFunc BlockCode
	node_block(node_block_decl_const* _block_decl_const, node_block_decl_type* _block_decl_type, node_block_decl_var* _block_decl_var, node_block_decl_func* _block_decl_func, node_block_code* _block_code) {
	}

};


struct node_program_header : public node {
	// KW_PROGRAM TOK_IDENT
	node_program_header(node_keyword* _keyword, node_tok_ident* _tok_ident) {
	}

};


struct node_program : public node {
	// ProgramHeader SEP_SCOL Block SEP_DOT
	node_program(node_program_header* _program_header, node_sep* _sep1, node_block* _block, node_sep* _sep2) {
	}

};


#endif
