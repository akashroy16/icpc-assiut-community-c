#include <stdio.h>

int n;
long long target;
long long a[25];

int check(int idx, long long current_sum) {
    if (idx == n) {
        return current_sum == target;
    }
    return check(idx + 1, current_sum + a[idx]) || check(idx + 1, current_sum - a[idx]);
}

int main() {
    if (scanf("%d %lld", &n, &target) == 2) {
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }
        if (check(1, a[0])) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
