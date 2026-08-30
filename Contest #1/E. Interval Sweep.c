#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        if (a == 0 && b == 0) {
            printf("NO\n");
        } else if (abs(a - b) <= 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
