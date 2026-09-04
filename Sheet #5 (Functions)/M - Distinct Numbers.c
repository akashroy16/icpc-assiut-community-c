#include <stdio.h>
 
int count_distinct(int arr[], int n) {
    int count = 0;
    int distinct[n];
    int isDistinct;
 
    for (int i = 0; i < n; i++) {
        isDistinct = 1;
        for (int j = 0; j < count; j++) {
            if (arr[i] == distinct[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            distinct[count] = arr[i];
            count++;
        }
    }
    return count;
}
 
int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = count_distinct(arr, N);
    printf("%d\n", result);
    
    return 0;
}
