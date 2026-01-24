#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    list<string>ls={"apple","banana","orange","pear","grape"};
    deque<char>dq={'a','b','c','d','e','f'};
    
    // 使用prev()获取前一个位置的迭代器
    auto it=v.end();  // 指向最后一个元素之后
    cout<<"初始end()位置: "<<*(prev(it))<<endl;  // 输出10 (最后一个元素)
    
    auto prev_it=prev(it);  // 获取前一个位置的迭代器
    cout<<"prev(end()): "<<*(prev(prev_it))<<endl;  // 输出9 (倒数第二个元素)
    
    auto prev3_it=prev(it,3);  // 获取向后移动3个位置的迭代器
    cout<<"prev(end(),3): "<<*prev3_it<<endl;  // 输出8
    
    // 在list中使用prev
    auto lit=ls.end();
    cout<<"list end()位置: "<<*(prev(lit))<<endl;  // 输出grape (最后一个元素)
    
    auto prev_lit=prev(lit,2);  // 获取向后移动2个位置的迭代器
    cout<<"prev(end(),2): "<<*prev_lit<<endl;  // 输出orange
    
    // 在deque中使用prev
    auto dit=dq.end();
    cout<<"deque end()位置: "<<*(prev(dit))<<endl;  // 输出f (最后一个元素)
    
    auto prev_dit=prev(dit,4);  // 获取向后移动4个位置的迭代器
    cout<<"prev(end(),4): "<<*prev_dit<<endl;  // 输出c
    
    // prev不会改变原迭代器的位置
    cout<<"原迭代器end()位置仍然为: "<<*(prev(lit))<<endl;  // 输出grape
    
    return 0;
}