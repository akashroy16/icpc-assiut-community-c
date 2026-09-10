#include <stdio.h>
 
int main(void) {
    long long a, b, q;
    if (scanf("%lld %lld %lld", &a, &b, &q) == 3) {
        long long rem = q % 3;
        if (rem == 1) {
            printf("%lld\n", a);
        } else if (rem == 2) {
            printf("%lld\n", b);
        } else {
            printf("%lld\n", a ^ b);
        }
    }
    return 0;
}
