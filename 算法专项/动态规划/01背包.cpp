//P1048采药
#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
#define per(i,r,l) for(int i=r;i>=l;--i)
using namespace std;
const int N=1005;
int w[N],v[N],dp[N][N]={0};
int main(){
    int t,m;
    cin>>t>>m;
    rep(i,1,m) cin>>w[i]>>v[i];
    rep(i,1,m) rep(j,1,t){
        if (w[i]>j) dp[i][j]=dp[i-1][j];
        else dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
    }
    cout<<dp[m][t];
    return 0;
}