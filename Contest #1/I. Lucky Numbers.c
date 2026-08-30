#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int d1 = n / 10;
        int d2 = n % 10;
        
        if (d2 != 0 && d1 % d2 == 0) {
            printf("YES\n");
        } else if (d1 != 0 && d2 % d1 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
