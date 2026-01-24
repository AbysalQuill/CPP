#include <iostream>
#include <memory>
using namespace std;

struct CustomDeleter{
    void operator()(int* ptr){
        cout<<"Custom deleter freeing int: "<<*ptr<<endl;
        delete ptr;
    }
};

void simpleDeleter(int* ptr){
    cout<<"Simple deleter freeing int: "<<*ptr<<endl;
    delete ptr;
}

int main(){
    // 使用函数对象作为删除器
    shared_ptr<int> ptr1(new int(42), CustomDeleter());
    cout<<"ptr1 value: "<<*ptr1<<", count: "<<ptr1.use_count()<<endl;
    
    // 使用函数指针作为删除器
    shared_ptr<int> ptr2(new int(99), simpleDeleter);
    cout<<"ptr2 value: "<<*ptr2<<", count: "<<ptr2.use_count()<<endl;
    
    // 使用lambda作为删除器
    auto lambdaDel=[&](int* ptr){
        cout<<"Lambda deleter freeing int: "<<*ptr<<endl;
        delete ptr;
    };
    shared_ptr<int> ptr3(new int(150), lambdaDel);
    cout<<"ptr3 value: "<<*ptr3<<", count: "<<ptr3.use_count()<<endl;
    
    // 共享相同对象但使用相同删除器
    shared_ptr<int> ptr4=ptr1;
    cout<<"ptr4 shares with ptr1 - ptr1 count: "<<ptr1.use_count()<<endl;
    
    return 0;
}