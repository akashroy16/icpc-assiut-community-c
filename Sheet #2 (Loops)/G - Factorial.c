#include <stdio.h>
int main()
{
    int N,i,X,j;
    long long sum;
 
    scanf("%d",&N);
    for( i =1; i<=N; i++)
    {
         sum=1;
        scanf("%d",&X);
        for( j=1; j<=X; j++)
        {
            sum=sum*j;
        }
        printf("%lld\n",sum);
    }
 
 
 
 
    return 0;
}
