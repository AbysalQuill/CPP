#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,4,6,8,1,10,12};
    
    cout<<"查找第一个不是偶数的元素："<<endl;
    auto it=find_if_not(v.begin(),v.end(),[](int n){return n%2==0;});
    if(it!=v.end())cout<<"找到元素："<<*it<<"，位置："<<distance(v.begin(),it)<<endl;
    else cout<<"未找到符合条件的元素"<<endl;
    
    cout<<"查找第一个不大于5的元素："<<endl;
    auto it2=find_if_not(v.begin(),v.end(),[](int n){return n>5;});
    if(it2!=v.end())cout<<"找到元素："<<*it2<<"，位置："<<distance(v.begin(),it2)<<endl;
    else cout<<"未找到符合条件的元素"<<endl;
    
    return 0;
}