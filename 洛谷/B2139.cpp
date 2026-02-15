#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
string s;
bool isP(int n){
    if (n<=1) return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return false;
    return true;
}
bool real(int n){
    int t=n;
    s=to_string(n);
    reverse(s.begin(),s.end());
    return isP(t)&&isP(stoi(s));
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<int> res;
    rep(i,m,n+1) if(real(i)) res.push_back(i);
    if(res.empty()) cout<<"No";
    else{
        rep(i,0,res.size()){
            cout<<res[i];
            if(i!=res.size()-1) cout<<",";
        }
    }
    return 0;
}