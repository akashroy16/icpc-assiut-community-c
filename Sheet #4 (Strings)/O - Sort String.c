#include <stdio.h>

int count[26];

int main() {
    int n;
    if (scanf("%d ", &n) != 1) return 0;

    int ch;
    while ((ch = getchar()) != EOF && ch != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        while (count[i]--) {
            putchar('a' + i);
        }
    }
    putchar('\n');

    return 0;
}
