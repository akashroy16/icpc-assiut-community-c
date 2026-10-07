#include <stdio.h>

int can_reach(long long curr, long long target) {
    if (curr == target) return 1;
    if (curr > target) return 0;
    return can_reach(curr * 10, target) || can_reach(curr * 20, target);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            long long n;
            scanf("%lld", &n);
            if (can_reach(1, n)) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
