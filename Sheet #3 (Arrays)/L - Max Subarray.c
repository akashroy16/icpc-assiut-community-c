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
 
        for (int i = 0; i < N; i++) {
            int current_max = A[i];
            for (int j = i; j < N; j++) {
                if (A[j] > current_max) {
                    current_max = A[j];
                }
                printf("%d ", current_max);
            }
        }
        printf("\n");
    }
 
    return 0;
}
