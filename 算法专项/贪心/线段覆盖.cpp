#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
using namespace std;
using ll=long long;
struct cp{
	int a,b;	
};
int main(){
	int n;
	cin>>n;
	vector<cp>c(n);
	rep(i,0,n-1) cin>>c[i].a>>c[i].b;
	sort(c.begin(),c.end(),[](cp x,cp y){return x.b<y.b;});
	int ans=0,lst=0;
	rep(i,0,n-1){
		if(c[i].a>=lst){
			ans++;
			lst=c[i].b;
		}
	}
	cout<<ans;
	return 0;
}
