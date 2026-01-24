#include <iostream>
#include <memory>
using namespace std;

class Data{
public:
    int val;
    Data(int x):val(x){cout<<"Data "<<val<<" created"<<endl;}
    ~Data(){cout<<"Data "<<val<<" destroyed"<<endl;}
};

int main(){
    shared_ptr<Data> ptr1=make_shared<Data>(10);
    cout<<"ptr1 created, val="<<ptr1->val<<", count="<<ptr1.use_count()<<endl;
    
    // 拷贝构造
    shared_ptr<Data> ptr2(ptr1);
    cout<<"After copy construction - ptr1 count="<<ptr1.use_count()<<", ptr2 count="<<ptr2.use_count()<<endl;
    
    // 赋值操作
    shared_ptr<Data> ptr3=make_shared<Data>(20);
    cout<<"ptr3 created with val="<<ptr3->val<<", count="<<ptr3.use_count()<<endl;
    
    ptr3=ptr1;  // ptr3赋值为ptr1，原来的Data(20)引用计数减1
    cout<<"After assignment - ptr1 count="<<ptr1.use_count()<<", ptr3 count="<<ptr3.use_count()<<endl;
    cout<<"Now ptr3 val="<<ptr3->val<<endl;
    
    // 多个shared_ptr共享同一对象
    shared_ptr<Data> ptrs[5];
    for(int i=0;i<5;++i){
        ptrs[i]=ptr1;  // 全部指向同一个对象
        cout<<"ptrs["<<i<<"] assigned, total count="<<ptr1.use_count()<<endl;
    }
    
    return 0;
}