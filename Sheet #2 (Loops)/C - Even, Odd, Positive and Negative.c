#include <stdio.h>
 
int main()
{
    int N;
    scanf("%d",&N);
    int e=0,o=0,p=0,n=0;
    int num;
    
    for (int i = 0; i < N; i++){
    scanf("%d",&num);
    if(num%2==0){
        e++;
     }
     else{
         o++;
     }
     if (num > 0) {
            p++;
        } else if (num < 0) {
            n++;
        }
    }
    printf("Even: %d\n", e);
    printf("Odd: %d\n", o);
    printf("Positive: %d\n", p);
    printf("Negative: %d\n", n);
    
    return 0;
}
