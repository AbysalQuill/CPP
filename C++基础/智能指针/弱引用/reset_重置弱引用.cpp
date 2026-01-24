#include <iostream>
#include <memory>
using namespace std;

int main(){
    shared_ptr<int> shared1=make_shared<int>(42);
    shared_ptr<int> shared2=make_shared<int>(99);
    
    weak_ptr<int> weak=shared1;
    cout<<"Initial - weak points to shared1"<<endl;
    cout<<"weak.use_count(): "<<weak.use_count()<<endl;
    
    // 重置weak_ptr
    weak.reset();
    cout<<"After reset - weak is empty"<<endl;
    cout<<"weak.use_count(): "<<weak.use_count()<<endl;
    
    // 指向另一个shared_ptr
    weak=shared2;
    cout<<"After assigning to shared2"<<endl;
    cout<<"weak.use_count(): "<<weak.use_count()<<endl;
    
    // 使用lock()验证它指向的是shared2
    if(auto locked=weak.lock()){
        cout<<"Locked value: "<<*locked<<endl;
    }
    
    // 重置所有shared_ptr
    shared1.reset();
    shared2.reset();
    cout<<"All shared_ptrs reset"<<endl;
    cout<<"weak.use_count() after all shared_ptrs destroyed: "<<weak.use_count()<<endl;
    
    if(weak.expired()){
        cout<<"weak is expired"<<endl;
    }
    
    return 0;
}