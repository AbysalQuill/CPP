#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10,b=20;
    
    cout<<"交换前：a="<<a<<", b="<<b<<endl;
    
    swap(a,b);
    
    cout<<"交换后：a="<<a<<", b="<<b<<endl;
    
    vector<int>v1={1,2,3},v2={4,5,6};
    
    cout<<"交换前v1：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    cout<<"交换前v2：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    swap(v1,v2);
    
    cout<<"交换后v1：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    cout<<"交换后v2：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    return 0;
}