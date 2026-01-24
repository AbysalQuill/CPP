#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    
    cout<<"原数组：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    rotate(v.begin(),v.begin()+3,v.end());
    
    cout<<"旋转后（以索引3为旋转点）：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    vector<int>v2={1,2,3,4,5,6,7,8,9};
    
    cout<<"新数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    rotate(v2.rbegin(),v2.rbegin()+3,v2.rend());
    
    cout<<"反向旋转后：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    return 0;
}