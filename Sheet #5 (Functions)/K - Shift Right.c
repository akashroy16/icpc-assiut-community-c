#include <stdio.h>
 
void shift_right(int arr[], int n, int x) {
    x = x % n;
    if (x == 0) {
        return;
    }
 
    int temp[n];
 
    for (int i = 0; i < x; i++) {
        temp[i] = arr[n - x + i];
    }
 
    for (int i = 0; i < n - x; i++) {
        temp[x + i] = arr[i];
    }
 
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
 
int main() {
    int N, X;
    scanf("%d %d", &N, &X);
    
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    shift_right(arr, N, X);
 
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
