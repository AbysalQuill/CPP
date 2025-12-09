#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>mp;//键值对,默认按键升序
    mp[1]="one";
    mp[2]="two";
    for (auto i:mp) cout<<i.first<<" "<<i.second<<endl;
    map<int ,string,greater<int>>decmap;
    decmap[1]="one";
    decmap[2]="two";
    for (auto i:decmap) cout<<i.first<<" "<<i.second<<endl;
    //拷贝
    map<int,string>mp1(mp);


}