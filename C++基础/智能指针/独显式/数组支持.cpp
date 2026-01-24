#include <iostream>
#include <memory>
using namespace std;

int main(){
    // 对于数组，需要使用unique_ptr<T[]>
    unique_ptr<int[]> arr(new int[5]{1,2,3,4,5});
    
    cout<<"Array elements:"<<endl;
    for(int i=0;i<5;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // 也可以使用make_unique (C++14)
    auto arr2=make_unique<double[]>(5);
    for(int i=0;i<5;++i){
        arr2[i]=i*1.5;
    }
    
    cout<<"Second array elements:"<<endl;
    for(int i=0;i<5;++i){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}