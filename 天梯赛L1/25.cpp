#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
#define per(i,r,l) for(int i=r;i>=l;--i)
using namespace std;
bool isv(string n){
	if (n.size()==0) return false;
	rep(i,0,n.size()-1){
		if(!isdigit(n[i])) return false;
	}
	int num=stoi(n);
	if (num<1||num>1000) return false;
	return true;
}
int main(){
	string s,a,b;
	getline(cin,s);
	a=s.substr(0,s.find(' '));
	b=s.substr(s.find(' ')+1);
	if (isv(a)&&isv(b)) cout<<a<<" + "<<b<<" = "<<(stoi(a)+stoi(b));
	else if (isv(a)&&!isv(b)) cout<<a<<" + ? = ?";
	else if (!isv(a)&&isv(b)) cout<<"? + "<<b<<" = ?";
	else cout<<"? + ? = ?";
	return 0;		
}
