#include <stdio.h>
 
int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long sum = 0;
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                if (i * i != n) {
                    sum += n / i;
                }
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
