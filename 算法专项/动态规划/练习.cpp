#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<r;++i)
using ll=long long;
using namespace std;
struct p{
	int t,id;
};
bool cmp(p a,p b){
	return a.t<b.t;
}
int main(){
	int n;
	cin>>n;
	vector<p>s(n);
	ll sum=0,tot=0;
	rep(i,0,n){
		cin>>s[i].t;
		s[i].id=i+1;
	};
	sort(s.begin(),s.end(),cmp);
	rep(i,0,n){
		tot+=sum;
		sum+=s[i].t;
	}
	rep(i,0,n){
		if(i==n-1)cout<<s[i].id;
		else cout<<s[i].id<<" ";	
	}
	cout<<endl;
	double avg=1.0*tot/n;
	cout<<fixed<<setprecision(2)<<avg;
	return 0;
}
