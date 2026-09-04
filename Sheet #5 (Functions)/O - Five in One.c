#include <stdio.h>
#include <math.h>
 
int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
 
int is_palindrome(int num) {
    int original = num, reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}
 
int count_divisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) count++;
    }
    return count;
}
 
int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int max_num = A[0], min_num = A[0], prime_count = 0, palindrome_count = 0;
    int max_divisors = 0, num_with_max_divisors = A[0];
    
    for (int i = 0; i < N; i++) {
        if (A[i] > max_num) max_num = A[i];
        if (A[i] < min_num) min_num = A[i];
        
        if (is_prime(A[i])) prime_count++;
        if (is_palindrome(A[i])) palindrome_count++;
        
        int divisors = count_divisors(A[i]);
        if (divisors > max_divisors) {
            max_divisors = divisors;
            num_with_max_divisors = A[i];
        } else if (divisors == max_divisors && A[i] > num_with_max_divisors) {
            num_with_max_divisors = A[i];
        }
    }
    
    printf("The maximum number : %d\n", max_num);
    printf("The minimum number : %d\n", min_num);
    printf("The number of prime numbers : %d\n", prime_count);
    printf("The number of palindrome numbers : %d\n", palindrome_count);
    printf("The number that has the maximum number of divisors : %d\n", num_with_max_divisors);
    
    return 0;
}
