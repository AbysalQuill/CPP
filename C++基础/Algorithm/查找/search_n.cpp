#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,4,4,5,6,7};
    
    cout<<"查找连续3个4："<<endl;
    auto it=search_n(v.begin(),v.end(),3,4);
    if(it!=v.end())cout<<"找到连续3个4，起始位置："<<distance(v.begin(),it)<<endl;
    else cout<<"未找到连续3个4"<<endl;
    
    vector<int>v2={1,2,3,4,5,6,7,8,9};
    
    cout<<"查找连续3个大于4的数："<<endl;
    auto it2=search_n(v2.begin(),v2.end(),3,4,[](int a,int b){return a>b;});
    if(it2!=v2.end())cout<<"找到连续3个大于4的数，起始位置："<<distance(v2.begin(),it2)<<endl;
    else cout<<"未找到连续3个大于4的数"<<endl;
    
    return 0;
}