#include <iostream>
#include <memory>
#include <thread>
#include <vector>
using namespace std;

int main(){
    shared_ptr<int> ptr=make_shared<int>(42);
    cout<<"Initial value: "<<*ptr<<", count: "<<ptr.use_count()<<endl;
    
    // 创建多个线程访问shared_ptr
    vector<thread> threads;
    
    for(int i=0;i<5;++i){
        threads.push_back(thread([&ptr](){
            // 注意：共享引用计数是原子操作，安全的
            cout<<"Thread "<<this_thread::get_id()<<" - count: "<<ptr.use_count()<<", value: "<<*ptr<<endl;
            
            // 但访问指向的对象不是线程安全的，需要同步
            // 这里只是读取，相对安全
        }));
    }
    
    for(auto& t:threads){
        t.join();
    }
    
    cout<<"After threads, final count: "<<ptr.use_count()<<endl;
    
    // 注意：虽然引用计数的操作是线程安全的，
    // 但指向的对象本身不是线程安全的
    // 修改共享对象需要额外的同步机制
    
    return 0;
}