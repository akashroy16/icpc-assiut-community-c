#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        long long w, h;
        scanf("%lld %lld", &w, &h);

        if (w == h) {
            printf("Square\n");
        } else {
            printf("Rectangle\n");
        }
    }

    return 0;
}
