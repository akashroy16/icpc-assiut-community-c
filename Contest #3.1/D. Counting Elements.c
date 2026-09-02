#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int a[1000];
    int freq[1002] = {0};
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (freq[a[i] + 1] > 0) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
