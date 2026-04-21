#include<iostream>
using namespace std;
#include<string>//使用C++风格字符串时，要加该头文件
//#include <bits/stdc++.h> //万能头文件

int main(){
    //ASCLL码，字符型
    char ch='a';
    char sh='A';
    cout<<"A:"<<(int)sh<<endl;
    cout<<"a:"<<(int)ch<<endl;
    
    //转义字符\n和\t的使用
    cout<<"你好\n你好吗\t好的";
   
    //字符串的书写
    //C风格
    char str1[]="hello word";
    printf(str1);
    //C++风格
    string str2="hello word";
    return 0;
}
