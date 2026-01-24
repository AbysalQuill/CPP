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
    
    // 使用crbegin()获取常量反向迭代器
    cout<<"vector crbegin(): "<<*v.crbegin()<<endl;      // 输出最后一个元素
    
    // 常量容器的crbegin()
    cout<<"const vector crbegin(): "<<*cv.crbegin()<<endl;  // 输出最后一个元素
    
    // 使用crbegin和crend进行反向遍历
    cout<<"使用crbegin和crend反向遍历const vector: ";
    for(auto it=cv.crbegin();it!=cv.crend();++it){
        cout<<*it<<" ";  // 可以读取但不能修改
    }
    cout<<endl;
    
    // 对比rbegin和crbegin
    auto rit=v.rbegin();   // 普通反向迭代器
    auto crit=v.crbegin(); // 常量反向迭代器
    cout<<"rbegin()指向: "<<*rit<<endl;
    cout<<"crbegin()指向: "<<*crit<<endl;
    
    // 尝试修改rbegin()指向的值是允许的，但修改crbegin()指向的值需要相应容器不是常量
    *rit=888;  // 正确
    cout<<"修改后vector最后一个元素: "<<v.back()<<endl;
    
    return 0;
}