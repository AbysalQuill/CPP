#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,2,4,2,5};
    
    cout<<"替换前：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    replace(v.begin(),v.end(),2,9);
    
    cout<<"将所有2替换为9后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    string s="hello world";
    
    cout<<"原字符串："<<s<<endl;
    
    replace(s.begin(),s.end(),'l','x');
    
    cout<<"将所有'l'替换为'x'后："<<s<<endl;
    
    return 0;
}