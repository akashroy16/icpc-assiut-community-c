#include <stdio.h>
 
int isLucky(int num) {
    
    while (num > 0) {
        int digit = num % 10;  
        if (digit != 4 && digit != 7) {
            return 0;  
        }
        num /= 10;  
    }
    return 1;  
}
 
int main() {
    int A, B;
 
    
    scanf("%d %d", &A, &B);
 
    int foundLucky = 0;  
    
    
    for (int i = A; i <= B; i++) {
        if (isLucky(i)) {  
            printf("%d ", i);  
            foundLucky = 1; 
        }
    }
 
    
    if (!foundLucky) {
        printf("-1\n");
    }
 
    return 0;
}
