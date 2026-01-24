#include <iostream>
#include <memory>
using namespace std;

struct CustomDeleter{
    void operator()(int* ptr){
        cout<<"Custom deleter freeing int: "<<*ptr<<endl;
        delete ptr;
    }
};

struct ArrayDeleter{
    void operator()(int* ptr){
        cout<<"Custom deleter freeing array"<<endl;
        delete[] ptr;
    }
};

int main(){
    // 使用定制删除器
    unique_ptr<int, CustomDeleter> ptr(new int(42));
    cout<<"Value: "<<*ptr<<endl;
    
    // 为数组使用定制删除器
    unique_ptr<int[], ArrayDeleter> arr(new int[3]{10,20,30});
    cout<<"Array values: ";
    for(int i=0;i<3;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}