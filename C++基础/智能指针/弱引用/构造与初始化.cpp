#include <iostream>
#include <memory>
using namespace std;

int main(){
    shared_ptr<int> shared=make_shared<int>(42);
    cout<<"Shared pointer created: "<<*shared<<", count: "<<shared.use_count()<<endl;
    
    // 从shared_ptr构造weak_ptr
    weak_ptr<int> weak=shared;
    cout<<"Weak pointer created from shared, shared count: "<<shared.use_count()<<endl;
    cout<<"Weak pointer use_count: "<<weak.use_count()<<endl;
    
    // weak_ptr不增加引用计数
    shared_ptr<int> another_shared=shared;
    cout<<"Another shared added, count: "<<shared.use_count()<<endl;
    
    weak_ptr<int> weak2=another_shared;
    cout<<"Second weak created, shared count still: "<<shared.use_count()<<endl;
    
    // 从另一个weak_ptr构造
    weak_ptr<int> weak3=weak2;
    cout<<"Third weak from second, shared count still: "<<shared.use_count()<<endl;
    
    return 0;
}