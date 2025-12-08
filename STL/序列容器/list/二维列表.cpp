#include <bits/stdc++.h>
using namespace std;
int main(){ 
    list<list<int>>lst={{1,2,3},{4,5,6},{7,8,9}};
    for (list<int>i:lst){
        for (int j:i) cout<<j<<" ";
        cout<<endl;
    }
    cout<<endl;
    //访问列表一层第一个元素
    cout<<lst.front().front()<<endl;
    cout<<endl;
    //访问列表一层最后一个元素
    cout<<lst.back().back()<<endl;
    cout<<endl;
    //访问列表一层元素
    for (auto i:lst.front()) cout<<i<<" "<<endl;;
    cout<<endl;
    //访问列表前二层元素
    auto it=lst.begin();
    for (int i=0;i<2&&it!=lst.end();i++,it++){
        for (int j:*it) cout<<j<<" ";//解引用层数
        cout<<endl;
    }
}