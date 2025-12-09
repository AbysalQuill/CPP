#include <bits/stdc++.h>
using namespace std;
int main(){
    //先按长度排序，如果长度相同，则按字典序排序
    map<int,string>mp={{1, "one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"}};
    vector<pair<int, string>>vec(mp.begin(), mp.end());
    sort(vec.begin(),vec.end(),[](const pair<int, string>& a,const pair<int, string>& b) {
        return a.second.size()!=b.second.size()?
        a.second.size()<b.second.size():a.second<b.second;
    });
    for (const auto& p:vec) cout<<p.first<<": "<<p.second<<endl;
}