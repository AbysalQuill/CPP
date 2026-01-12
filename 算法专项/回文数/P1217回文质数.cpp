#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool isPalindromePrime(ll n){
    ll temp=n,rev=0;
    while (temp){
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(rev!=n) return false;
    for (ll i=2;i*i<=n;i++){
        if (n%i==0) return false;
    }
    return true;
}

int main(){
    ll a,b;
    cin>>a>>b;
    for (ll i=a;i<=b;i++){
        if (isPalindromePrime(i)) cout<<i<<endl;
    }
    return 0;
}