#########################################################################
# File Name: compile.sh
# Author: DT
# mail: wangliwu@zju.edu.cn
# Created Time: Sun Jun 21 13:41:54 2015
#########################################################################
#!/bin/bash
bison -d -o parser.cpp parser.y
lex -o tokens.cpp tokens.l
echo '#include"node.h"' > ap.cpp
cat ap.cpp parser.hpp > tmp.hpp
cat tmp.hpp > parser.hpp
rm ap.cpp tmp.hpp
