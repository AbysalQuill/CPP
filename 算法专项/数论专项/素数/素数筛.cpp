#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if (n<=1) return false;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0) return false;
    return true;
}
int main(){
    vector<int> prime;
    for (int i=2;i<=100;i++)
        if (isPrime(i)) prime.push_back(i);
    for (int i:prime) cout<<i<<endl;
    return 0;
}