#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) == 2) {
        long long min_val;
        long long current;
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            scanf("%lld", &current);
            if (count == 0 || current < min_val) {
                min_val = current;
            }
            count++;
            
            if (count == k || i == n - 1) {
                printf("%lld ", min_val);
                count = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
