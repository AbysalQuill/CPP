#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>s(n);
    vector<int>ans(n);
    for (int i=0;i<n;i++) cin>>a[i];
    s[0] = a[0];
    for (int i=1;i<n;i++){
        s[i]=s[i-1]+a[i];
    }
    for (int i=0;i<=n-3;i++){
        ans[i]=s[i]+s[i+1]+s[i+2];
    }
    sort(ans.begin(),ans.end());
    cout<<ans[0]<<endl;
}