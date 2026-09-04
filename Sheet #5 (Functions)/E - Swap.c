#include <stdio.h>
 
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    swap(&X, &Y);
    printf("%d %d\n", X, Y);
    return 0;
}
