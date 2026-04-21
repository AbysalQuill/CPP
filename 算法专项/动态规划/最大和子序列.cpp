//P1115最大和子序列
#include<bits/stdc++.h>
#define rep(i,x,n) for(int i=x;i<=n;++i)
#define per(i,x,n) for(int i=x;i>=n;--i)
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    rep(i,0,n-1) cin>>a[i];
    int dp[n];
    dp[0]=a[0];
    rep(i,1,n-1) dp[i]=max(dp[i-1]+a[i],a[i]);
    cout<<*max_element(dp,dp+n)<<endl;
    return 0;
}