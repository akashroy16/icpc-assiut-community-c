#include <stdio.h>
 
int main() {
    int T;
    scanf("%d", &T);
 
    while (T--) {
        int N;
        scanf("%d", &N);
 
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
 
        int min_result = 1000000000;
 
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                int result = A[i] + A[j] + j - i;
                if (result < min_result) {
                    min_result = result;
                }
            }
        }
 
        printf("%d\n", min_result);
    }
 
    return 0;
}
