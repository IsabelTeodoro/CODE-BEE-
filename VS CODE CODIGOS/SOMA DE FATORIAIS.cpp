#include<stdio.h>
#include<stdlib.h>
int main(){

int M,N;
long long int i,j;

while(scanf("%d %d", &M,&N) != EOF) {
        for(i=1;M>1;M=M-1){
            i=i*M;
        }
        for(j=1;N>1;N=N-1){
            j=j*N;

        }
    
            printf("%lld\n",i+j);
}
}