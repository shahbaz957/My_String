#ifndef STRING_H
#define STRING_H

#include <iostream>
using namespace std;

class My_String{
    char* str;
    int length;
    public : 
        My_String(); 
        My_String(const char* s); 
        My_String(const My_String& other); 
        ~My_String(); 
};


#endif