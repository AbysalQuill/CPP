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
    
    // 使用cend()进行遍历 - 返回常量迭代器
    cout<<"使用cbegin和cend遍历vector:"<<endl;
    for(auto it=v.cbegin();it!=v.cend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    // 使用cend()遍历常量容器
    cout<<"使用cbegin和cend遍历const vector:"<<endl;
    for(auto it=cv.cbegin();it!=cv.cend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    // cend()指向最后一个元素之后的位置
    cout<<"vector的cend()-1指向: "<<*(--v.cend())<<endl;  // 输出最后一个元素
    
    // cend vs end
    cout<<"cend()和end()对比:"<<endl;
    cout<<"v.end()-v.begin()="<<v.end()-v.begin()<<endl;      // 可以做算术运算
    cout<<"v.cend()-v.cbegin()="<<v.cend()-v.cbegin()<<endl;  // 也可以做算术运算
    
    return 0;
}