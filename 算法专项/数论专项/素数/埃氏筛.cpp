#include <bits/stdc++.h>
using namespace std;

vector<long long>eratos(long long n){
    vector<bool>isPrime(n+1,true);
    vector<long long>primes;
    isPrime[0]=false;
    isPrime[1]=false;
    for (long long i=2;i*i<=n;i++){ 
        if (isPrime[i]){
            for (long long j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }

    for (long long i=0;i<=n;i++){
        if (isPrime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    vector<long long>primes=eratos(1000000);
    for (auto i:primes){
        cout<<i<<" ";
    }
    return 0;
}