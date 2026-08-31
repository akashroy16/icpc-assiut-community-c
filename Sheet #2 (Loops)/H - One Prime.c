#include <stdio.h>
#include <math.h>
 
int is_prime(int X) {
    if (X <= 1) {
        return 0;
    }
    if (X == 2) {
        return 1;
    }
    if (X % 2 == 0) {
        return 0;
    }
 
    for (int i = 3; i <= sqrt(X); i += 2) {
        if (X % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
int main() {
    int X;
    scanf("%d", &X);
 
    if (is_prime(X)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;
}
