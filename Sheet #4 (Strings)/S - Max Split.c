#include <stdio.h>
#include <string.h>
 
int main() {
    char S[1005];
    scanf("%s", S);
    
    int count = 0, balance = 0, start = 0;
    int len = strlen(S);
    
    for (int i = 0; i < len; i++) {
        if (S[i] == 'L') balance++;
        else balance--;
        if (balance == 0) count++;
    }
 
    printf("%d\n", count);
 
    balance = 0;
    start = 0;
    for (int i = 0; i < len; i++) {
        if (S[i] == 'L') balance++;
        else balance--;
        if (balance == 0) {
            for (int j = start; j <= i; j++) {
                printf("%c", S[j]);
            }
            printf("\n");
            start = i + 1;
        }
    }
 
    return 0;
}
