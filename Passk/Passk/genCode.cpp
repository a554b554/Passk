//
//  genCode.cpp
//  Passk
//
//  Created by DarkTango on 6/21/15.
//  Copyright (c) 2015 DarkTango. All rights reserved.
//

#include "node.h"
#include "common.h"
#include "genCode.h"
#include <fstream>
#include <iostream>
#include <map>
using namespace std;
FILE *output;
int Ltmpcount = 2;
int Lstrcount = 0;
static string reg[6]={"%%rdi","%%rsi","%rdx","%%rcx","%%r8","%%r9"};
//////////////////////////code generator////////////////////////
void emitProcStart(){
    fprintf(output, "\t.cfi_startproc\n");
}



void initEmit(){
    emitCodeHeader();
    output = fopen("out.asm", "a+");
}


void emitCodeHeader(){
    system("cat header.asm > out.asm");
    
}





void emitProcEnd(){
    fprintf(output, "\t.cfi_endproc\n");
}

void emitLibrary(){
    system("cat rtl.asm >> out.asm");
}

void emitCode(string instr, string op1, string op2){
    string ins = "\t"+instr+"\t"+op1+", "+op2+"\n";
    fprintf(output, ins.c_str());
}

void emitCode(string instr, string op){
    string ins = "\t"+instr+"\t"+op+"\n";
    fprintf(output, ins.c_str());
}

void emitCode(string instr){
    string ins = "\t"+instr+"\n";
    fprintf(output, ins.c_str());
}

void emitLabel(string labelname){
    string ins = labelname+":\n";
    fprintf(output, ins.c_str());
}

void alloc(Context& context){
    map<string,Symbol*>::iterator it;
    int offset = -8;
    for (it = context.tab->pool.begin(); it != context.tab->pool.end(); it++) {
        it->second->offset = offset;
        offset-=8;
    }
}

int inline getStackSize(int v_size){
    int i = 0;
    while (i < v_size) {
        i+=16;
    }
    return i;
}

void codeGeneration(Program* program){

    program->block->codeblock->tab->printSymbol();
    Context* context = new Context();
    context->tab = program->block->codeblock->tab;
    emitCode("pushq", "%%rbp");
    emitCode("movq", "%%rsp","%%rbp");
    alloc(*context);
    int size = getStackSize(context->tab->getSize());
    emitCode("subq", "$"+to_string(size), "%%rsp");
    program->block->codeblock->listinstr->genCode(*context);
    program->block->codeblock->genCode(*context);
    emitCode("leave");
    emitCode("retq");
    //emitProcEnd();
    
    fclose(output);
    delete context;
}
//////////////////////////////////////////////////////////////

void Program::codeGen(Context &context){
    block->codeblock->tab->printSymbol();
    context.tab = block->codeblock->tab;
    emitCode("pushq", "%%rbp");
    emitCode("movq", "%%rsp","%%rbp");
    alloc(context);
    int size = getStackSize(context.tab->getSize());
    emitCode("subq", "$"+to_string(size), "%%rsp");
    this->block->genCode(context);
    emitCode("leave");
    emitCode("retq");
    fclose(output);
}

void Block::genCode(Context &context){
    if (funcdecl!=NULL) {
        funcdecl->genCode(context);
    }
    codeblock->genCode(context);
}


ListInstr::ListInstr(vector<Instr*>& _instrs){
    for (int i = 0; i < _instrs.size(); i++) {
        instrs.push_back(_instrs[i]);
    }
}

ListInstr::ListInstr(){
    
}

void Instr::genCode(Context& context){
    printf("call instr genCode\n");
}

void AssignInstr::genCode(Context& context){
    printf("call assigninstr genCode\n");
    context.clearFlag();
   // emitCode("xorq", "%%rax", "%%rax");
    this->expr->genCode(context);
    Symbol* sb = context.tab->getSymbolbyName(tokenid);
    string op = to_string(sb->offset)+"(%%rbp)";
    emitCode("movq", "%%rax", op);
//    context.useRax = true;
}



void IfThenInstr::genCode(Context &context){
    context.clearFlag();
    string labelname = context.getlabel();
    expr->genCode(context);
    int use = context.currentuse();
    string rg = regToUse_32[use];
    emitCode("cmpl", "$0", rg);
    context.releaseReg(use);
    emitCode("je", labelname);
    then->genCode(context);
    emitLabel(labelname);
}

void IfThenElseInstr::genCode(Context &context){
    context.clearFlag();
    string label1 = context.getlabel();
    string label2 = context.getlabel();
    expr->genCode(context);
    int use = context.currentuse();
    string rg = regToUse_32[use];
    emitCode("cmpl", "$0", rg);
    context.releaseReg(use);
    emitCode("je", label1);
    then->genCode(context);
    emitCode("jmp", label2);
    emitLabel(label1);
    elseins->genCode(context);

    emitLabel(label2);
}

void MathExpr::genCode(Context &context){

    op1->genCode(context);
    string rg1 = regToUse_64[context.currentuse()];
    op2->genCode(context);
    string rg2 = regToUse_64[context.currentuse()];
    switch (op) {
        case EXPR_ADD:
            emitCode("addq", rg2, rg1);
            break;
        
        case EXPR_SUB:
            emitCode("subq", rg2, rg1);
            break;
            
        case EXPR_MUL:
            emitCode("imulq", rg2, rg1);
            break;
            
        case EXPR_DIV_INT:
            emitCode("idivq", rg1); // need modify
            break;
            
            
            
        default:
            break;
    }
    context.releaseReg(context.currentuse());
    printf("call math expr!\n");
}

void AtomExpr::genCode(Context &context){
//    string rg = "%%ecx";
//    if (context.useRax) {
//        rg = "%%eax";
//    }
//    emitCode("movl", "$"+to_string(this->v_int), rg);
//    printf("call atom expr!\n");
}

void Int_AtomExpr::genCode(Context &context){
    int toUse = context.nextuse();
    string rg = regToUse_64[toUse];
    context.setReg(toUse);
    emitCode("movq", "$"+to_string(val), rg);
}

void Bool_AtomExpr::genCode(Context &context){
    int toUse = context.nextuse();
    string rg = regToUse_64[toUse];
    context.setReg(toUse);
    int v = val;
    emitCode("movq", "$"+to_string(v), rg);
}

void Expr_AtomExpr::genCode(Context &context){
    
}

void Real_AtomExpr::genCode(Context &context){
    
}

bool AtomExpr::isAtomExpr(Expr *expr){
    AtomExpr tmp;
    return typeid(*expr)==typeid(tmp);
}


VarList::VarList(vector<string>& _ids){
    for (int i = 0; i < _ids.size(); i++) {
        ids.push_back(_ids[i]);
    }
}

VarList::VarList(){

}



void VarList::copyfrom(vector<string> &_ids){
    for (int i = 0; i < _ids.size(); i++) {
        ids.push_back(_ids[i]);
    }
}

void Expr::genCode(Context& context){
    
}


void CallInstr::genCode(Context &context){
    context.clearFlag();
    expr->genCode(context);
}


void FuncDecl::genCode(Context &context){
    ///
}




void CodeBlock::genCode(Context& context){
    listinstr->genCode(context);
}

void ListInstr::genCode(Context& context){
    for (int i = 0; i < instrs.size(); i++) {
        instrs[i]->genCode(context);
    }
}


void CallExpr::genCode(Context &context){
    printf("code generation for call:%s\n",this->funcName.c_str());
    for (int i = 0; i < paramsCount; i++) {
        params[i]->genCode(context);
        emitCode("movq", "%%rax", reg[i]);
    }
    emitCode("callq", "_"+funcName);
}

void VarExpr::genCode(Context &context){
    Symtab& tab = *context.tab;
    Symbol* sb = tab.getSymbolbyName(name);
    string offset = to_string(sb->offset);
    string rg = regToUse_64[context.nextuse()];
    context.setReg(context.nextuse());
    emitCode("movq", offset+"(%%rbp)", rg);
}


void CompExpr::genCode(Context &context){
    op1->genCode(context);
    int use1 = context.currentuse();
    string rg1 = regToUse_64[use1];
    op2->genCode(context);
    int use2 = context.currentuse();
    string rg2 = regToUse_64[use2];
    emitCode("cmpq", rg2, rg1);
    switch (op) {
        case EXPR_EQ:
            emitCode("sete", "%%bl");
            break;
        case EXPR_GT:
            emitCode("setg", "%%bl");
            break;
        case EXPR_GTE:
            emitCode("setge", "%%bl");
            break;
        case EXPR_LT:
            emitCode("setl", "%%bl");
            break;
        case EXPR_LTE:
            emitCode("setle", "%%bl");
            break;
        default:
            break;
    }

    emitCode("andb", "$1", "%%bl");
    context.releaseReg(use1);
    context.releaseReg(use2);
    int use = context.nextuse();
    string reg = regToUse_64[use];
    emitCode("xorq", reg, reg);
    emitCode("movzbq", "%%bl", reg);
 
    context.setReg(use);
    
}

void BoolExpr::genCode(Context &context){
    string rg2;
    op1->genCode(context);
    int use1 = context.currentuse();
    string rg1 = regToUse_64[use1];
    if (op2!=NULL) {
        op2->genCode(context);
    }
    switch (op) {
        case EXPR_AND:
            emitCode("andq", rg1, rg2);
            break;
        case EXPR_OR:
            emitCode("orq", rg1, rg2);
            break;
        case EXPR_XOR:
            emitCode("xorq", rg1, rg2);
            break;
        case EXPR_NOT:
            
        default:
            break;
    }
    
    
    
}

void RepeatInstr::genCode(Context &context){
    context.clearFlag();
    string labelname = context.getlabel();
    emitLabel(labelname);
    listinstr->genCode(context);
    expr->genCode(context);
    int use = context.currentuse();
    string rg = regToUse_32[use];
    emitCode("cmpl","$0", rg);
    emitCode("je", labelname);
}


void WhileInstr::genCode(Context &context){
    context.clearFlag();
    string label = context.getlabel();
    expr->genCode(context);
    int use = context.currentuse();
    string rg = regToUse_64[use];
    emitCode("cmpl", "$0", rg);
    emitCode("je", label);
    instr->genCode(context);
}

void BlockInstr::genCode(Context &context){
    context.clearFlag();
    block->genCode(context);
}




//////////////////////////////////////////////////////////////


void Context::clearFlag(){
    for (int i = 0; i < REG_SIZE; i++) {
        regFlag[i] = false;
    }
}

int Context::nextuse(){
    for (int i = 0; i < REG_SIZE; i++) {
        if (regFlag[i] == false) {
            return i;
        }
    }
    return -1;  // reg is full
}

int Context::currentuse(){
    return nextuse() - 1;
}

void Context::setReg(int i){
    regFlag[i] = true;
}

void Context::releaseReg(int i){
    regFlag[i] = false;
}

bool Context::inUse(int i){
    return regFlag[i];
}

string Context::getNext(){
    int use = nextuse();
    setReg(use);
    return regToUse_64[use];
}

string Context::getlabel(){
    string str = "LL"+to_string(labelCount);
    labelCount++;
    return str;
}










