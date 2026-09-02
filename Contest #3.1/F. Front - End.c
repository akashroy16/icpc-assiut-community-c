#include <stdio.h>

int a[100000];

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        if (left == right) {
            printf("%d ", a[left]);
        } else {
            printf("%d %d ", a[left], a[right]);
        }
        left++;
        right--;
    }
    printf("\n");

    return 0;
}
