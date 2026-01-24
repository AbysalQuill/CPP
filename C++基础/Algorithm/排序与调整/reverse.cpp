#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    
    cout<<"原数组：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    reverse(v.begin(),v.end());
    
    cout<<"反转后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    string s="hello world";
    
    cout<<"原字符串："<<s<<endl;
    
    reverse(s.begin(),s.end());
    
    cout<<"反转后："<<s<<endl;
    
    vector<int>v2={1,2,3,4,5,6,7,8,9};
    cout<<"原数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    reverse(v2.begin()+2,v2.begin()+6);
    
    cout<<"反转部分后（索引2到5）：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    return 0;
}