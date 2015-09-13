//
//  genCode.h
//  Passk
//
//  Created by DarkTango on 6/22/15.
//  Copyright (c) 2015 DarkTango. All rights reserved.
//

#ifndef Passk_genCode_h
#define Passk_genCode_h
#include "node.h"
#include <string>
void codeGeneration(Program* program);

void emitCodeHeader();

void initEmit();

void emitProcEnd();

void emitCode(string intsr, string op1, string op2);

void emitLibrary();

void emitLabel(string labelname);

//string regToUse_32[7]={"%%eax","%%edx","%%ecx","%%r8","%%r9","%%r10","%%r11"};

#endif
