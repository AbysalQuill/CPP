#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,1,2,2,2,3,4,4,5,5};
    vector<int>v2;
    v2.resize(v1.size());
    
    cout<<"原数组：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    
    auto it=unique_copy(v1.begin(),v1.end(),v2.begin());
    v2.resize(distance(v2.begin(),it));
    
    cout<<"复制去重后的元素到新数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    string s1="aabbccdd";
    string s2(s1.length(),' ');
    
    cout<<"原字符串："<<s1<<endl;
    
    auto it2=unique_copy(s1.begin(),s1.end(),s2.begin());
    
    s2.resize(distance(s2.begin(),it2));
    
    cout<<"复制去重后的字符到新字符串："<<s2<<endl;
    
    return 0;
}