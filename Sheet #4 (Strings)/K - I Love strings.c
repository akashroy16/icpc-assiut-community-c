#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    while (n--) {
        char s[55], t[55], result[105];
        scanf("%s %s", s, t);
 
        int lenS = strlen(s);
        int lenT = strlen(t);
        int len = (lenS > lenT) ? lenS : lenT;
        int resultIndex = 0;
 
        for (int i = 0; i < len; i++) {
            if (i < lenS) {
                result[resultIndex++] = s[i];
            }
            if (i < lenT) {
                result[resultIndex++] = t[i];
            }
        }
 
        result[resultIndex] = '\0';
        printf("%s\n", result);
    }
 
    return 0;
}
