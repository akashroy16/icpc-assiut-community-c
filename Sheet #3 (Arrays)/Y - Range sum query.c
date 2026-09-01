#include <stdio.h>
 
int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    long long arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &arr[i]);
        arr[i] += arr[i - 1];
    }
    for (int i = 0; i < q; i++) {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%lld\n", arr[r] - arr[l - 1]);
    }
    return 0;
}
