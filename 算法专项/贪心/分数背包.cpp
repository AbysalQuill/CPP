#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
using namespace std;
struct coin{
	int m,v;
}; 
int main(){
	int n,t,c,i;
	float ans=0;
	cin>>n>>t;
	vector<coin>a(n);
	rep(i,0,n-1) cin>>a[i].m>>a[i].v;
	sort(a.begin(),a.end(),[](coin a,coin b){return a.v*b.m>b.v*a.m;});
	c=t;
	for(i=0;i<n;++i){
		if (a[i].m>c) break;
		c-=a[i].m;
		ans+=a[i].v;
	}
	if (i<n) ans+=1.0*c/a[i].m*a[i].v;
	printf("%.2f",ans);
	return 0;
}
