#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<r;++i)
#define per(i,r,l) for(int i=r;i>l;--i)
using namespace std;
int main(){
    int cnt[10]={0};
    string s;
    cin>>s;
    rep(i,0,s.size()){
        int x=s[i]-'0';
        cnt[x]++;
    }
    set<int>se;
    rep(i,0,s.size()) se.insert(s[i]-'0');
    vector<int>v(se.begin(),se.end());
    rep(i,0,v.size()){
        cout<<v[i]<<":"<<cnt[v[i]]<<endl;
    }
    return 0;
}