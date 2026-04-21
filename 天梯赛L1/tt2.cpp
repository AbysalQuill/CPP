#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
#define per(i,r,l) for(int i=r;i>=l;--i)
using namespace std;
int main(){
    int n,k,m;
    cin>>n>>k>>m;
    vector<float>point;
    rep(i,0,n-1){
        int tot=0;
        vector<int>p(k-1);
        rep(j,0,k-1){
            int sco;
            cin>>sco;
            p[j]=sco;
        }
        sort(p.begin(),p.end());
        rep(j,1,k-2) tot+=p[j];
        float avg=1.0*tot/(p.size()-2);
        point.push_back(avg);
    }
    sort(point.begin(),point.end());
    while(m--){
    	cout<<point[point.size()-m]<<" ";
	}
    return 0;
}
