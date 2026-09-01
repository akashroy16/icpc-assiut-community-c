#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);  
    int A[N];  
     
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);  
    }
    int min=A[0],po=1;
   
    for (int i = 0; i < N; i++) {
        if (A[i]<min){
        min=A[i];
        po=i+1;
        
        }
        
         
    }
 
     printf("%d %d",min,po); 
   
    return 0;
}
