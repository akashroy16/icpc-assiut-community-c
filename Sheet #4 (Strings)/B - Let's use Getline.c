#include <stdio.h>
#include <string.h>
 
int main() {
    char s[1000005];
    fgets(s, sizeof(s), stdin);
 
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\\') {
            s[i] = '\0';
            break;
        }
    }
 
    printf("%s", s);
 
    return 0;
}
