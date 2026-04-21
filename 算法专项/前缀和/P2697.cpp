#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
using namespace std;
int main(){
    int pos[2005];
    memset(pos,-1,sizeof(pos)); 
    int sr=0,sg=0,ans=0;
    string s;
    cin>>s;
    int len=s.size();
    pos[1000]=0; 
    rep(i,1,len){
        if(s[i-1]=='R') sr++;
        else sg++;
        int d=sr-sg;
        int idx=1000+d;
        if(pos[idx]==-1) pos[idx]=i;
        else{
            ans=max(ans,i-pos[idx]);
        }
    }
    cout<<ans;
    return 0;
}
