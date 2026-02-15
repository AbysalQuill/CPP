#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    vector<ll>s;
    for(auto x:s) {
        cin>>x;
        s.push_back(x);
    }
    ll sum=accumulate(s.begin(),s.end(),0ll);
    ll ans=sum*(1ll<<(s.size()-1));
    cout<<ans;
}