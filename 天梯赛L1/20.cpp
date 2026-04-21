#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>a(n);
    rep(i,0,n-1){
        int k;
        cin>>k;
        rep(j,0,k-1){
            int id;
            cin>>id;
            a[i].push_back(id);
        }
    }
    unordered_set<int>has;
    rep(i,0,n-1){
        if(a[i].size()>1){
            for(int id:a[i]) has.insert(id);
        }
    }
    int m;
    cin>>m;
    vector<int>q;
    unordered_set<int> outed;
    rep(i,0,m-1){
        int id;
        cin>>id;
        q.push_back(id);
    }
    vector<int> res;
    for(int id:q){
        if(has.count(id)==0&&outed.count(id)==0){
            res.push_back(id);
            outed.insert(id);
        }
    }
    if (res.empty()) cout<<"No one is handsome";
    else{
        rep(i,0,res.size()-1){
            if(i) cout<<" ";
            printf("%05d",res[i]);
        }
    }
    return 0;
}
