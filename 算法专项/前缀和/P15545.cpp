#include <bits/stdc++.h> 
using namespace std;
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define per(i,r,l) for(int i=r;i>=l;i--)
int main (){
	int n,s,x,days=0,cur=0;
	cin>>n>>s>>x;
	rep(i,0,n-1){
		days++;
		int v;
		cin>>v;
		if (v==0) cur+=x;
		else if (v==-1) continue;
		else cur+=x-v;
		if (cur>=s) break;
	}
	if(cur>=s) cout<<days;
	else cout<<"-1";
	return 0;
}
