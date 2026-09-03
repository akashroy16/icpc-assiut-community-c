#include <stdio.h>
#include <string.h>
 
int main() {
    int q;
    scanf("%d", &q);
 
    char s[100005];
    scanf("%s", s);
 
    char key[] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char original[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
 
    if (q == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            for (int j = 0; original[j] != '\0'; j++) {
                if (s[i] == original[j]) {
                    s[i] = key[j];
                    break;
                }
            }
        }
    } else {
        for (int i = 0; s[i] != '\0'; i++) {
            for (int j = 0; key[j] != '\0'; j++) {
                if (s[i] == key[j]) {
                    s[i] = original[j];
                    break;
                }
            }
        }
    }
 
    printf("%s\n", s);
 
    return 0;
}
