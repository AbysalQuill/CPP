#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
#define per(i,r,l) for(int i=r;i>=l;--i)
using namespace std;
const int N=13000;
int w[N],d[N],dp[N]={0};
int main(){
    int n,m;
    cin>>n>>m;
    rep(i,1,n) cin>>w[i]>>d[i];
    rep(i,1,n) per(j,m,w[i]) dp[j]=max(dp[j],dp[j-w[i]]+d[i])
    cout<<dp[m];
    return 0;
}