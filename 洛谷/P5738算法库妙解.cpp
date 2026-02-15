#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;++i)
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    double maxScore=0;
    rep(i,0,n){
        rep(j,0,m) cin>>a[i][j];
        int minVal=*min_element(a[i].begin(),a[i].end());
        int maxVal=*max_element(a[i].begin(),a[i].end());
        int sum=accumulate(a[i].begin(),a[i].end(),0);
        maxScore=max(maxScore,(sum-minVal-maxVal)*1.0/(m-2));
    }
    cout<<fixed<<setprecision(2)<<maxScore;
}