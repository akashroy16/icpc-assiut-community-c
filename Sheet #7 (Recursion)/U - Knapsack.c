#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int weight[], int value[], int n, int w) {
    if (n == 0 || w == 0) return 0;
    if (weight[n - 1] > w) {
        return knapsack(weight, value, n - 1, w);
    } else {
        int include = value[n - 1] + knapsack(weight, value, n - 1, w - weight[n - 1]);
        int exclude = knapsack(weight, value, n - 1, w);
        return max(include, exclude);
    }
}

int main() {
    int n, w;
    if (scanf("%d %d", &n, &w) == 2) {
        int weight[n], value[n];
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &weight[i], &value[i]);
        }
        printf("%d\n", knapsack(weight, value, n, w));
    }
    return 0;
}
