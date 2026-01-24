#include <iostream>
#include <memory>
using namespace std;
class Resource{
public:
    int id;string desc;
    Resource(int i,string d):id(i),desc(d){cout<<"Resource "<<desc<<"("<<id<<") created"<<endl;}
    ~Resource(){cout<<"Resource "<<desc<<"("<<id<<") destroyed"<<endl;}
};
int main(){
    shared_ptr<int> ptr1(new int(42));
    cout<<"ptr1: "<<*ptr1<<", count: "<<ptr1.use_count()<<endl;
    auto ptr2=make_shared<Resource>(100,"TestData");
    cout<<"ptr2: id="<<ptr2->id<<", desc="<<ptr2->desc<<", count: "<<ptr2.use_count()<<endl;
    shared_ptr<int> ptr3=ptr1;
    cout<<"After sharing - ptr1 count: "<<ptr1.use_count()<<", ptr3 count: "<<ptr3.use_count()<<endl;
    unique_ptr<double> uniq=make_unique<double>(3.14159);
    shared_ptr<double> ptr4=move(uniq);
    cout<<"ptr4: "<<*ptr4<<", count: "<<ptr4.use_count()<<endl;
    return 0;
}