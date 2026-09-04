#include <stdio.h>
 
void shift_zeroes_right(int arr[], int n) {
    int non_zero_index = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[non_zero_index++] = arr[i];
        }
    }
 
    for (int i = non_zero_index; i < n; i++) {
        arr[i] = 0;
    }
}
 
int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    shift_zeroes_right(arr, N);
    
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
