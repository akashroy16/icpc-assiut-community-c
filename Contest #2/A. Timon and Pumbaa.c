#include <stdio.h>

int main() {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) == 2) {
        long long diff = a - b;
        if (diff >= 0) {
            printf("%lld\n", diff);
        } else {
            printf("0\n");
        }
    }
    return 0;
}
