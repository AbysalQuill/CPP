#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int>lst;//创建一个空列表
    list<int>lst2={1,2,3,4,5};//创建一个列表，列表元素为1,2,3,4,5
    list<int>lst3(lst2);//创建一个列表，列表元素为lst2
    list<int>lst4(5,10);//创建一个列表，列表长度为5，列表元素为10
}