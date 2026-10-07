#include <stdio.h>
 
long long suffix_sum(long long arr[], int idx, int n) {
    if (idx == n) return 0;
    return arr[idx] + suffix_sum(arr, idx + 1, n);
}
 
int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) == 2) {
        long long arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }
        printf("%lld\n", suffix_sum(arr, n - m, n));
    }
    return 0;
}
