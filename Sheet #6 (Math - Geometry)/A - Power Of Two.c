#include <stdio.h>
 
int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n > 0 && (n & (n - 1)) == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
