#include <bits/stdc++.h> 
using namespace std;
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define per(i,r,l) for(int i=r;i>=l;i--)
int main(){
	int m;
	cin>>m;
	per(k1,sqrt(2*m),2){
		if(2*m%k1==0&&(k1+2*m/k1)%2){
			int k2=2*m/k1;
		cout<<(k2-k1+1)/2<<" "<<(k1+k2-1)/2<<endl;
		}
	}
	return 0;
}
