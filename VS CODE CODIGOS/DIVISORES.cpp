#include<stdio.h>
 int main()
 {
  int i,c=0,num;

  scanf("%d",&num);
  for(i=1;i<=num;i++) // testa de 1 ao num;
  {
     if(num%i==0)
     {
        printf("%d\n",i);
        c++;
     }
  }
  
 }