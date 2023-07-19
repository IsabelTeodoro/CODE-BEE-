
#include <stdio.h>
#include <stdlib.h>

int somanm(int n, int m) {
    
    int soma = n + 1;
    if (soma <= m) {
        return soma + somanm(n + 1, m);
    }
    return 0;
}