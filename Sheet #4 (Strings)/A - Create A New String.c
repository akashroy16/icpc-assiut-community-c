#include <stdio.h>
#include <string.h>
 
int main() {
    char s[1005], t[1005];
 
    scanf("%s %s", s, t);
 
    printf("%d %d\n", strlen(s), strlen(t));
    printf("%s %s\n", s, t);
 
    return 0;
}
