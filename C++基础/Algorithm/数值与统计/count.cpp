#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,2,4,2,5,2};
    
    cout<<"数组：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    int cnt=count(v.begin(),v.end(),2);
    
    cout<<"数字2出现的次数："<<cnt<<endl;
    
    string s="hello world";
    
    cout<<"字符串："<<s<<endl;
    
    int char_cnt=count(s.begin(),s.end(),'l');
    
    cout<<"字符'l'出现的次数："<<char_cnt<<endl;
    
    return 0;
}