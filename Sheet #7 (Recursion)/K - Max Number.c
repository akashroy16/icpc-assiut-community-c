#include <stdio.h>
 
long long max(long long a, long long b) {
    return (a > b) ? a : b;
}
 
long long find_max(long long arr[], int idx, int n) {
    if (idx == n - 1) return arr[idx];
    return max(arr[idx], find_max(arr, idx + 1, n));
}
 
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long long arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }
        printf("%lld\n", find_max(arr, 0, n));
    }
    return 0;
}
