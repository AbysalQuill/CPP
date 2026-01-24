#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    
    cout<<"删除前：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    auto it=remove_if(v.begin(),v.end(),[](int n){return n%2==0;});
    
    cout<<"删除所有偶数后：";
    for(auto i=v.begin();i!=it;++i)cout<<*i<<" ";
    cout<<endl;
    
    v.erase(it,v.end());
    
    cout<<"实际擦除后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    string s="Hello World";
    
    cout<<"原字符串："<<s<<endl;
    
    auto it2=remove_if(s.begin(),s.end(),[](char c){return c>='A'&&c<='Z';});
    
    cout<<"删除所有大写字母后：";
    for(auto i=s.begin();i!=it2;++i)cout<<*i;
    cout<<endl;
    
    s.erase(it2,s.end());
    
    cout<<"实际擦除后："<<s<<endl;
    
    return 0;
}