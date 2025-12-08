#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;//创建一个vector,begin代表第一个元素，end代表最后一个元素后面
    v.push_back(1);
    v.emplace_back(2);//减少临时对象，更高效
    v.insert(v.begin(),3);
    for (int i:v) cout<<i<<" ";
    cout<<endl;
    v.insert(v.begin()+2,3,99);//插入3个99
    for (int i:v) cout<<i<<" ";
    cout<<endl;
    v.insert(v.begin()+2,{1,2,3,4,5});//插入{1,2,3,4,5}
    for (int i:v) cout<<i<<" ";
    cout<<endl;
}