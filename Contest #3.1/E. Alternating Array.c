#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int ops1 = 0;
    int ops2 = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        
        if (i % 2 == 0) {
            if (x < 0) ops1++;
            else ops2++;
        } else {
            if (x > 0) ops1++;
            else ops2++;
        }
    }
    
    printf("%d\n", ops1 < ops2 ? ops1 : ops2);
    
    return 0;
}
