#include <iostream>
#include <memory>
using namespace std;

class Resource{
public:
    Resource(){cout<<"Resource acquired"<<endl;}
    ~Resource(){cout<<"Resource released"<<endl;}
    void use(){cout<<"Using resource"<<endl;}
};

void transferOwnership(unique_ptr<Resource> ptr){
    if(ptr){
        ptr->use();
    }
}

int main(){
    unique_ptr<Resource> ptr1=make_unique<Resource>();
    
    cout<<"Before transfer:"<<endl;
    if(ptr1) cout<<"ptr1 is valid"<<endl;
    
    // 所有权转移到函数
    transferOwnership(move(ptr1));
    
    cout<<"After transfer:"<<endl;
    if(!ptr1) cout<<"ptr1 is now invalid"<<endl;
    
    // 尝试复制会报错，所以这里注释掉
    // unique_ptr<Resource> ptr2 = ptr1; // 错误! 禁止复制
    
    return 0;
}