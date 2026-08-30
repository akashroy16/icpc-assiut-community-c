#include <stdio.h>
 
int main()
{
  double X,Y;
  scanf("%lf%lf",&X,&Y);
  if (X>0 && Y>0){
      printf("Q1");
  }
  else if (X<0 && Y>0){
      printf("Q2");
  }
 else if (X<0 && Y<0){
      printf("Q3");
  }
  else if (X>0 && Y<0){
      printf("Q4");
  }
  else if (X==0 && Y==0){
      printf("Origem");
  }
  else if (X!=0 && Y==0){
      printf("Eixo X");
  }
 else if (X==0 && Y!=0){
      printf("Eixo Y");
  }
 
     return 0;
}
→Judgement Pro
