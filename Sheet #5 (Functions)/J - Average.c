#include <stdio.h>
 
double calculate_average(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}
 
int main() {
    int N;
    scanf("%d", &N);
    
    double arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%lf", &arr[i]);
    }
    
    double average = calculate_average(arr, N);
    printf("%.6f\n", average);
    
    return 0;
}
