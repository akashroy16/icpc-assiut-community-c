#include <stdio.h>

int main() {
    long long n, m, k;
    if (scanf("%lld %lld %lld", &n, &m, &k) == 3) {
        long long count = 0;
        
        long long option1 = n < m ? n : m;
        option1 = option1 < k ? option1 : k;
        
        count += option1;
        n -= option1;
        m -= option1;
        k -= option1;
        
        long long option2 = (n / 2) < k ? (n / 2) : k;
        count += option2;
        
        printf("%lld\n", count);
    }
    return 0;
}
