#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>mp={{1,"one"},{2,"two"} ,{3,"three"},{4,"four"},{5,"five"}};
    map<int,string>mp2={{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"},{10,"ten"}};
    mp.erase(1);//删除键为1的元素
    cout<<"删除键为1的元素后:"<<endl;
    for (auto i:mp) cout<<i.first<<" "<<i.second<<endl;
    mp.erase(mp.begin());//删除第一个元素
    cout<<"删除mp第一个元素后:"<<endl;
    for (auto i:mp) cout<<i.first<<" "<<i.second<<endl;
    //删除区间左闭右开
    mp2.erase(mp2.find(6),mp2.find(8));//删除键6到7的元素
    cout<<"删除mp2键6到7的元素后:"<<endl;
    for (auto i:mp2) cout<<i.first<<" "<<i.second<<endl;
    mp.clear();
    cout<<"mp清空后:"<<endl;
    for (auto i:mp) cout<<i.first<<" "<<i.second<<endl;
}