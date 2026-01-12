#include <bits/stdc++.h>
using namespace std;
using ll=long long;
string bigmod(string a,int mod){
    int res=0;
    for (char c:a) res=(res*10+c-'0')%mod;
    return to_string(res);
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        ll l,r=0;
        cin>>l>>r;
        string res="";
        for (ll i=l;i<=r;i++) res+=to_string(i);
        cout<<bigmod(res,9)<<endl;
    }
    return 0;
}