#include <stdio.h>
#include <string.h>
 
int is_odd(int n) {
    return n % 2 != 0;
}
 
int is_binary_palindrome(int n) {
    char bin[35];
    int len = 0;
    while (n > 0) {
        bin[len++] = (n % 2) + '0';
        n /= 2;
    }
    for (int i = 0; i < len / 2; i++) {
        if (bin[i] != bin[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
 
int main() {
    int n;
    scanf("%d", &n);
    if (is_odd(n) && is_binary_palindrome(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
