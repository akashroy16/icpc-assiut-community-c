#include <stdio.h>

int is_palindrome(int arr[], int left, int right) {
    if (left >= right) return 1;
    if (arr[left] != arr[right]) return 0;
    return is_palindrome(arr, left + 1, right - 1);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        if (is_palindrome(arr, 0, n - 1)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
