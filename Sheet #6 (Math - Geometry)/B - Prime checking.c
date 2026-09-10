#include <stdio.h>
 
int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n < 2) {
            printf("NO\n");
            return 0;
        }
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }
    return 0;
}
