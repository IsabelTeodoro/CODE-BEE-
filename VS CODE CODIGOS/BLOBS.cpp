#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {

        int cont = 0;
        double c;

        scanf("%lf", &c);

        while (c > 1.0)
        {
            c /= 2.0;
            cont++;
        }
        printf("%d dias\n", cont);
    }
}
