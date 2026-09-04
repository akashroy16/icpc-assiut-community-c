#include <stdio.h>
 
long long power(int base, int exp) {
    long long res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}
 
long long calculate_s(int x, int n) {
    long long s = power(x, 0) - 1;
    for (int i = 2; i <= n; i += 2) {
        s += power(x, i);
    }
    return s;
}
 
int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%lld\n", calculate_s(x, n));
    return 0;
}
