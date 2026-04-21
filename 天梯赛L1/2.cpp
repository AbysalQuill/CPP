#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<r;++i)
#define per(i,r,l) for(int i=r;i>l;--i)
using namespace std;
int main(){
	int N;
	char s;
	cin>>N>>s;
	int n=sqrt((N+1)/2),u=2*pow(n,2)-1,r=N-u;
	per(i,n,0){
		rep(j,0,n-i) cout<<" ";
		rep(j,0,2*i-1) cout<<s;
		cout<<endl;
	}
	rep(i,2,n+1){
		rep(j,0,n-i) cout<<" ";
		rep(j,0,2*i-1) cout<<s;
		cout<<endl;
	}
	cout<<r;
    return 0;
}
