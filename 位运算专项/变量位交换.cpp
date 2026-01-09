#include <stdio.h>
//a^a=0,a^0=a
//a^b^b=a,右结合性
//a^b=b^a,(a^b)^c=a^(b^c)，交换律和结合率
void swap(int *a,int *b){
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

int main(){
    int a=10,b=20;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}