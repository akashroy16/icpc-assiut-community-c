#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
    int a = 0, b = 1;
    
    for (int i = 1; i <= N; i++) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }
    
    printf("\n");
    
    return 0;
}
