#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(){
    int n,x;
    long long int result;

    scanf("%d",&n);

    for(int i = 0; i < n; ++i){// casos de teste

    scanf("%d",&x);

    result=pow(2,x)/12000; // 2 elevado ao numero de casas


       printf("%lld kg\n",result); // converter em quilogramas , a conversao normal é feita em 1000 , porem sao 12 gramas entao, 12*1000= 12000;
    }
}