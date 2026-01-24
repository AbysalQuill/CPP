#include <iostream>
#include <memory>
using namespace std;

int main(){
    shared_ptr<int> shared=make_shared<int>(42);
    weak_ptr<int> weak=shared;
    
    cout<<"Original shared pointer: "<<*shared<<endl;
    cout<<"Weak pointer use_count: "<<weak.use_count()<<endl;
    
    // 使用lock()获取shared_ptr
    shared_ptr<int> locked=weak.lock();
    if(locked){
        cout<<"Lock successful: "<<*locked<<endl;
    }else{
        cout<<"Lock failed - object was destroyed"<<endl;
    }
    
    // 在有效的shared_ptr存在时lock()
    cout<<"Testing lock while object is alive:"<<endl;
    auto temp=weak.lock();
    if(temp){
        cout<<"Got shared_ptr from weak: "<<*temp<<", count: "<<temp.use_count()<<endl;
    }
    
    // 释放原始shared_ptr
    shared.reset();
    cout<<"Original shared reset"<<endl;
    
    // 尝试lock() - 应该失败
    auto locked2=weak.lock();
    if(locked2){
        cout<<"Lock successful: "<<*locked2<<endl;
    }else{
        cout<<"Lock failed - object was destroyed"<<endl;
    }
    
    cout<<"weak.use_count() after original destroyed: "<<weak.use_count()<<endl;
    
    return 0;
}