#include <stdio.h>
 
void print_digits(long long n) {
    if (n < 10) {
        printf("%lld", n);
        return;
    }
    print_digits(n / 10);
    printf(" %lld", n % 10);
}
 
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            long long n;
            scanf("%lld", &n);
            print_digits(n);
            printf("\n");
        }
    }
    return 0;
}
