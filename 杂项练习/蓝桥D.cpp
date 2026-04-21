#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);
		ll s=0;
		int mx=-1;
		rep(i,0,n-1){
			cin>>a[i];
			s+=a[i]; 
			mx=max(mx,a[i]);
		}
		if (n<5||s%5!=0||mx>s/5) cout<<"F"<<endl;
		else cout<<"T"<<endl;	
	}
	return 0;
} 
