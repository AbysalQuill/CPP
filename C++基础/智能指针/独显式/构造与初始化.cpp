#include <iostream>
#include <memory>
using namespace std;
class MyClass{
public:
    int value;
    string name;
    MyClass(int v,string n):value(v),name(n){cout<<"MyClass "<<name<<"("<<value<<") created"<<endl;}
    ~MyClass(){cout<<"MyClass "<<name<<"("<<value<<") destroyed"<<endl;}
};
int main(){
    unique_ptr<int> ptr1(new int(42));
    cout<<"ptr1: "<<*ptr1<<endl;
    auto ptr2=make_unique<MyClass>(100,"TestObj");
    cout<<"ptr2->value: "<<ptr2->value<<", name: "<<ptr2->name<<endl;
    unique_ptr<int> ptr3=move(ptr1);
    cout<<"After move - ptr1 valid: "<<(bool)ptr1<<", ptr3: "<<*ptr3<<endl;
    unique_ptr<int[]>arr(new int[5]{1,2,3,4,5});
    cout<<"Array elements: ";
    for(int i=0;i<5;++i)cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}