#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    
    cout<<"查找第一个大于5的元素："<<endl;
    auto it=find_if(v.begin(),v.end(),[](int n){return n>5;});
    if(it!=v.end())cout<<"找到元素："<<*it<<"，位置："<<distance(v.begin(),it)<<endl;
    else cout<<"未找到符合条件的元素"<<endl;
    
    cout<<"查找第一个偶数："<<endl;
    auto it2=find_if(v.begin(),v.end(),[](int n){return n%2==0;});
    if(it2!=v.end())cout<<"找到元素："<<*it2<<"，位置："<<distance(v.begin(),it2)<<endl;
    else cout<<"未找到符合条件的元素"<<endl;
    
    return 0;
}