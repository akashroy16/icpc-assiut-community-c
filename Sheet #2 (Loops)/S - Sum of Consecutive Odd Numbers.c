#include <stdio.h>
 
int main() {
    int T;
    scanf("%d", &T);
 
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
 
        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }
 
        int sum = 0;
        // Start from the next odd number after X
        if (X % 2 == 0) {
            X++;
        } else {
            X += 2;
        }
        
        // Sum odd numbers up to Y, excluding Y
        for (int i = X; i < Y; i += 2) {
            sum += i;
        }
 
        printf("%d\n", sum);
    }
 
    return 0;
}
