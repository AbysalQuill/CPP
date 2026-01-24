#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    
    cout<<"替换前：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    replace_if(v.begin(),v.end(),[](int n){return n%2==0;},0);
    
    cout<<"将所有偶数替换为0后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    string s="Hello World";
    
    cout<<"原字符串："<<s<<endl;
    
    replace_if(s.begin(),s.end(),[](char c){return c>='A'&&c<='Z';},'*');
    
    cout<<"将所有大写字母替换为*后："<<s<<endl;
    
    return 0;
}