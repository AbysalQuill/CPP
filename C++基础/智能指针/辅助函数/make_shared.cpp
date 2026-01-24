#include <iostream>
#include <memory>
using namespace std;
class MyClass{
public:
    int a;string b;
    MyClass(int x,string str):a(x),b(str){cout<<"MyClass constructed: a="<<a<<", b="<<b<<endl;}
    ~MyClass(){cout<<"MyClass destroyed: a="<<a<<", b="<<b<<endl;}
};
int main(){
    auto ptr1=make_shared<int>(42);
    cout<<"ptr1: "<<*ptr1<<", count: "<<ptr1.use_count()<<endl;
    auto ptr2=make_shared<MyClass>(100,"World");
    cout<<"ptr2: a="<<ptr2->a<<", b="<<ptr2->b<<", count: "<<ptr2.use_count()<<endl;
    auto ptr3=make_shared<int[]>(5);
    cout<<"Array shared_ptr created"<<endl;
    auto ptr4=ptr2;
    cout<<"After sharing - ptr2 count: "<<ptr2.use_count()<<endl;
    cout<<"make_shared is more efficient than using new"<<endl;
    return 0;
}