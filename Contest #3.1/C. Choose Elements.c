#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    long long arg1 = *(const long long *)a;
    long long arg2 = *(const long long *)b;
    if (arg1 < arg2) return 1;
    if (arg1 > arg2) return -1;
    return 0;
}

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    
    long long a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    
    qsort(a, n, sizeof(long long), compare);
    
    long long sum = 0;
    for (int i = 0; i < k; i++) {
        if (a[i] > 0) {
            sum += a[i];
        }
    }
    
    printf("%lld\n", sum);
    
    return 0;
}
