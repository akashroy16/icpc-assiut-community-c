#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}
 
int main() {
    char s[10005];
    scanf("%s", s);
 
    int len = strlen(s);
    char smallest[20005];
    strcpy(smallest, s);
 
    for (int i = 1; i < len; i++) {
        char x[10005], y[10005];
        strncpy(x, s, i);
        x[i] = '\0';
        strcpy(y, s + i);
 
        qsort(x, i, sizeof(char), compare);
        qsort(y, len - i, sizeof(char), compare);
 
        char temp[20005];
        strcpy(temp, x);
        strcat(temp, y);
 
        if (strcmp(temp, smallest) < 0) {
            strcpy(smallest, temp);
        }
    }
 
    printf("%s\n", smallest);
 
    return 0;
}
