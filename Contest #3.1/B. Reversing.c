#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int a[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            reverse(a, 0, i - 1);
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
    }
    
    return 0;
}
