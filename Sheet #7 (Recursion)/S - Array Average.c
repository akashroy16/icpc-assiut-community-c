#include <stdio.h>

double sum_array(int arr[], int idx, int n) {
    if (idx == n) return 0.0;
    return arr[idx] + sum_array(arr, idx + 1, n);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        double total = sum_array(arr, 0, n);
        printf("%.6f\n", total / n);
    }
    return 0;
}
