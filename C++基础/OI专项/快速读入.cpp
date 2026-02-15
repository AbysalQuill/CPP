#include<bits/stdc++.h>
using namespace std; 
int n,a;
long long sum;

int read(){
    int x=0,f=1;
    char s;
	s=getchar_unlocked();
    while(s<'0'||s>'9'){
        if(s=='-')
            f=-1;
        s=getchar_unlocked();
    }
    while(s>='0' && s<='9'){
        x=x*10+s-'0';
		s=getchar_unlocked();
    }
    return x*f;
}
signed main(){
	n=read();
	for(int i=1;i<=n;i++){
		a=read();
		sum+=a;
	}
	printf("%lld",sum);
	return 0;
}