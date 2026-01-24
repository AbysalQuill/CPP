#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,2,3,4,5};
    vector<int>v2={6,7,8,9,10};
    
    cout<<"交换前v1：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    cout<<"交换前v2：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    swap_ranges(v1.begin(),v1.end(),v2.begin());
    
    cout<<"交换后v1：";
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    cout<<"交换后v2：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    vector<int>v3={1,2,3,4,5};
    vector<int>v4={6,7,8,9,10};
    
    cout<<"部分交换前v3：";
    for(int i:v3)cout<<i<<" ";
    cout<<endl;
    cout<<"部分交换前v4：";
    for(int i:v4)cout<<i<<" ";
    cout<<endl;
    
    swap_ranges(v3.begin(),v3.begin()+3,v4.begin());
    
    cout<<"部分交换后v3：";
    for(int i:v3)cout<<i<<" ";
    cout<<endl;
    cout<<"部分交换后v4：";
    for(int i:v4)cout<<i<<" ";
    cout<<endl;
    
    return 0;
}