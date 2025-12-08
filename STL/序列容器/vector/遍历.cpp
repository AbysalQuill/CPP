#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    //范围遍历
    for (int i:v) cout<<i<<" ";
    cout<<endl;
    //迭代器遍历
    for (auto it=v.begin();it!=v.end();it++) cout<<*it<<" ";
    cout<<endl;
    //逆序遍历
    for (auto it=v.rbegin();it!=v.rend();it++) cout<<*it<<" ";
    cout<<endl;
    //将每个元素乘以2
    for (auto &i:v) i*=2;
    for (int i:v) cout<<i<<" ";
    cout<<endl;
    return 0;
}