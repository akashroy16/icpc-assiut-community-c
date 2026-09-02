#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);

    int even_count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0) {
            even_count++;
        }
    }

    if (n % 2 != 0) {
        printf("-1\n");
    } else {
        int target = n / 2;
        int diff = even_count - target;
        if (diff < 0) {
            diff = -diff;
        }
        printf("%d\n", diff);
    }
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        solve();
    }

    return 0;
}
