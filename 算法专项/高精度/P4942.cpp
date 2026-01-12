#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while (t--){
        ll r,l;
        cin>>l>>r;
        cout<<(((l+r)%2==0)?((((l+r)/2)%9*(r-l+1)%9)%9):(((l+r)%9*((r-l+1)/2)%9)%9))<<endl;
    }
    return 0;
}