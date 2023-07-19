#include <stdio.h>

int main() {
    int x, i;
    int a = 0, b = 1, c;

    scanf("%d", &x);

    if (x >= 1) {
        printf("%d", a);
    }
    if (x >= 2) {
        printf(" %d", b);
    }

    for (i = 2; i < x; i++) {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    
    printf("\n"); 
    
    return 0;
}
