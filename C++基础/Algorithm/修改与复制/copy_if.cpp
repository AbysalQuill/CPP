#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,2,3,4,5,6,7,8,9,10};
    vector<int>v2;
    v2.resize(v1.size());
    
    cout<<"原数组：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    
    auto it=copy_if(v1.begin(),v1.end(),v2.begin(),[](int n){return n%2==0;});
    v2.resize(distance(v2.begin(),it));
    
    cout<<"复制的偶数：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    vector<int>v3={1,2,3,4,5,6,7,8,9,10};
    vector<int>v4;
    v4.resize(v3.size());
    
    auto it2=copy_if(v3.begin(),v3.end(),v4.begin(),[](int n){return n>5;});
    v4.resize(distance(v4.begin(),it2));
    
    cout<<"复制的大于5的数：";
    for(int i:v4)cout<<i<<" ";
    cout<<endl;
    
    return 0;
}