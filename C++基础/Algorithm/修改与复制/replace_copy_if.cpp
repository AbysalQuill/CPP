#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,2,3,4,5,6,7,8,9,10};
    vector<int>v2(v1.size());
    
    cout<<"原数组：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    
    replace_copy_if(v1.begin(),v1.end(),v2.begin(),[](int n){return n%2==0;},0);
    
    cout<<"将所有偶数替换为0并复制到新数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    cout<<"原数组不变：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    
    string s1="Hello World";
    string s2(s1.length(),' ');
    
    cout<<"原字符串："<<s1<<endl;
    
    replace_copy_if(s1.begin(),s1.end(),s2.begin(),[](char c){return c>='A'&&c<='Z';},'*');
    
    cout<<"将所有大写字母替换为*并复制到新字符串："<<s2<<endl;
    
    cout<<"原字符串不变："<<s1<<endl;
    
    return 0;
}