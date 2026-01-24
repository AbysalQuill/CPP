#include <iostream>
#include <memory>
using namespace std;

int main(){
    unique_ptr<int> ptr=make_unique<int>(42);
    cout<<"Initial value: "<<*ptr<<endl;
    
    // 使用reset释放当前资源并获得新资源
    ptr.reset(new int(100));
    cout<<"After reset: "<<*ptr<<endl;
    
    // 使用reset释放资源
    ptr.reset(); // 释放资源，现在ptr为空
    cout<<"After reset to null: "<<(bool)ptr<<endl;
    
    // 使用release释放资源但保留原始指针
    unique_ptr<int> ptr2(new int(200));
    int* rawPtr=ptr2.release(); // ptr2放弃所有权
    cout<<"Value from raw pointer: "<<*rawPtr<<endl;
    cout<<"ptr2 valid: "<<(bool)ptr2<<endl;
    
    // 清理rawPtr
    delete rawPtr;
    
    return 0;
}