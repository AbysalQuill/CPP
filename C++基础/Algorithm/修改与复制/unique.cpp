#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,1,2,2,2,3,4,4,5,5};
    
    cout<<"去重前：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    auto it=unique(v.begin(),v.end());
    
    cout<<"去重后（逻辑上）：";
    for(auto i=v.begin();i!=it;++i)cout<<*i<<" ";
    cout<<endl;
    
    v.erase(it,v.end());
    
    cout<<"实际擦除后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    string s="aabbccdd";
    
    cout<<"原字符串："<<s<<endl;
    
    auto it2=unique(s.begin(),s.end());
    
    cout<<"去重后（逻辑上）：";
    for(auto i=s.begin();i!=it2;++i)cout<<*i;
    cout<<endl;
    
    s.erase(it2,s.end());
    
    cout<<"实际擦除后："<<s<<endl;
    
    return 0;
}