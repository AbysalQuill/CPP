#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,2,3,4,5};
    vector<int>v2(5);
    
    cout<<"原数组：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    
    copy(v1.begin(),v1.end(),v2.begin());
    
    cout<<"复制到新数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    string s1="hello";
    string s2="?????";
    
    cout<<"原字符串："<<s1<<endl;
    cout<<"目标字符串："<<s2<<endl;
    
    copy(s1.begin(),s1.end(),s2.begin());
    
    cout<<"复制后目标字符串："<<s2<<endl;
    
    return 0;
}