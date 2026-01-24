#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={3,8,2,5,4,7,6,1,9};
    
    cout<<"数组：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    auto result=minmax_element(v.begin(),v.end());
    
    cout<<"最小元素："<<*(result.first)<<"，位置："<<distance(v.begin(),result.first)<<endl;
    cout<<"最大元素："<<*(result.second)<<"，位置："<<distance(v.begin(),result.second)<<endl;
    
    string s="hello world";
    
    cout<<"字符串："<<s<<endl;
    
    auto result2=minmax_element(s.begin(),s.end());
    
    cout<<"最小字符："<<*(result2.first)<<"，位置："<<distance(s.begin(),result2.first)<<endl;
    cout<<"最大字符："<<*(result2.second)<<"，位置："<<distance(s.begin(),result2.second)<<endl;
    
    return 0;
}