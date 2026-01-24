#include<bits/stdc++.h>
#include<random>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    random_device rd;
    mt19937 g(rd());
    
    cout<<"原数组：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    shuffle(v.begin(),v.end(),g);
    
    cout<<"随机打乱后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    vector<int>v2={1,2,3,4,5,6,7,8,9};
    
    cout<<"新数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    shuffle(v2.begin(),v2.end(),g);
    
    cout<<"再次随机打乱后：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    return 0;
}