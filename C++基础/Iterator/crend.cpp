#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5};
    const vector<int>cv={10,20,30,40,50};  // 常量vector
    list<string>ls={"apple","banana","orange"};
    deque<char>dq={'a','b','c','d'};
    
    // 使用crend()进行反向遍历
    cout<<"使用crbegin和crend反向遍历vector: ";
    for(auto it=v.crbegin();it!=v.crend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    cout<<"使用crbegin和crend反向遍历const vector: ";
    for(auto it=cv.crbegin();it!=cv.crend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    // crend指向第一个元素之前的位置
    cout<<"vector的crend()-1指向: "<<*(--v.crend())<<endl;  // 输出第一个元素
    
    // crend vs rend
    cout<<"crend()和rend()对比:"<<endl;
    cout<<"v.crend()-v.crbegin()="<<v.crend()-v.crbegin()<<endl;  // 可以做算术运算
    cout<<"v.rend()-v.rbegin()="<<v.rend()-v.rbegin()<<endl;      // 可以做算术运算
    
    return 0;
}