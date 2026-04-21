#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
#define per(i,r,l) for(int i=r;i>=l;--i)
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin.ignore();
    getline(cin,s);
    int len=s.size(),c=(len+n-1)/n;
    s.append(n*c-len,' ');
    rep(i,0,n-1){
        per(j,c-1,0) cout<<s[i+j*n];
        cout<<endl;
    }
    return 0;
}