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
        My_String( const My_String& other); 
        My_String( ifstream & in);
        My_String( int n);
        My_String(int length, char ch);
        My_String(const My_String& src, int start, int len);
        My_String(char ch);
        void show();
        // ~My_String(); 
};


#endif