#include<iostream>
#include<math.h>

int main(){

int n,x,aux=0;

scanf("%d",&n);
for(int i = 0; i < n; ++i){// casos de teste
scanf("%d",&x);
aux=0;
for(int j=2;j<=sqrt(x);j++){//A ideia é que, para verificar se um número x é primo, não é necessário testar todos os números até x - 1. Podemos realizar uma otimização observando que, se x for divisível por algum número j maior que 1 e menor ou igual à sua raiz quadrada, então x também será divisível por um número maior que a sua raiz quadrada.

//Portanto, no código fornecido, o loop interno é executado apenas até sqrt(x). Ele verifica se x é divisível por algum número j entre 2 e a raiz quadrada de x. Se encontrar algum divisor, incrementa a variável aux. Caso contrário, se aux permanecer igual a 0 após o loop, significa que x é um número primo.
if(x%j==0){
   aux++;
}
}
if(aux==0){
    printf("Prime\n");
}else{
    printf("Not Prime\n");
}
}
}
