#include<stdio.h>

main(){

    int A,N,i,soma=0;

   scanf("%d %d", &A, &N);
    while(N<=0)
        scanf("%d", &N);

    for(i=1;i<=N;i++){
        soma+=A;
        A++;
    }
    printf("%d\n",soma);  // ordem ,influencia simmm 
    return 0;
}
