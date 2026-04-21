#include<bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1]={0};
    int s[n+1]={0};
    rep(i,1,n){
        cin>>a[i];
        s[i]=a[i]+s[i-1];
    }
    int m,ans;
    cin>>m; 
    rep(i,0,m-1){
        int l,r;
        cin>>l>>r;
        ans=s[r]-s[l-1];
        cout<<ans<<endl;
    }
    return 0;
}
