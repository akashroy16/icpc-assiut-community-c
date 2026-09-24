#include <stdio.h>

void printRecursion(int n) {
    if (n <= 0) {
        return;
    }
    printf("I love Recursion\n");
    printRecursion(n - 1);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printRecursion(n);
    }
    return 0;
}
