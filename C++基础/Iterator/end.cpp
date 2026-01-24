#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5};
    list<string>ls={"apple","banana","orange"};
    deque<char>dq={'a','b','c','d'};
    
    // 使用end()进行范围遍历
    cout<<"使用end()遍历vector:"<<endl;
    for(auto it=v.begin();it!=v.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    cout<<"使用end()遍历list:"<<endl;
    for(auto it=ls.begin();it!=ls.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    cout<<"使用end()遍历deque:"<<endl;
    for(auto it=dq.begin();it!=dq.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    // end()指向最后一个元素之后的位置
    cout<<"vector的end()-1指向: "<<*(--v.end())<<endl;  // 输出最后一个元素
    
    return 0;
}