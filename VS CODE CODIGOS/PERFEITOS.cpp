#include <stdio.h>
int main()
{
    int i, num, soma = 0, x;

    scanf("%d", &x);
    for (int j = 0; j < x; j++)
    {

        scanf("%d", &num);
        for (i = 1; i < num; i++) // testa de 1 ao num-1 ;
        {
            if (num % i == 0)
            {
                soma += i;
            }
        }

        if (soma == num)
        {
            printf("%d eh perfeito\n", num);
        }
        else
        {
            printf("%d nao eh perfeito\n", num);
        }
        soma = 0;
    }
}