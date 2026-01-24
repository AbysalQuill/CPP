#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,2,4,2,5};
    
    cout<<"删除前：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    auto it=remove(v.begin(),v.end(),2);
    
    cout<<"删除所有2后：";
    for(auto i=v.begin();i!=it;++i)cout<<*i<<" ";
    cout<<endl;
    
    v.erase(it,v.end());
    
    cout<<"实际擦除后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    string s="hello world";
    
    cout<<"原字符串："<<s<<endl;
    
    auto it2=remove(s.begin(),s.end(),'l');
    
    cout<<"删除所有'l'后：";
    for(auto i=s.begin();i!=it2;++i)cout<<*i;
    cout<<endl;
    
    s.erase(it2,s.end());
    
    cout<<"实际擦除后："<<s<<endl;
    
    return 0;
}