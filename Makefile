all: pasc

OBJS = parser.o main.o tokens.o

clean:
	$(RM) -rf parser.cpp parser.hpp pasc tokens.cpp $(OBJS)
 
parser.cpp: parser.y
	bison -d -o $@ $^

parser.hpp: parser.cpp

tokens.cpp: tokens.l parser.hpp
	flex -o $@ $^

%.o: %.cpp
	g++ -o $@ $^

pasc: $(OBJS)
	g++ -o $@ $(OBJS)
