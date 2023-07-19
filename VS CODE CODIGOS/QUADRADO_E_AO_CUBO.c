#include<stdio.h>
#include <stdlib.h>
int main(){
int X,i,Y;
scanf("%d %d",&X,&Y);
for(i=1;i<=Y;i++){
printf("%3d",i);
if(i % X == 0)
printf("\n");
}
}
