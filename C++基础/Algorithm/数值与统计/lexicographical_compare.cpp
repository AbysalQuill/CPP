#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,2,3};
    vector<int>v2={1,2,4};
    vector<int>v3={1,2,3};
    
    cout<<"v1: ";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    cout<<"v2: ";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    cout<<"v3: ";
    for(int i:v3)cout<<i<<" ";
    cout<<endl;
    
    bool cmp1=lexicographical_compare(v1.begin(),v1.end(),v2.begin(),v2.end());
    bool cmp2=lexicographical_compare(v1.begin(),v1.end(),v3.begin(),v3.end());
    
    cout<<"v1 < v2 (字典序): "<<(cmp1?"true":"false")<<endl;
    cout<<"v1 < v3 (字典序): "<<(cmp2?"true":"false")<<endl;
    
    string s1="apple";
    string s2="banana";
    string s3="apple";
    
    cout<<"s1: "<<s1<<endl;
    cout<<"s2: "<<s2<<endl;
    cout<<"s3: "<<s3<<endl;
    
    bool cmp3=lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end());
    bool cmp4=lexicographical_compare(s1.begin(),s1.end(),s3.begin(),s3.end());
    
    cout<<"s1 < s2 (字典序): "<<(cmp3?"true":"false")<<endl;
    cout<<"s1 < s3 (字典序): "<<(cmp4?"true":"false")<<endl;
    
    return 0;
}