#include <bits/stdc++.h>
using namespace std;
const int mod=1e8;
long long gcd(long long a, long long b){
    while (b){
        a%=b;
        swap(a,b);
    }
    return a;
}
pair<long long,long long> fib(long long k){
    if (k==0) return {0,1};
    auto[a,b]=fib(k>>1);
    long long c=a*((2*b-a+mod)%mod)%mod;
    long long d=(a*a%mod+b*b%mod)%mod;
    if (k&1) return {d,(c+d)%mod};
    else return {c,d};
}
int main(){
    long long m,n;
    cin>>m>>n;
    auto result=fib(gcd(m,n));
    cout<<result.first<<endl;
    return 0;
}
