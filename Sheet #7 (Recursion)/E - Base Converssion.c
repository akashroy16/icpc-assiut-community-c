#include <stdio.h>
 
void to_binary(long long n) {
    if (n == 0) return;
    to_binary(n / 2);
    printf("%lld", n % 2);
}
 
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            long long n;
            scanf("%lld", &n);
            if (n == 0) {
                printf("0\n");
            } else {
                to_binary(n);
                printf("\n");
            }
        }
    }
    return 0;
}
