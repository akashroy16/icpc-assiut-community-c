#include <stdio.h>

int main() {
    double x, p;
    if (scanf("%lf %lf", &x, &p) == 2) {
        double original = p / (1.0 - (x / 100.0));
        printf("%.2f\n", original);
    }
    return 0;
}