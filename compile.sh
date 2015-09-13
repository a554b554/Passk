#########################################################################
# File Name: compile.sh
# Author: DT
# mail: wangliwu@zju.edu.cn
# Created Time: Sun Jun 21 13:41:54 2015
#########################################################################
#!/bin/bash
bison -d -o parser.cpp parser.y
lex -o tokens.cpp tokens.l

