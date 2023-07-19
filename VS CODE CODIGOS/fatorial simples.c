#include<stdio.h>

int main(){

    int x,fatorial = 1;
    scanf("%d",&x);

   for(int i = 1; i <= x; i++) {
        fatorial *= i;
        }
        printf("%d\n",fatorial);
}