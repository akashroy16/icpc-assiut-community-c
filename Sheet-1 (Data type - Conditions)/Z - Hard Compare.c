#include <stdio.h>
#include <math.h>
 
int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
 
    if (B * log(A) > D * log(C))
        printf("YES\n");
    else
        printf("NO\n");
 
    return 0;
}
