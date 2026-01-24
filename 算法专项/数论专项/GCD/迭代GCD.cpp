#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    a=abs(a); b=abs(b);
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}

int main(){
    long long a,b;
    while(cin>>a>>b) 
        cout<<gcd(a,b)<<endl;
    return 0;
}