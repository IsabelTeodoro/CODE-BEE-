#include <stdio.h>

int main() {
    int n, i=0, soma=0;
    
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;  // Encerra o loop quando a entrada for zero
        }

        while (i < 5) {
            if (n % 2 == 0) {
                soma += n;
                i++;
            }

            n++;
        }

        printf("%d\n", soma);
        i = 0;
        soma = 0;
    }
    return 0;
}
