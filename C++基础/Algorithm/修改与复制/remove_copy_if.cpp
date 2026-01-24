#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,2,3,4,5,6,7,8,9,10};
    vector<int>v2;
    v2.resize(v1.size());
    
    cout<<"原数组：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    
    auto it=remove_copy_if(v1.begin(),v1.end(),v2.begin(),[](int n){return n%2==0;});
    v2.resize(distance(v2.begin(),it));
    
    cout<<"复制除了所有偶数之外的元素到新数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    string s1="Hello World";
    string s2(s1.length(),' ');
    
    cout<<"原字符串："<<s1<<endl;
    
    auto it2=remove_copy_if(s1.begin(),s1.end(),s2.begin(),[](char c){return c>='A'&&c<='Z';});
    
    s2.resize(distance(s2.begin(),it2));
    
    cout<<"复制除了所有大写字母之外的字符到新字符串："<<s2<<endl;
    
    return 0;
}