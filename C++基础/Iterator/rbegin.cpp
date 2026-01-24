#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5};
    list<string>ls={"apple","banana","orange"};
    deque<char>dq={'a','b','c','d'};
    
    // 使用rbegin()获取反向迭代器
    cout<<"vector反向遍历(rbegin): ";
    for(auto it=v.rbegin();it!=v.rend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    cout<<"list反向遍历(rbegin): ";
    for(auto it=ls.rbegin();it!=ls.rend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    cout<<"deque反向遍历(rbegin): ";
    for(auto it=dq.rbegin();it!=dq.rend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    // rbegin()指向最后一个元素
    cout<<"vector rbegin(): "<<*v.rbegin()<<endl;      // 输出最后一个元素
    cout<<"list rbegin(): "<<*ls.rbegin()<<endl;      // 输出最后一个元素
    cout<<"deque rbegin(): "<<*dq.rbegin()<<endl;     // 输出最后一个元素
    
    // 修改反向迭代器指向的元素
    auto rit=v.rbegin();
    *rit=999;  // 修改最后一个元素
    cout<<"修改后vector最后一个元素: "<<v.back()<<endl;
    
    return 0;
}