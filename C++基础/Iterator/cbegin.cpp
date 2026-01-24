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
    
    // 普通容器的cbegin() - 返回常量迭代器
    cout<<"vector cbegin(): "<<*v.cbegin()<<endl;
    
    // 常量容器的cbegin() - 返回常量迭代器
    cout<<"const vector cbegin(): "<<*cv.cbegin()<<endl;
    
    // 遍历使用cbegin和cend - 不可修改元素
    cout<<"使用cbegin和cend遍历const vector:"<<endl;
    for(auto it=cv.cbegin();it!=cv.cend();++it){
        cout<<*it<<" ";  // 可以读取但不能修改
    }
    cout<<endl;
    
    // 对比普通begin和cbegin
    auto it1=v.begin();   // 普通迭代器
    auto it2=v.cbegin();  // 常量迭代器
    cout<<"begin()指向: "<<*it1<<endl;
    cout<<"cbegin()指向: "<<*it2<<endl;
    
    // 尝试修改begin()指向的值是允许的，但修改cbegin()指向的值是不允许的
    *it1=999;  // 正确
    cout<<"修改后vector[0]: "<<v[0]<<endl;
    
    return 0;
}