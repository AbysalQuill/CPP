#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={3,8,2,5,4,7,6,1,9};
    
    cout<<"数组：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    auto max_it=max_element(v.begin(),v.end());
    
    cout<<"最大元素："<<*max_it<<"，位置："<<distance(v.begin(),max_it)<<endl;
    
    string s="hello world";
    
    cout<<"字符串："<<s<<endl;
    
    auto max_char_it=max_element(s.begin(),s.end());
    
    cout<<"最大字符："<<*max_char_it<<"，位置："<<distance(s.begin(),max_char_it)<<endl;
    
    vector<int>v2={1,2,3,4,5,6,7,8,9};
    
    cout<<"新数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    auto max_it2=max_element(v2.begin(),v2.end(),[](int a,int b){return a<b;});
    
    cout<<"最大元素："<<*max_it2<<"，位置："<<distance(v2.begin(),max_it2)<<endl;
    
    return 0;
}