#include <stdio.h>
 
void print_1_to_n(int i, int n) {
    if (i > n) return;
    printf("%d\n", i);
    print_1_to_n(i + 1, n);
}
 
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        print_1_to_n(1, n);
    }
    return 0;
}
