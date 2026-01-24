#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(10);
    
    cout<<"填充前：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    fill(v.begin(),v.end(),5);
    
    cout<<"用5填充后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    fill(v.begin(),v.begin()+5,7);
    
    cout<<"用7填充前5个元素后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    string s(10,' ');
    
    cout<<"原字符串：\""<<s<<"\""<<endl;
    
    fill(s.begin(),s.end(),'A');
    
    cout<<"用'A'填充后：\""<<s<<"\""<<endl;
    
    return 0;
}