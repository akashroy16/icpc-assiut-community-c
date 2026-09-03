#include <stdio.h>
#include <string.h>
 
int main() {
    char s[10000005];
    scanf("%s", s);
 
    int counts[26] = {0};
    int len = strlen(s);
 
    for (int i = 0; i < len; i++) {
        counts[s[i] - 'a']++;
    }
 
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c : %d\n", 'a' + i, counts[i]);
        }
    }
 
    return 0;
}
