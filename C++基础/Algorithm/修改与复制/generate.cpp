#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(10);
    int counter=1;
    
    cout<<"生成前：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    generate(v.begin(),v.end(),[&counter](){return counter++;});
    
    cout<<"生成递增序列后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    counter=1;
    generate(v.begin(),v.begin()+5,[&counter](){return counter*counter;counter++;});
    
    cout<<"生成平方数（前5个）：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    string s(5,' ');
    counter=0;
    
    generate(s.begin(),s.end(),[&counter](){return 'A'+(counter++)%26;});
    
    cout<<"生成字母序列：\""<<s<<"\""<<endl;
    
    return 0;
}