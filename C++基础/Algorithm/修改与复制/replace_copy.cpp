#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,2,3,2,4,2,5};
    vector<int>v2(v1.size());
    
    cout<<"原数组：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    
    replace_copy(v1.begin(),v1.end(),v2.begin(),2,9);
    
    cout<<"将所有2替换为9并复制到新数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    cout<<"原数组不变：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    
    string s1="hello world";
    string s2(s1.length(),' ');
    
    cout<<"原字符串："<<s1<<endl;
    
    replace_copy(s1.begin(),s1.end(),s2.begin(),'l','x');
    
    cout<<"将所有'l'替换为'x'并复制到新字符串："<<s2<<endl;
    
    cout<<"原字符串不变："<<s1<<endl;
    
    return 0;
}