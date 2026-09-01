#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int min_operations = 1000000000;
    
    for (int i = 0; i < N; i++) {
        int count = 0;
        while (A[i] % 2 == 0) {
            A[i] /= 2;
            count++;
        }
        if (count < min_operations) {
            min_operations = count;
        }
    }
    
    printf("%d\n", min_operations);
    
    return 0;
}
