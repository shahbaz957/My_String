#include "My_String.h"
#include <iostream>
#include <cstring>
using namespace std;

My_String::My_String(){
    str = new char[1];
    str[0] = '\0';
    length = 0 ;
}

My_String::My_String(const char* s) {
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
}
