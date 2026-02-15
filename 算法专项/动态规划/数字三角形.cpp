#include<bits/stdc++.h>
#define rep(i,x,n) for(int i=x;i<=n;++i)
using namespace std;
const int N=1010;
int n;
int a[N][N];
int dp[N][N];
int main(){
    cin>>n;
    rep(i,1,n){
        rep(j,1,i){
            cin>>a[i][j];
        }
    }
    rep(j,1,n) dp[n][j]=a[n][j];
    for(int i=n-1;i>=1;--i){
        rep(j,1,i) 
        dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];
    }
    cout<<dp[1][1];
    return 0;
}
