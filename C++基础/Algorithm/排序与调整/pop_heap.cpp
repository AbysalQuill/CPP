#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={3,1,4,1,5,9,2,6,5};
    
    cout<<"原数组：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    make_heap(v.begin(),v.end());
    
    cout<<"建堆后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    pop_heap(v.begin(),v.end());
    
    cout<<"弹出堆顶后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    cout<<"被弹出的元素："<<v.back()<<endl;
    
    v.pop_back();
    cout<<"移除最后一个元素后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    return 0;
}