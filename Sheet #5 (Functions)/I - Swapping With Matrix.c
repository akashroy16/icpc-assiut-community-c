#include <stdio.h>
 
void swap_rows(int matrix[][500], int n, int x, int y) {
    for (int i = 0; i < n; i++) {
        int temp = matrix[x][i];
        matrix[x][i] = matrix[y][i];
        matrix[y][i] = temp;
    }
}
 
void swap_columns(int matrix[][500], int n, int x, int y) {
    for (int i = 0; i < n; i++) {
        int temp = matrix[i][x];
        matrix[i][x] = matrix[i][y];
        matrix[i][y] = temp;
    }
}
 
int main() {
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);
    
    X--;  
    Y--;  
    
    int matrix[500][500];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
 
    swap_rows(matrix, N, X, Y);
    swap_columns(matrix, N, X, Y);
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
printf("\n");
    }
 
    return 0;
}
