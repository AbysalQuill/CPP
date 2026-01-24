#include <bits/stdc++.h>
using namespace std;
int main(){
	double m;
	int n;
	cin>>m>>n;
	double s=m;
	if(n==1) cout<<fixed<<setprecision(2)<<m/2<<s;
	for (int i=2;i<=n;i++){
		m/=2;
		s+=m*2;
	}
	cout<<fixed<<setprecision(2)<<m/2<<" "<<s;
	return 0;
}

