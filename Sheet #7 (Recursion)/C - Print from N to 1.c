#include <stdio.h>
 
void print_n_to_1(int n) {
    if (n == 0) return;
    printf("%d%c", n, (n == 1 ? '\n' : ' '));
    print_n_to_1(n - 1);
}
 
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        print_n_to_1(n);
    }
    return 0;
}
