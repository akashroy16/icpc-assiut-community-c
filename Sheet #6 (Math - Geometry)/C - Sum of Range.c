#include <stdio.h>
 
long long sum_all(long long n) {
    return n * (n + 1) / 2;
}
 
long long sum_even(long long n) {
    long long k = n / 2;
    return k * (k + 1);
}
 
long long sum_odd(long long n) {
    long long k = (n + 1) / 2;
    return k * k;
}
 
int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) == 2) {
        if (a > b) {
            long long temp = a;
            a = b;
            b = temp;
        }
 
        long long total = sum_all(b) - sum_all(a - 1);
        long long even = sum_even(b) - sum_even(a - 1);
        long long odd = sum_odd(b) - sum_odd(a - 1);
 
        printf("%lld\n%lld\n%lld\n", total, even, odd);
    }
    return 0;
}
