#include <iostream>
#include <memory>
using namespace std;

int main(){
    unique_ptr<int> ptr=make_unique<int>(100);
    
    // 获取底层普通指针 (仅用于传递给需要原始指针的函数)
    int* rawPtr=ptr.get();
    cout<<"Raw pointer value: "<<*rawPtr<<endl;
    
    // 将普通指针转换为unique_ptr (不推荐，通常从new获取)
    unique_ptr<int> ptr2(new int(200));
    int* rawPtr2=ptr2.get();
    cout<<"Raw pointer 2 value: "<<*rawPtr2<<endl;
    
    // 使用reset设置新的普通指针
    int* newRaw=new int(300);
    ptr2.reset(newRaw); // ptr2现在拥有newRaw
    cout<<"New ptr2 value: "<<*ptr2<<endl;
    
    return 0;
}