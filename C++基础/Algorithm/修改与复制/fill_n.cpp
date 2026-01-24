#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(10);
    
    cout<<"填充前：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    fill_n(v.begin(),5,8);
    
    cout<<"填充前5个元素为8后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    fill_n(v.begin()+3,4,3);
    
    cout<<"从索引3开始填充4个元素为3后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    string s(10,'?');
    
    cout<<"原字符串：\""<<s<<"\""<<endl;
    
    fill_n(s.begin(),6,'*');
    
    cout<<"填充前6个元素为*后：\""<<s<<"\""<<endl;
    
    return 0;
}