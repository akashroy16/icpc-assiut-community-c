#include <stdio.h>
 
void print_numbers(int n) {
    for (int i = 1; i <= n; i++) {
        if (i > 1) printf(" ");
        printf("%d", i);
    }
    printf("\n");
}
 
int main() {
    int n;
    scanf("%d", &n);
    print_numbers(n);
    return 0;
}
