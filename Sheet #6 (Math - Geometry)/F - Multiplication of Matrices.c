#include <stdio.h>
 
int main(void) {
    int ra, ca;
    if (scanf("%d %d", &ra, &ca) != 2) return 0;
    
    int a[100][100];
    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < ca; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    int rb, cb;
    if (scanf("%d %d", &rb, &cb) != 2) return 0;
    
    int b[100][100];
    for (int i = 0; i < rb; i++) {
        for (int j = 0; j < cb; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < cb; j++) {
            long long sum = 0;
            for (int k = 0; k < ca; k++) {
                sum += (long long)a[i][k] * b[k][j];
            }
            printf("%lld%c", sum, j == cb - 1 ? '\n' : ' ');
        }
    }
    
    return 0;
}
