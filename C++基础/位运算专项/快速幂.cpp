#include <stdio.h>
long long quickPow(long long a,long long n){
    long long res=1;
    while (n>0){
        if (n&=1)
        res*=a;
        a*=a;
        n>>1;
    }
    return res;
}
int main(){
    long long a,n;
    scanf("%lld%lld",&a,&n);
    printf("%lld\n",quickPow(a,n));
    return 0;
}