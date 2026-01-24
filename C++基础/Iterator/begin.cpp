#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5};
    list<string>ls={"apple","banana","orange"};
    deque<char>dq={'a','b','c','d'};
    
    cout<<"vector begin(): "<<*v.begin()<<endl;      // 输出vector的第一个元素
    cout<<"list begin(): "<<*ls.begin()<<endl;      // 输出list的第一个元素
    cout<<"deque begin(): "<<*dq.begin()<<endl;     // 输出deque的第一个元素
    
    // 使用begin()初始化迭代器
    auto it=v.begin();
    cout<<"通过迭代器访问第一个元素: "<<*it<<endl;
    
    // 修改第一个元素
    *it=100;
    cout<<"修改后vector首元素: "<<v[0]<<endl;       // 输出修改后的首元素
    
    return 0;
}