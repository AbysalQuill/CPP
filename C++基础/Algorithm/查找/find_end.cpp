#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,2,3,4,2,3,4,5,6};
    vector<int>v2={2,3,4};
    
    cout<<"在vector中查找最后一次出现的子序列{2,3,4}："<<endl;
    auto it=find_end(v1.begin(),v1.end(),v2.begin(),v2.end());
    if(it!=v1.end())cout<<"找到子序列，起始位置："<<distance(v1.begin(),it)<<endl;
    else cout<<"未找到子序列"<<endl;
    
    string s1="abcabcabc";
    string s2="abcab";
    
    cout<<"在字符串中查找最后一次出现的子串\"abcab\"："<<endl;
    auto it2=find_end(s1.begin(),s1.end(),s2.begin(),s2.end());
    if(it2!=s1.end())cout<<"找到子串，起始位置："<<distance(s1.begin(),it2)<<endl;
    else cout<<"未找到子串"<<endl;
    
    return 0;
}