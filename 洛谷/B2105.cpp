#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;++i)
using namespace std;
int main(){
    int a[100][100],b[100][100],c[100][100]={0};
    int n,m,k;
    cin>>n>>m>>k;
    rep(i,0,n) rep(j,0,m) cin>>a[i][j];
    rep(i,0,m) rep(j,0,k) cin>>b[i][j];
    rep(i,0,n) rep(j,0,k)
        rep(p,0,m) c[i][j]+=a[i][p]*b[p][j];
    rep(i,0,n) rep(j,0,k)
    {
        cout<<c[i][j]<<" ";
        if(j==k-1) cout<<endl;
    }
    return 0;
}