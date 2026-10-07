#include <stdio.h>

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r == 0 || r == n) return 1;
    if (r > n / 2) r = n - r;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() {
    int n, r;
    if (scanf("%d %d", &n, &r) == 2) {
        printf("%lld\n", nCr(n, r));
    }
    return 0;
}
