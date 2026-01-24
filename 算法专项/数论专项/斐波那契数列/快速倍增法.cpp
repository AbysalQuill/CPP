#include <bits/stdc++.h>
using namespace std;

pair<long long,long long> fib(long long n){
    if(n==0) return {0,1};
    auto p=fib(n/2);
    long long a=p.first*(2*p.second-p.first);
    long long b=p.first*p.first+p.second*p.second;
    if(n%2==0) return {a,b};
    else return {b,a+b};
}
int main(){
    long long n;
    cin>>n;
    auto p=fib(n);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}