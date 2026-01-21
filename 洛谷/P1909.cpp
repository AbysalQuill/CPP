#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,mincost=INT_MAX;
    cin>>n;
    for(int i=0;i<3;i++){
        int q,p;
        cin>>q>>p;
        int num=(n+q-1)/q;
        int cost=num*p;
        mincost=min(mincost,cost);
    }
    cout<<mincost<<endl;
    return 0;
}