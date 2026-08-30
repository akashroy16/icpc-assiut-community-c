#include <stdio.h>
int main() {
int l1, r1, l2, r2;
scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
int left = (l1 > l2) ? l1 : l2;
int right = (r1 < r2) ? r1 : r2;
if (left <= right) {
printf("%d %d\n", left, right);
}
else {
printf("-1\n"); 
}
return 0;
}
