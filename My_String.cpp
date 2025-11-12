#include "My_String.h"
#include <iostream>
#include<fstream>
#include<cmath>
#include <cstring>
using namespace std;

My_String::My_String(){
    str = new char[1];
    str[0] = '\0';
    length = 0 ;
}

My_String::My_String(const char* s) {
    length=0;
    for (int i = 0; s[i]!='\0'; i++)
    {
        length++;
    }
    length++;
    str = new char[length];
    for (int i = 0; i <length-1; i++)
    {
        str[i]=s[i];
    }
    str[length-1]='\0';
    
}
My_String::My_String(const My_String& s){
    length=s.length;
    str=new char[length];
     for (int i = 0; i < length-1; i++)
    {
        str[i]=s.str[i];
    }
    str[length-1]='\0';
}
My_String::My_String( ifstream& in){
    char s;
    length=0;
    while (in>>s)
    {
       length++;
    }
    length++;
    str=new char[length];
    in.clear();  
    in.seekg(0);
    for (int i = 0; i < length-1; i++)
    {
        in>>str[i];
    }
    str[length-1]='\0';
}
     void My_String::show(){
        cout<<length<<endl;
       cout<<str<<endl;

}

My_String::My_String(int n){
    if (n == 0) {
        length = 2;           
        str = new char[length];
        str[0] = '0';
        str[1] = '\0';
        return;
    }
      bool isNegative = false;
    if (n < 0) {
        isNegative = true;
        n = -n;
    }
int size=log10(n)+1;
length = size + 1 + (isNegative ? 1 : 0);
length++;
str=new char[length];
int temp[size];
int j=0;
while (n)
{
   int num=n%10;
   temp[j++] = num;
   n/=10;
}

int k=0;
 if (isNegative)
        str[k++] = '-';
for (int i = j - 1; i >= 0; i--) {
        str[k++] = temp[i] + '0';
    }

    str[k] = '\0';

}
My_String::My_String(int length, char ch){
    length++;
    str=new char[length];
    for (int i = 0; i <length-1; i++)
    {
        str[i]=ch;
    }
    str[length-1]='\0';
    
}

My_String::My_String(const My_String& src, int start, int len) {
    if (src.length == 0 || len <= 0) {
        length = 1;
        str = new char[1];
        str[0] = '\0';
        return;
    }

    if (start < 0) start = 0;
    if (start >= src.length) start = src.length - 1;
    if (len > src.length - start)
        len = src.length - start;

    length = len + 1;
    str = new char[length];

    for (int i = 0; i < len; i++) {
        str[i] = src.str[start + i];
    }
    str[len] = '\0';
}

My_String::My_String(char ch){
    length=2;
    str=new char[length];
    str[0]=ch;
    str[1]='\0';
}


