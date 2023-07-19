#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    int a,b;
    int q,r=0;

    scanf("%d %d",&a,&b);

 q = (int) floor((double) a / b); //floor() da biblioteca <math.h> 
                                    //para garantir que o quociente q seja arredondado para baixo em vez de truncado para zero.
 r = a - (q * b);     

if (r < 0) {
    r += abs(b); // abs valor absoluto de um numero ou resultado
        q += 1;
}

    printf("%d %d\n",q,r);

    
}