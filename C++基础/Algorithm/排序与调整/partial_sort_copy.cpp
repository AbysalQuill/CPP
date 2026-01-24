#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>src={3,8,2,5,4,7,6,1,9};
    vector<int>dst(4);
    
    cout<<"源数组：";
    for(int i:src)cout<<i<<" ";
    cout<<endl;
    
    partial_sort_copy(src.begin(),src.end(),dst.begin(),dst.end());
    
    cout<<"目标数组（前4个最小元素）：";
    for(int i:dst)cout<<i<<" ";
    cout<<endl;
    
    vector<int>src2={9,1,8,2,7,3,6,4,5};
    vector<int>dst2(3);
    
    cout<<"新源数组：";
    for(int i:src2)cout<<i<<" ";
    cout<<endl;
    
    partial_sort_copy(src2.begin(),src2.end(),dst2.begin(),dst2.end(),greater<int>());
    
    cout<<"目标数组（前3个最大元素降序）：";
    for(int i:dst2)cout<<i<<" ";
    cout<<endl;
    
    return 0;
}