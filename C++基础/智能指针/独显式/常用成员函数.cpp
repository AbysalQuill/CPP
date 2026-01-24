#include <iostream>
#include <memory>
using namespace std;

int main(){
    unique_ptr<int> ptr1=make_unique<int>(42);
    unique_ptr<int> ptr2;
    
    // get() - 获取底层指针
    cout<<"ptr1.get(): "<<ptr1.get()<<endl;
    cout<<"Value via get(): "<<*(ptr1.get())<<endl;
    
    // bool operator - 检查是否有效
    cout<<"ptr1 valid: "<<(bool)ptr1<<endl;
    cout<<"ptr2 valid: "<<(bool)ptr2<<endl;
    
    // operator* 和 operator->
    cout<<"Value via *ptr1: "<<*ptr1<<endl;
    
    // swap - 交换两个unique_ptr
    ptr2=make_unique<int>(99);
    cout<<"Before swap - ptr1: "<<*ptr1<<", ptr2: "<<*ptr2<<endl;
    ptr1.swap(ptr2);
    cout<<"After swap - ptr1: "<<*ptr1<<", ptr2: "<<*ptr2<<endl;
    
    return 0;
}