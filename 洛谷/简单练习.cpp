#include <bits/stdc++.h>
using namespace std;

int main(){
	float d=2.0,s=0.0,total;
	int steps=0;
	cin>>total;
	while (s<total){
		s+=d;
		steps++;
		d*=0.98;
	}
	cout<<steps<<endl;
	return 0;
}