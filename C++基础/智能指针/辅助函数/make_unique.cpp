#include <iostream>
#include <memory>
#include <string>
using namespace std;
class MyClass{
public:
    int a;string b;
    MyClass(int x,string str):a(x),b(str){cout<<"MyClass constructed: a="<<a<<", b="<<b<<endl;}
    ~MyClass(){cout<<"MyClass destroyed: a="<<a<<", b="<<b<<endl;}
};
int main(){
    auto ptr1=make_unique<int>(42);
    cout<<"ptr1: "<<*ptr1<<endl;
    auto ptr2=make_unique<MyClass>(100,"Hello");
    cout<<"ptr2: a="<<ptr2->a<<", b="<<ptr2->b<<endl;
    auto arr=make_unique<int[]>(5);
    for(int i=0;i<5;++i)arr[i]=i*10;
    cout<<"Array values: ";
    for(int i=0;i<5;++i)cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"make_unique is exception-safe and efficient"<<endl;
    return 0;
}