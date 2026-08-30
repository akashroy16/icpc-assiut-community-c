#include <stdio.h>
 
int main() {
    int A, B, C;
    char S;
    
    
    scanf("%d %c %d = %d", &A, &S, &B, &C);
    
   
    int result;
    if (S == '+') {
        result = A + B;
    } else if (S == '-') {
        result = A - B;
    } else if (S == '*') {
        result = A * B;
    }
    
    
    if (result == C) {
        printf("Yes\n");
    } else {
        printf("%d\n", result); 
    }
    
    return 0;
}
