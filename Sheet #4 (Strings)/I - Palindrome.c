#include <stdio.h>
#include <string.h>
 
int main() {
    char s[1005];
    scanf("%s", s);
 
    int len = strlen(s);
    int palindrome = 1;
 
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            palindrome = 0;
            break;
        }
    }
 
    if (palindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;
}
