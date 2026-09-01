#include <stdio.h>
 
#define MAX 10000000
 
int main() {
    int N;
    scanf("%d", &N);
    
    int A[N], B[N];
    int countA[MAX] = {0}, countB[MAX] = {0};
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        countA[A[i]]++;
    }
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
        countB[B[i]]++;
    }
    
    int isPermutation = 1;
    for (int i = 0; i < MAX; i++) {
        if (countA[i] != countB[i]) {
            isPermutation = 0;
            break;
        }
    }
    
    if (isPermutation) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
