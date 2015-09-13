#ifndef COMMON_H
#define COMMON_H
#include <string>
#include <vector>
using namespace std;

enum{
	TYPE_INT,
	TYPE_REAL,
	TYPE_BOOLEAN,
	TYPE_CHAR,
	TYPE_STR,
	TYPE_FUNC,
	TYPE_PROC
};

static void printvec(const vector<string>& vec){
	for(int i = 0; i < vec.size(); i++){
		printf("%s\n", vec[i].c_str());
	}
}

// static int typetoint(string tpname){
// 	return 0;
// }

#endif