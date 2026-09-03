#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char s[1000005];
    scanf("%s", s);
 
    int count = 0;
    int eCount = 0;
    int gCount = 0;
    int yCount = 0;
    int pCount = 0;
    int tCount = 0;
 
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (c == 'e') {
            eCount++;
        } else if (c == 'g') {
            gCount++;
        } else if (c == 'y') {
            yCount++;
        } else if (c == 'p') {
            pCount++;
        } else if (c == 't') {
            tCount++;
        }
    }
 
    while (eCount > 0 && gCount > 0 && yCount > 0 && pCount > 0 && tCount > 0) {
        count++;
        eCount--;
        gCount--;
        yCount--;
        pCount--;
        tCount--;
    }
 
    printf("%d\n", count);
 
    return 0;
}
