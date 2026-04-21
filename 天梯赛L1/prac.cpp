#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
#define per(i,r,l) for(int i=r;i>=l;--i)
using namespace std;
int main(){
    string tel;
    cin>>tel;
    set<int>s;
    int n=s.size();
    rep(i,0,n-1){
        s.insert(tel[i]-'0');
    }
    vector<int>arr;
    cout<<"int[] arr = new int[]{";
    rep(i,0,arr.size()-1){
        if (i<n-1) cout<<arr[i]<<',';
        else cout<<arr[i];
    }
}
