#include <stdio.h>
 
int is_vowel(char c) {
    if (c >= 'A' && c <= 'Z') c += 32;
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
 
int count_vowels(char *s, int idx) {
    if (s[idx] == '\0') return 0;
    return is_vowel(s[idx]) + count_vowels(s, idx + 1);
}
 
int main() {
    char s[205];
    if (fgets(s, sizeof(s), stdin)) {
        printf("%d\n", count_vowels(s, 0));
    }
    return 0;
}
