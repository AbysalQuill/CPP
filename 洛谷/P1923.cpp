#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for (auto &i:a) cin>>i;
    sort(a.begin(),a.end());
    cout<<a[k]<<endl;
    return 0;
}