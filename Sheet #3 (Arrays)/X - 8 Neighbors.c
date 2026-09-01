#include <stdio.h>
 
int main() {
    int N, M, X, Y;
    scanf("%d %d", &N, &M);
    
    char A[N][M];
    
    for (int i = 0; i < N; i++) {
        scanf("%s", A[i]);
    }
    
    scanf("%d %d", &X, &Y);
    X--; Y--;  // Adjust for 0-based indexing
 
    int directions[8][2] = {
        {-1, 0}, {1, 0}, {0, -1}, {0, 1},  // 4 neighbors (up, down, left, right)
        {-1, -1}, {-1, 1}, {1, -1}, {1, 1}  // 4 diagonals
    };
 
    int isValid = 1;
    
    for (int i = 0; i < 8; i++) {
        int newX = X + directions[i][0];
        int newY = Y + directions[i][1];
        
        if (newX >= 0 && newX < N && newY >= 0 && newY < M) {
            if (A[newX][newY] != 'x') {
                isValid = 0;
                break;
            }
        }
    }
    
    if (isValid) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
