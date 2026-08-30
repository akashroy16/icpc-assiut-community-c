#include<stdio.h>
#include<math.h>
int main(){
    double m,n;
    scanf("%lf%lf",&m,&n);
    int a= floor(m / n);
    int b= ceil(m / n);
    int c= round(m / n);
    printf("floor %.0lf / %.0lf = %d\n",m,n,a);
    printf("ceil %.0lf / %.0lf = %d\n",m,n,b);
    printf("round %.0lf / %.0lf = %d\n",m,n,c);
return 0;
 
}
