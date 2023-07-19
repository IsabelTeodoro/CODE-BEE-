#include<stdio.h>

int main(){
    int i = 0, n, y, x, soma = 0;

    scanf("%d", &x);

    for(int j = 0; j < x; j++){
        scanf("%d %d", &n, &y);
        i = 0;
        int soma2 = 0;

        while(i < y){
            if(n % 2 != 0){
                
                soma2 += n;
                i++;
            }
            n++;
        }

        printf(" %d\n", soma2);
        soma += soma2;
    }

    return 0;
}
