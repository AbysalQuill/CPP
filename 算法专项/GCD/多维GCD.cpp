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
long long vecgcd(vector<long long>a){
    long long ans=a[0];
    for(size_t i=1;i<a.size();i++)
        ans=gcd(ans,a[i]);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<long long>a(n);
    for(size_t i=0;i<a.size();i++) cin>>a[i];
    cout<<vecgcd(a)<<endl;
    return 0;
}