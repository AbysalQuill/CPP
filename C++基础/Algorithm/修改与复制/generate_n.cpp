#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(10);
    int counter=1;
    
    cout<<"生成前：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    generate_n(v.begin(),5,[&counter](){return counter++;});
    
    cout<<"生成前5个递增元素后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    counter=10;
    generate_n(v.begin()+5,5,[&counter](){return counter--;});
    
    cout<<"生成后5个递减元素后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    string s(6,' ');
    counter=0;
    
    generate_n(s.begin(),6,[&counter](){return 'a'+(counter++)%26;});
    
    cout<<"生成字母序列：\""<<s<<"\""<<endl;
    
    return 0;
}