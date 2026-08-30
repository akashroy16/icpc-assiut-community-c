#include<stdio.h>
#include <math.h>
int main(){
 
 
   int A,B,C;
   scanf("%d%d%d",&A,&B,&C);
 
    int min = fmin(fmin(A, B), C);
    int max = fmax(fmax(A, B), C);
 
    printf("%d ", min);
    printf("%d\n", max);
 
 
 
 
return 0;
 
}
