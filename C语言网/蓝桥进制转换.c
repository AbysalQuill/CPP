#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char s[4];
    scanf("%3s",s);
    long num=strtol(s,NULL,16);
    printf("%X %ld %lo",num,num,num);
    return 0;
}