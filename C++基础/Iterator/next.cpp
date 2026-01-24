#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <iterator>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    list<string>ls={"apple","banana","orange","pear","grape"};
    deque<char>dq={'a','b','c','d','e','f'};
    
    // 使用next()获取下一个位置的迭代器
    auto it=v.begin();
    cout<<"当前位置: "<<*it<<endl;  // 输出1
    
    auto next_it=next(it);  // 获取下一个位置的迭代器
    cout<<"next(it): "<<*next_it<<endl;  // 输出2
    
    auto next3_it=next(it,3);  // 获取向前移动3个位置的迭代器
    cout<<"next(it,3): "<<*next3_it<<endl;  // 输出4
    
    // 在list中使用next
    auto lit=ls.begin();
    cout<<"list当前位置: "<<*lit<<endl;  // 输出apple
    
    auto next_lit=next(lit,2);  // 获取向前移动2个位置的迭代器
    cout<<"next(lit,2): "<<*next_lit<<endl;  // 输出orange
    
    // 在deque中使用next
    auto dit=dq.begin();
    cout<<"deque当前位置: "<<*dit<<endl;  // 输出a
    
    auto next_dit=next(dit,4);  // 获取向前移动4个位置的迭代器
    cout<<"next(dit,4): "<<*next_dit<<endl;  // 输出e
    
    // next不会改变原迭代器的位置
    cout<<"原迭代器it位置仍然为: "<<*it<<endl;  // 输出1
    
    return 0;
}