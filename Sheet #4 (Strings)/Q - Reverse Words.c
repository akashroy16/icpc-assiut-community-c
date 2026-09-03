#include <stdio.h>
#include <string.h>
 
void reverseWord(char *word) {
    int len = strlen(word);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
}
 
int main() {
    char s[1000005];
    fgets(s, sizeof(s), stdin);
 
    char word[1000005];
    int wordIndex = 0;
 
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' || s[i] == '\n') {
            word[wordIndex] = '\0';
            reverseWord(word);
            printf("%s", word);
            if (s[i] == ' ') {
                printf(" ");
            }
            wordIndex = 0;
        } else {
            word[wordIndex++] = s[i];
        }
    }
 
    return 0;
}
