#include <stdio.h>
 
int main() {
    int N, index = -1; 
    scanf("%d", &N);  
    int A[N];  
     
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);  
    }
    
    int X;
    scanf("%d", &X);
    
    // Loop to search for X in A
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            index = i;  
            break;      
        }
    }
    
    printf("%d", index); 
    
    return 0;
}
