#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int N, primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    
    scanf("%d", &N);
    int A[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
            if (i == j) {
                primaryDiagonalSum += A[i][j];
            }
            if (i + j == N - 1) {
                secondaryDiagonalSum += A[i][j];
            }
        }
    }
    
    printf("%d\n", abs(primaryDiagonalSum - secondaryDiagonalSum));
    
    return 0;
}
