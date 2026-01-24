#include <iostream>
#include <memory>
using namespace std;

class Resource{
public:
    Resource(){cout<<"Resource acquired"<<endl;}
    ~Resource(){cout<<"Resource released"<<endl;}
    void use(){cout<<"Using resource"<<endl;}
};

void shareResource(shared_ptr<Resource> ptr){
    cout<<"Inside function, use_count: "<<ptr.use_count()<<endl;
    ptr->use();
}

int main(){
    shared_ptr<Resource> ptr1=make_shared<Resource>();
    cout<<"ptr1 created, use_count: "<<ptr1.use_count()<<endl;
    
    // 共享所有权给另一个shared_ptr
    shared_ptr<Resource> ptr2=ptr1;
    cout<<"After sharing, ptr1 use_count: "<<ptr1.use_count()<<", ptr2 use_count: "<<ptr2.use_count()<<endl;
    
    // 传递给函数，增加引用计数
    shareResource(ptr1);
    cout<<"After function call, use_count: "<<ptr1.use_count()<<endl;
    
    // 销毁一个shared_ptr，资源不会被释放
    ptr2.reset();
    cout<<"After ptr2.reset(), use_count: "<<ptr1.use_count()<<endl;
    
    // 当最后一个shared_ptr销毁时，资源才会被释放
    return 0; // ptr1在此处销毁，资源被释放
}