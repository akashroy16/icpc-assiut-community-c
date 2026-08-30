#include <stdio.h>

int main() {
    char c;
    if (scanf("%c", &c) == 1) {
        if (c == 'z') {
            printf("a\n");
        } else {
            printf("%c\n", c + 1);
        }
    }
    return 0;
}
