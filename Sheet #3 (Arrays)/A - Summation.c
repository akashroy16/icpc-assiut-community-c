#include <stdio.h>
#include <stdlib.h>  
 
int main() {
    int N;
    scanf("%d", &N);  
 
    long long A[N]; 
    long long sum = 0;  
 
    
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]); 
    }
 
    
    for (int i = 0; i < N; i++) {
        sum += (A[i]);  
    }
 
    printf("%lld\n", llabs(sum));
 
    return 0;
}
