#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        unsigned int A, B;
        scanf("%u %u", &A, &B);

        // Verifica se os últimos dígitos de A correspondem a B
        while (B > 0) {
            if (A % 10 != B % 10) {
                printf("nao encaixa\n");
                break;
            }

            A /= 10;
            B /= 10;

            if (B == 0) {
                printf("encaixa\n");
            }
        }
    }

    return 0;
}
