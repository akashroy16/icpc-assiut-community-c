#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char s[1000005];
    fgets(s, sizeof(s), stdin);
 
    int count = 0;
    int inWord = 0;
 
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
 
    printf("%d\n", count);
 
    return 0;
}
