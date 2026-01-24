#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={3,8,2,5,4,7,6,1,9};
    
    cout<<"原数组：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    partial_sort(v.begin(),v.begin()+3,v.end());
    
    cout<<"部分排序后（前3个最小元素）：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    vector<int>v2={9,1,8,2,7,3,6,4,5};
    cout<<"新数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    partial_sort(v2.begin(),v2.begin()+5,v2.end(),greater<int>());
    
    cout<<"部分排序后（前5个最大元素降序）：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    return 0;
}