#include <stdio.h>
 
int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
 
    long long result = (A % 100) * (B % 100) * (C % 100) * (D % 100);
    result = result % 100;
    printf("%02lld\n", result);
 
    return 0;
}
