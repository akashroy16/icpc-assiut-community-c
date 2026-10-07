#include <stdio.h>
 
long long sum_array(long long arr[], int idx, int n) {
    if (idx == n) return 0;
    return arr[idx] + sum_array(arr, idx + 1, n);
}
 
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long long arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }
        printf("%lld\n", sum_array(arr, 0, n));
    }
    return 0;
}
