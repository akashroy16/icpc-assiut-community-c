#include <stdio.h>

int main() {
    long long n, k, a;
    if (scanf("%lld %lld %lld", &n, &k, &a) == 3) {
        if ((n * k) % a != 0) {
            printf("double\n");
        } else {
            long long res = (n * k) / a;
            if (res >= -2147483648LL && res <= 2147483647LL) {
                printf("int\n");
            } else {
                printf("long long\n");
            }
        }
    }
    return 0;
}
