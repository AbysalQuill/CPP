#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    string s="hello world";
    
    cout<<"在vector中查找元素5："<<endl;
    auto it=find(v.begin(),v.end(),5);
    if(it!=v.end())cout<<"找到元素5，位置："<<distance(v.begin(),it)<<endl;
    else cout<<"未找到元素5"<<endl;
    
    cout<<"在字符串中查找字符'o'："<<endl;
    auto it2=find(s.begin(),s.end(),'o');
    if(it2!=s.end())cout<<"找到字符'o'，位置："<<distance(s.begin(),it2)<<endl;
    else cout<<"未找到字符'o'"<<endl;
    
    return 0;
}