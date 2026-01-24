#include <cstdio>
int modePow2(int a, int n){
    return a&(1<<n)-1;
}

int main(){
    int a=10,n=3;
    printf("%d\n",modePow2(a,n));
    return 0;
}