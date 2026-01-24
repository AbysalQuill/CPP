#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll fib(ll n)
{
    int prev=0, cur=1,next;
    if (n==0) return 0;
    if (n==1) return 1;
    for (int i=2;i<=n;i++){
        next=prev+cur;
        prev=cur;
        cur=next;
    }
    return next;
}
ll gcd(ll a,ll b)
{
    while (b){
        a%=b;
        swap(a,b);
    }
    return a;
}
int main(){
    ll n,m;
    cin>>n>>m;
    cout<<"gcd(fib(n),fib(m))=="<<gcd(fib(n),fib(m))<<endl;
    cout<<"fib(gcd(n,m))=="<<fib(gcd(n,m))<<endl;
    if (fib(gcd(n,m))==gcd(fib(n),fib(m))) cout<<"Amazing"<<endl;
}


