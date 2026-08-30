#include <stdio.h>
 
int main() {
    int A, B, C, temp,a,b,c;
    
    
    scanf("%d %d %d", &A, &B, &C);
    a=A;
    b=B;
    c=C;
    
   
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    
   
    printf("%d\n%d\n%d\n", a, b, c);
    
  
    printf("\n");
    
    
    printf("%d\n%d\n%d\n", A, B, C);
    
    return 0;
}
