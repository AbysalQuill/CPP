#include <iostream>
#include <memory>
using namespace std;

int main(){
    // 创建第一个shared_ptr
    shared_ptr<int> ptr1=make_shared<int>(42);
    cout<<"ptr1 created, use_count: "<<ptr1.use_count()<<endl;
    
    // 拷贝构造增加引用计数
    shared_ptr<int> ptr2=ptr1;
    cout<<"After copy construction, use_count: "<<ptr1.use_count()<<endl;
    
    // 再次拷贝
    shared_ptr<int> ptr3(ptr1);
    cout<<"After another copy, use_count: "<<ptr1.use_count()<<endl;
    
    // 赋值操作也增加引用计数
    shared_ptr<int> ptr4;
    ptr4=ptr1;
    cout<<"After assignment, use_count: "<<ptr1.use_count()<<endl;
    
    // 销毁一个shared_ptr，计数减少
    ptr4.reset();
    cout<<"After ptr4.reset(), use_count: "<<ptr1.use_count()<<endl;
    
    // 局部作用域演示
    {
        shared_ptr<int> ptr5=ptr1;
        cout<<"In scope, use_count: "<<ptr1.use_count()<<endl;
    } // ptr5销毁，计数减少
    cout<<"After scope, use_count: "<<ptr1.use_count()<<endl;
    
    return 0;
}