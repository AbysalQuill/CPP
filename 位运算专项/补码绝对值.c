#include <stdio.h>
long long abs(int n) {
    int sign=n>>31;
    return (n^sign)-sign;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", abs(n));
    return 0;
}
