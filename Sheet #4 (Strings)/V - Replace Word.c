#include <stdio.h>
#include <string.h>
 
int main() {
    char s[1005];
    scanf("%s", s);
 
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (i + 4 < len && strncmp(s + i, "EGYPT", 5) == 0) {
            printf(" ");
            i += 4;
        } else {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}
