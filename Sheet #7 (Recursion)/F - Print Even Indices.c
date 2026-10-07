#include <stdio.h>
 
void print_even_indices(int arr[], int index) {
    if (index < 0) return;
    if (index % 2 == 0) {
        printf("%d ", arr[index]);
    }
    print_even_indices(arr, index - 1);
}
 
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        print_even_indices(arr, n - 1);
        printf("\n");
    }
    return 0;
}
