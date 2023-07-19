#include <stdio.h>

int main() {
    int numero, total = 0, cont = 0;
    double media;

    while (1) {
        scanf("%d", &numero);

        if (numero < 0)
            break;

        total += numero;
        cont++;
    }

    
     media = (double)total / cont;
        printf("%.2f\n", media);

    return 0;
}
