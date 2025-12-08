#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>mp={{1,"one"},{2,"two"} ,{3,"three"},{4,"four"},{5,"five"}};
    //范围
    for (auto i:mp) cout<<i.first<<" "<<i.second<<endl;
    //迭代器
    for (auto it=mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    //const绑定迭代器
    for (const auto &i:mp) cout<<i.first<<" "<<i.second<<endl;
    
}