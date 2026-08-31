#include <stdio.h>
 
int main() {
    int T;
    scanf("%d", &T);
 
    while (T--) {
        int N;
        scanf("%d", &N);
        
        if (N == 0) {
            printf("0\n");
            continue;
        }
        
        int first = 1;
        while (N > 0) {
            if (!first) {
                printf(" ");
            }
            printf("%d", N % 10);
            N /= 10;
            first = 0;
        }
        printf("\n");
    }
    
    return 0;
}
