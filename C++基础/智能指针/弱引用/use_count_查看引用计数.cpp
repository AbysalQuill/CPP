#include <iostream>
#include <memory>
using namespace std;

int main(){
    shared_ptr<int> shared1=make_shared<int>(42);
    cout<<"Created first shared_ptr, count: "<<shared1.use_count()<<endl;
    
    shared_ptr<int> shared2=shared1;  // 增加引用计数
    cout<<"Copied shared_ptr, count: "<<shared1.use_count()<<endl;
    
    // 创建weak_ptr
    weak_ptr<int> weak=shared1;
    cout<<"Created weak_ptr, shared count still: "<<shared1.use_count()<<endl;
    cout<<"Weak use_count (number of shared_ptrs): "<<weak.use_count()<<endl;
    
    shared_ptr<int> shared3=shared1;  // 再增加一个引用
    cout<<"Added third shared_ptr, shared count: "<<shared1.use_count()<<endl;
    cout<<"Weak use_count now: "<<weak.use_count()<<endl;
    
    // 释放一个shared_ptr
    shared2.reset();
    cout<<"Reset one shared_ptr, shared count: "<<shared1.use_count()<<endl;
    cout<<"Weak use_count now: "<<weak.use_count()<<endl;
    
    // 释放所有shared_ptr
    shared1.reset();
    shared3.reset();
    cout<<"Reset remaining shared_ptrs"<<endl;
    cout<<"Weak use_count after all shared_ptrs gone: "<<weak.use_count()<<endl;
    
    return 0;
}