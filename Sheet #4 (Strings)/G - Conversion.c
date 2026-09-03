#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char s[100005];
    fgets(s, sizeof(s), stdin);
 
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ',') {
            s[i] = ' ';
        } else if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } else if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
 
    printf("%s", s);
 
    return 0;
}
