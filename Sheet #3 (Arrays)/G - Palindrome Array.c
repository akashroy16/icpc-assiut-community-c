#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
  
 
    int A[N];
 
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
 
    int p = 1;
    for (int i = 0; i < N / 2; i++) {
        if (A[i] != A[N - 1 - i]) {
            p = 0;
            break;
        }
    }
 
    if (p == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;
}
