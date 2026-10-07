#include <stdio.h>
 
#define MAX 105
 
int r, c;
int A[MAX][MAX], B[MAX][MAX];
 
void add_matrix(int row, int col) {
    if (row == r) return;
    
    printf("%d", A[row][col] + B[row][col]);
    
    if (col == c - 1) {
        printf("\n");
        add_matrix(row + 1, 0);
    } else {
        printf(" ");
        add_matrix(row, col + 1);
    }
}
 
int main() {
    if (scanf("%d %d", &r, &c) == 2) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) scanf("%d", &A[i][j]);
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) scanf("%d", &B[i][j]);
        }
        add_matrix(0, 0);
    }
    return 0;
}
