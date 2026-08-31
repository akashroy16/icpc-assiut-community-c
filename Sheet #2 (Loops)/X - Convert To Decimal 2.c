#include <stdio.h>
 
int count_ones(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    return count;
}
 
int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int ones = count_ones(N);
        int result = (1 << ones) - 1;
        
        printf("%d\n", result);
    }
    
    return 0;
}
