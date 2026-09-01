#include <stdio.h>
 
int main() {
    int T, N;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d", &N);
        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }
        
        long long count = 0;
        int length = 1;
        
        for (int i = 1; i < N; i++) {
            if (arr[i] >= arr[i - 1]) {
                length++;
            } else {
                count += (long long)(length * (length + 1)) / 2;
                length = 1;
            }
        }
        
        count += (long long)(length * (length + 1)) / 2;
        
        printf("%lld\n", count);
    }
    
    return 0;
}
