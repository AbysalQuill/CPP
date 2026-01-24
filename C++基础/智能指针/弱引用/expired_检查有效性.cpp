#include <iostream>
#include <memory>
using namespace std;

int main(){
    shared_ptr<int> shared=make_shared<int>(42);
    weak_ptr<int> weak=shared;
    
    cout<<"Checking if weak pointer is valid..."<<endl;
    if(!weak.expired()){
        cout<<"Weak pointer is valid, value: "<<*weak.lock()<<endl;
    }else{
        cout<<"Weak pointer is expired"<<endl;
    }
    
    // 释放原始shared_ptr
    shared.reset();
    cout<<"Original shared pointer reset"<<endl;
    
    // 检查weak_ptr是否过期
    if(!weak.expired()){
        cout<<"Weak pointer is still valid"<<endl;
    }else{
        cout<<"Weak pointer is expired - object was destroyed"<<endl;
    }
    
    // 尝试lock()也会失败
    auto locked=weak.lock();
    if(locked){
        cout<<"Lock succeeded"<<endl;
    }else{
        cout<<"Lock failed - confirming object is destroyed"<<endl;
    }
    
    return 0;
}