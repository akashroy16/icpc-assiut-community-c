#include <stdio.h>
#include <math.h>
 
int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long ans = (sqrt(1 + 8.0 * n) - 1) / 2;
        printf("%lld\n", ans);
    }
    return 0;
}
