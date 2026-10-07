#include <stdio.h>

int collatz_length(long long n) {
    if (n == 1) return 1;
    if (n % 2 == 0) return 1 + collatz_length(n / 2);
    else return 1 + collatz_length(3 * n + 1);
}

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        printf("%d\n", collatz_length(n));
    }
    return 0;
}
