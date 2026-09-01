#include <stdio.h>
#include <stdlib.h>
 
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
 
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            return 1;
        }
        if (arr[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return 0;
}
 
int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < q; i++) {
        int x;
        scanf("%d", &x);
        if (binarySearch(arr, 0, n - 1, x)) {
            printf("found\n");
        } else {
            printf("not found\n");
        }
    }
    return 0;
}
