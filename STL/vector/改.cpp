#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    for (int i:v) cout<<i<<" ";
    cout<<endl;
    v[0]=99;//修改第一个元素
    for (int i:v) cout<<i<<" ";
    cout<<endl;
    v.at(0)=88;//等价于修改第一个元素
    for (int i:v) cout<<i<<" ";
    cout<<endl;
}