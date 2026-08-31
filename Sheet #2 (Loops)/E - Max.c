#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
 
    int n,max=0;
    for(int i=1; i<=a; i++)
    {
        scanf("%d",&n);
        if(n > max)
        {
            max = n;
        }
 
 
    }
    printf("%d\n",max);
    return 0;
}
