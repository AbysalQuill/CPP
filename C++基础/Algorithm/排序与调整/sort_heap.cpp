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
    
    sort_heap(v.begin(),v.end());
    
    cout<<"堆排序后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    return 0;
}