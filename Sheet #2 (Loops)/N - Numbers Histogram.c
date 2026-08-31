#include <stdio.h>
 
int main() {
    char S;  
    int N;   
    int X[50]; 
    
    
    scanf("%c", &S);
    
    scanf("%d", &N);
    
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }
 
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < X[i]; j++) {
            printf("%c", S);  
        }
        printf("\n");  
    }
 
    return 0;
}
