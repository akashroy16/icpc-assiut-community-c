#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int max_f = 0;
        
        for (int i = 0; i < n; i++) {
            long long x;
            scanf("%lld", &x);
            
            int count = 0;
            while (x > 0 && x % 2 == 0) {
                count++;
                x /= 2;
            }
            
            if (count > max_f) {
                max_f = count;
            }
        }
        
        printf("%d\n", max_f);
    }
    return 0;
}
