#include <stdio.h>
 
int main() {
    float N;
    
   
    scanf("%f", &N);
    
   
    if (N == (int)N) {
       
        printf("int %d\n", (int)N);
    } else {
       
        int integerPart = (int)N;
        float decimalPart = N - integerPart;
        printf("float %d %.6f\n", integerPart, decimalPart);
    }
    
    return 0;
}
