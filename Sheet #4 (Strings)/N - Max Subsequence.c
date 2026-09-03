#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    char s[100005];
    scanf("%s", s);
 
    int maxLen = 0;
    char prev = '\0';
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != prev) {
            maxLen++;
            prev = s[i];
        }
    }
 
    printf("%d\n", maxLen);
 
    return 0;
}
