#include <stdio.h>
#include <string.h>
 
int main() {
    char s[10005];
    scanf("%s", s);
 
    char hello[] = "hello";
    int helloIndex = 0;
 
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == hello[helloIndex]) {
            helloIndex++;
        }
        if (helloIndex == 5) {
            printf("YES\n");
            return 0;
        }
    }
 
    printf("NO\n");
    return 0;
}
