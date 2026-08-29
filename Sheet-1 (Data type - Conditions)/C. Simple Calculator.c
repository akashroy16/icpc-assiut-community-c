#include <stdio.h>
 int main()
 {
    long long X,Y,c,d,e;
    scanf("%lld%lld",&X,&Y);
    c=X+Y;
    d=X*Y;
    e=X-Y;
 
    printf("%lld + %lld = %lld\n",X,Y,c);
    printf("%lld * %lld = %lld\n",X,Y,d);
    printf("%lld - %lld = %lld\n",X,Y,e);
 
 
 
    return 0;
 