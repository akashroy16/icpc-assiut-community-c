#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void sort_range(char *s, int l, int r) {
    for (int i = l; i < r; i++) {
        for (int j = i + 1; j <= r; j++) {
            if (s[i] > s[j]) {
                swap(&s[i], &s[j]);
            }
        }
    }
}

void reverse_range(char *s, int l, int r) {
    while (l < r) {
        swap(&s[l], &s[r]);
        l++;
        r--;
    }
}

int main() {
    int n, q;
    if (scanf("%d %d", &n, &q) != 2) return 0;

    char s[10005];
    scanf("%s", s);

    int len = strlen(s);

    while (q--) {
        char query[20];
        scanf("%s", query);

        if (strcmp(query, "pop_back") == 0) {
            if (len > 0) {
                len--;
                s[len] = '\0';
            }
        } else if (strcmp(query, "front") == 0) {
            printf("%c\n", s[0]);
        } else if (strcmp(query, "back") == 0) {
            printf("%c\n", s[len - 1]);
        } else if (strcmp(query, "sort") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            l--; r--;
            if (l > r) { int temp = l; l = r; r = temp; }
            sort_range(s, l, r);
        } else if (strcmp(query, "reverse") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            l--; r--;
            if (l > r) { int temp = l; l = r; r = temp; }
            reverse_range(s, l, r);
        } else if (strcmp(query, "print") == 0) {
            int pos;
            scanf("%d", &pos);
            printf("%c\n", s[pos - 1]);
        } else if (strcmp(query, "substr") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            l--; r--;
            if (l > r) { int temp = l; l = r; r = temp; }
            for (int i = l; i <= r; i++) {
                putchar(s[i]);
            }
            putchar('\n');
        } else if (strcmp(query, "push_back") == 0) {
            char x;
            scanf(" %c", &x);
            s[len] = x;
            len++;
            s[len] = '\0';
        }
    }

    return 0;
}
