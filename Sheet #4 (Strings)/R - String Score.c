#include <stdio.h>
 
char s[2000005];
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    scanf("%s", s);
    
    long long score = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'V') {
            score += 5;
        } else if (s[i] == 'W') {
            score += 2;
        } else if (s[i] == 'X') {
            if (i + 1 < n) {
                i++;
            }
        } else if (s[i] == 'Y') {
            if (i + 1 < n) {
                s[n] = s[i + 1];
                n++;
                i++;
            }
        } else if (s[i] == 'Z') {
            if (i + 1 < n) {
                if (s[i + 1] == 'V') {
                    score /= 5;
                    i++;
                } else if (s[i + 1] == 'W') {
                    score /= 2;
                    i++;
                }
            }
        }
    }
    
    printf("%lld\n", score);
    
    return 0;
}
