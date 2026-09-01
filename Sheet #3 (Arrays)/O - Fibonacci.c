#include <stdio.h>
 
long long fib(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        long long fib1 = 0, fib2 = 1, fib_n;
        for (int i = 3; i <= n; i++) {
            fib_n = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib_n;
        }
        return fib_n;
    }
}
 
int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", fib(n));
    return 0;
}
