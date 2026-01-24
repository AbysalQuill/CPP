#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={3,8,2,5,4,7,6,1,9};
    
    cout<<"原数组：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    nth_element(v.begin(),v.begin()+4,v.end());
    
    cout<<"nth_element后（第5小元素在正确位置）：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    vector<int>v2={9,1,8,2,7,3,6,4,5};
    
    cout<<"新数组：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    nth_element(v2.begin(),v2.begin()+2,v2.end(),greater<int>());
    
    cout<<"nth_element后（第3大元素在正确位置）：";
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    cout<<"第3大元素是："<<v2[2]<<endl;
    
    return 0;
}