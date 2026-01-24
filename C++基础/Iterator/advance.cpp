#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    list<string>ls={"apple","banana","orange","pear","grape"};
    deque<char>dq={'a','b','c','d','e','f'};
    
    // 使用advance()移动迭代器
    auto it=v.begin();
    cout<<"初始位置: "<<*it<<endl;  // 输出1
    
    advance(it,3);  // 将迭代器向前移动3个位置
    cout<<"advance(it,3)后: "<<*it<<endl;  // 输出4
    
    advance(it,-2); // 将迭代器向后移动2个位置
    cout<<"advance(it,-2)后: "<<*it<<endl; // 输出2
    
    // 在list中使用advance
    auto lit=ls.begin();
    cout<<"list初始位置: "<<*lit<<endl;  // 输出apple
    
    advance(lit,2); // 将迭代器向前移动2个位置
    cout<<"advance(lit,2)后: "<<*lit<<endl;  // 输出orange
    
    // 在deque中使用advance
    auto dit=dq.begin();
    cout<<"deque初始位置: "<<*dit<<endl;  // 输出a
    
    advance(dit,4); // 将迭代器向前移动4个位置
    cout<<"advance(dit,4)后: "<<*dit<<endl;  // 输出e
    
    return 0;
}