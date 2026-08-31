#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
    int start = 1;
    for (int i = 0; i < N; i++) {
        printf("%d %d %d PUM\n", start, start + 1, start + 2);
        start += 4;
    }
    
    return 0;
}
