#include <bits/stdc++.h> 
using namespace std;
using ll=long long;
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define per(i,r,l) for(int i=r;i>=l;i--)
const int N=1e6+5;
ll r[N], dif[N];
int main(){
    int n,m;
    cin>>n>>m;
    rep(i,1,m){
        int d,s,t;
        cin>>d>>s>>t;
        dif[s]+=d;
        if (t+1<=n){
            dif[t+1]-=d;
        }
    }
    ll need=0;
    rep(j,1,n){
        need+=dif[j];
        if (need>r[j]){
            cout<<-1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}

