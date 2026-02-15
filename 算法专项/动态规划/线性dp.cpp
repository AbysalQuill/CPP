#include<bits/stdc++.h>
#define rep(i,x,n) for(int i=x;i<=n;++i)
using namespace std;
int main(){
    int a,n,m,x;
    cin>>a>>n>>m>>x;
    int SA[25]={0,1,1},SB[25]={0,0,0};
    int upA[25]={0,1,0},upB[25]={0,0,1};
    rep(i,3,n-1){
        upA[i]=upA[i-1]+upA[i-2];
        upB[i]=upB[i-1]+upB[i-2];
        SA[i]=SA[i-1]+upA[i-2];
        SB[i]=SB[i-1]+upB[i-2];
    }
    if(x<=2){
        cout<<a;
        return 0;
    }
    int b=(m-SA[n-1]*a)/SB[n-1];
    cout<<SA[x]*a+SB[x]*b;
    return 0;
}