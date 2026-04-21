#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
#define per(i,r,l) for(int i=r;i>=l;--i)
using namespace std;
int n, h, ans=0;
int tree[30010];
struct seg{
    int b,e,t;
}q[30010];
int main(){
    cin>>n>>h;
    rep(i,1,h) cin>>q[i].b>>q[i].e>>q[i].t;
    sort(q+1,q+h+1,[](seg x,seg y){return x.e<y.e;});
    rep(i,1,h){
        int b=q[i].b,e=q[i].e,t=q[i].t;
        int cnt=0;
        rep(j,b,e) cnt+=tree[j];
        if(cnt>=t) continue;
        int need=t-cnt;
        ans+=need;
        per(j,e,b) if(tree[j]==0){
            tree[j]=1;
            if(--need==0) break;
        }
    }
    cout<<ans;
    return 0;
}