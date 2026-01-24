#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5};
    list<string>ls={"apple","banana","orange"};
    deque<char>dq={'a','b','c','d'};
    
    // 使用rend()进行反向遍历
    cout<<"使用rend()反向遍历vector: ";
    for(auto it=v.rbegin();it!=v.rend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    cout<<"使用rend()反向遍历list: ";
    for(auto it=ls.rbegin();it!=ls.rend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    cout<<"使用rend()反向遍历deque: ";
    for(auto it=dq.rbegin();it!=dq.rend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    // rend()指向第一个元素之前的位置
    cout<<"vector rend()-1指向: "<<*(--v.rend())<<endl;  // 输出第一个元素
    
    // rend vs rbegin
    cout<<"反向迭代器距离计算:"<<endl;
    cout<<"v.rend()-v.rbegin()="<<v.rend()-v.rbegin()<<endl;  // 输出容器大小
    
    return 0;
}