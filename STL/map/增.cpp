#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>mp={{1,"one"},{2,"two"} ,{3,"three"},{4,"four"},{5,"five"}};
    for (auto i:mp) cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;
    mp[1]="apple";
    mp.insert({6,"six"});
    mp.insert(pair<int,string>(8,"eight"));
    mp.emplace(7,"seven");
    for (auto i:mp) cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;

}