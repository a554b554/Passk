//
//  common.h
//  Passk
//
//  Created by DarkTango on 6/21/15.
//  Copyright (c) 2015 DarkTango. All rights reserved.
//

#ifndef Passk_common_h
#define Passk_common_h

#include <vector>
#include <string>
using namespace std;

enum{
    TYPE_INT,
    TYPE_REAL,
    TYPE_BOOLEAN,
    TYPE_CHAR,
    TYPE_STR,
    TYPE_FUNC,
    TYPE_PROC,
    TYPE_UNDEFINED
};

static void printvec(const vector<string>& vec){
    for(int i = 0; i < vec.size(); i++){
        printf("%s\n", vec[i].c_str());
    }
}

static void toString(int a){
    
}

// static int typetoint(string tpname){
// 	return 0;
// }


#endif
