#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,3,4,5,5,6,7};
    
    cout<<"查找相邻相等元素："<<endl;
    auto it=adjacent_find(v.begin(),v.end());
    if(it!=v.end())cout<<"找到相邻相等元素："<<*it<<"，位置："<<distance(v.begin(),it)<<endl;
    else cout<<"未找到相邻相等元素"<<endl;
    
    vector<int>v2={1,3,2,4,6,8,10};
    
    cout<<"查找相邻递增元素："<<endl;
    auto it2=adjacent_find(v2.begin(),v2.end(),[](int a,int b){return a<b;});
    if(it2!=v2.end())cout<<"找到相邻递增元素："<<*it2<<" -> "<<*(it2+1)<<"，位置："<<distance(v2.begin(),it2)<<endl;
    else cout<<"未找到相邻递增元素"<<endl;
    
    return 0;
}