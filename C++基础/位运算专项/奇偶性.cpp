# include <iostream>
bool isOdd(int n) {
    return n&1;//奇数位为1,偶数位为0
}
int main() {
    int n;
    scanf("%d", &n);
    if (isOdd(n))
        printf("%d is odd\n", n);
    else 
        printf("%d is even\n", n);
    return 0;
}