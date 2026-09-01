#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            long long l, r;
            scanf("%lld %lld", &l, &r);
            
            if (l > r) {
                long long temp = l;
                l = r;
                r = temp;
            }
            
            long long sum = (r * (r + 1)) / 2 - ((l - 1) * l) / 2;
            printf("%lld\n", sum);
        }
    }
    return 0;
}
