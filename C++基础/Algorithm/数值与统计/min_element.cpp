#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={3,8,2,5,4,7,6,1,9};
    
    cout<<"数组：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    auto min_it=min_element(v.begin(),v.end());
    
    cout<<"最小元素："<<*min_it<<"，位置："<<distance(v.begin(),min_it)<<endl;
    
    string s="hello world";
    
    cout<<"字符串："<<s<<endl;
    
    auto min_char_it=min_element(s.begin(),s.end());
    
    cout<<"最小字符："<<*min_char_it<<"，位置："<<distance(s.begin(),min_char_it)<<endl;
    
    vector<int>v2={9,8,7,6,5,4,3,2,1};
    
    cout<<"新数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    auto min_it2=min_element(v2.begin(),v2.end(),[](int a,int b){return a<b;});
    
    cout<<"最小元素："<<*min_it2<<"，位置："<<distance(v2.begin(),min_it2)<<endl;
    
    return 0;
}