#include <stdio.h>
int count1(int n){
    int count=0;
    while (n) {
        n&=(n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",count1(n));
    return 0;
}