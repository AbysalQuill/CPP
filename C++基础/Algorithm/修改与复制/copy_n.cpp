#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,2,3,4,5,6,7,8,9,10};
    vector<int>v2(5);
    
    cout<<"原数组：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    
    copy_n(v1.begin(),5,v2.begin());
    
    cout<<"复制前5个元素：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    string s1="hello world";
    string s2(5,' ');
    
    cout<<"原字符串："<<s1<<endl;
    
    copy_n(s1.begin(),5,s2.begin());
    
    cout<<"复制前5个字符："<<s2<<endl;
    
    return 0;
}