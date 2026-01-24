#include <stdio.h>
int isPow2(int n) {
    return n>0 && n&(n-1);
    //2的幂的二进制数只有一位为1，其他位为0，此步可以把1消成0
}