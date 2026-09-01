#include <stdio.h>
#include <ctype.h>
 
int main() {
    int A, B;
    scanf("%d %d", &A, &B);
 
    char S[A + B + 1];
    scanf("%s", S);
 
    if (S[A] != '-') {
        printf("No\n");
        return 0;
    }
 
    for (int i = 0; i < A + B + 1; i++) {
        if (i != A && !isdigit(S[i])) {
            printf("No\n");
            return 0;
        }
    }
 
    printf("Yes\n");
    return 0;
}
