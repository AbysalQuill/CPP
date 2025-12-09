#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    v.pop_back();//删除最后一个元素
    for (int i:v) cout<<i<<" ";
    cout<<endl;
    v.erase(v.begin());//删除第一个元素
    for (int i:v) cout<<i<<" ";
    cout<<endl;
    v.erase(v.begin()+2,v.begin()+5);//删除区间[2,4]
    for (int i:v) cout<<i<<" ";
    cout<<endl;
    v.clear();//清空数组
    for (int i:v) cout<<i<<" ";
    cout<<endl;


}