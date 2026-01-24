#include <iostream>
#include <memory>
using namespace std;

int main(){
    shared_ptr<int> ptr1=make_shared<int>(42);
    shared_ptr<int> ptr2=ptr1;
    shared_ptr<int> ptr3;
    
    // get() - 获取底层指针
    cout<<"ptr1.get(): "<<ptr1.get()<<endl;
    cout<<"Value via get(): "<<*(ptr1.get())<<endl;
    
    // use_count() - 获取引用计数
    cout<<"Initial use_count: "<<ptr1.use_count()<<endl;
    
    // unique() - 检查是否唯一拥有
    cout<<"Is ptr3 unique? "<<(ptr3.unique()?"Yes":"No")<<endl;
    cout<<"Is ptr1 unique? "<<(ptr1.unique()?"Yes":"No")<<endl;
    
    // bool operator - 检查是否有效
    cout<<"ptr1 valid: "<<(bool)ptr1<<endl;
    cout<<"ptr3 valid: "<<(bool)ptr3<<endl;
    
    // operator* 和 operator->
    cout<<"Value via *ptr1: "<<*ptr1<<endl;
    
    // swap - 交换两个shared_ptr
    ptr3=make_shared<int>(99);
    cout<<"Before swap - ptr1: "<<*ptr1<<"("<<ptr1.use_count()<<"), ptr3: "<<*ptr3<<"("<<ptr3.use_count()<<")"<<endl;
    ptr1.swap(ptr3);
    cout<<"After swap - ptr1: "<<*ptr1<<"("<<ptr1.use_count()<<"), ptr3: "<<*ptr3<<"("<<ptr3.use_count()<<")"<<endl;
    
    return 0;
}