#include <stdio.h>
 
int main() {
    int N, M;
    
    scanf("%d %d", &N, &M);
    
    int A[N], freq[M + 1];
    
    for (int i = 0; i <= M; i++) {
        freq[i] = 0;
    }
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        freq[A[i]]++;
    }
    
    for (int i = 1; i <= M; i++) {
        printf("%d\n", freq[i]);
    }
    
    return 0;
}
