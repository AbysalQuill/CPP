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
    unique_ptr<Data> ptr1=make_unique<Data>(10);
    cout<<"ptr1 owns Data: "<<ptr1->val<<endl;
    
    // 使用move转移所有权
    unique_ptr<Data> ptr2=move(ptr1);
    cout<<"After move:"<<endl;
    cout<<"ptr1 valid: "<<(bool)ptr1<<endl;
    cout<<"ptr2 owns Data: "<<ptr2->val<<endl;
    
    // 使用release转移所有权
    Data* rawPtr=ptr2.release(); // ptr2放弃所有权，返回原始指针
    cout<<"After release - ptr2 valid: "<<(bool)ptr2<<endl;
    cout<<"Raw pointer owns Data: "<<rawPtr->val<<endl;
    
    // 需要手动删除release出来的资源
    delete rawPtr;
    
    return 0;
}