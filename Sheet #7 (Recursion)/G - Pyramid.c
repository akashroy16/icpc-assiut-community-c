#include <stdio.h>
 
void print_pyramid(int row, int total_rows) {
    if (row > total_rows) return;
    
 
    for (int i = 0; i < total_rows - row; i++) {
        printf(" ");
    }
    for (int i = 0; i < 2 * row - 1; i++) {
        printf("*");
    }
    printf("\n");
    
    print_pyramid(row + 1, total_rows);
}
 
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        print_pyramid(1, n);
    }
    return 0;
}
