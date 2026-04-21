#include<bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
using namespace std;
int main(){
    int n;
    cin>>n;
    int m[100]={0},seat[100][100]={0},pos=0,cur=1,pre=-1;
    rep(i,0,n-1)cin>>m[i];
    while(1){
        int cnt=0;
        rep(i,0,n-1)if(pos<m[i]*10)cnt++;
        if(!cnt)break;
        rep(i,0,n-1){
            int t=m[i]*10;
            if(pos<t){
                if(pre==i)cur++;
                seat[i][pos]=cur;
                pre=i;
                cur++;
            }
        }
        pos++;
    }
    rep(i,0,n-1){
        cout<<"#"<<i+1<<endl;
        int t=m[i]*10;
        rep(j,0,t-1){
            if(j%10)cout<<" ";
            cout<<seat[i][j];
            if((j+1)%10==0)cout<<endl;
        }
    }
    return 0;
}