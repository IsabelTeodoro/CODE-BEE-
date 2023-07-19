#include <stdio.h>
#include <string.h>

int main()
{
    char numero[2000];
    int flag = 0; // é um valor específico fornecido após o último dado de entrada, que serve para indicar o fim dos dados de entrada.

    while (scanf("%s", numero) != EOF) // por causa do quando volume de dados de entrada  e 
    {
        if (flag != 0)      //O programa entra em um loop while que lê a entrada até o fim do arquivo (EOF). Dentro do loop, a primeira parte 
                                // é responsável por verificar se é necessário imprimir uma nova linha em branco antes da saída do caso de teste atual.
            printf("\n");    
        else
            flag = 1;

        int multi4 = 0, multi100 = 0, multi400 = 0;              //Em seguida, são declaradas variáveis inteiras multi4, multi100 e 
                                                                // multi400 para calcular os respectivos múltiplos. Um loop for é usado 
                                                                 //para percorrer cada dígito do número de entrada. 
                                                                //Os valores são convertidos para inteiros usando a fórmula (numero[i] - '0'). 
                                                                //Em cada iteração, os múltiplos são atualizados multiplicando por 10 e adicionando o próximo dígito. 
                                                                //O operador % é usado para manter o valor dentro do limite correto (4, 100 e 400).
        int i, len = strlen(numero);

        for (i = 0; i < len; ++i)
        {
            multi4 = (multi4 * 10 + (numero[i] - '0')) % 4;
            multi100 = (multi100 * 10 + (numero[i] - '0')) % 100;
            multi400 = (multi400 * 10 + (numero[i] - '0')) % 400;
        }

        if ((multi400 == 0) || (multi4 == 0 && multi100 != 0))
        {
            int leapYear = 1, multi15 = 0, multi55 = 0;

            for (i = 0; i < len; ++i)
            {
                multi15 = (multi15 * 10 + (numero[i] - '0')) % 15;
                multi55 = (multi55 * 10 + (numero[i] - '0')) % 55;
            }

            printf("This is leap year.\n");

            if (multi15 == 0)
                printf("This is huluculu festival year.\n");
            if (multi55 == 0)
                printf("This is bulukulu festival year.\n");
        }
        else
        {
            int multi15 = 0;

            for (i = 0; i < len; ++i)
                multi15 = (multi15 * 10 + (numero[i] - '0')) % 15;

            if (multi15 == 0)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }
    }

    return 0;
}
//Em seguida, temos um bloco if-else que determina o tipo de ano com base nos múltiplos calculados. 
///Se o número for um ano bissexto, o código dentro do primeiro if é executado. 
//É definida uma variável leapYear como 1 para indicar que é um ano bissexto. 
//Em seguida, são calculados os múltiplos de 15 e 55 usando outro loop for.
// Se o múltiplo de 15 for zero, é impressa a mensagem "This is huluculu festival year". 
//Se o múltiplo de 55 for zero, é impressa a mensagem "This is bulukulu festival year". Por fim, é impressa a mensagem "This is leap year".
//Caso contrário, se não for um ano bissexto, o código dentro do else é executado.
 //É calculado apenas o múltiplo de 15 e, se for zero, é impressa a mensagem "This is huluculu festival year". 
 //Caso contrário, é impressa a mensagem "This is an ordinary year".

//O loop continua para o próximo caso de teste até que a entrada seja concluída.

//Espero que essa explicação passo a passo tenha esclarecido o funcionamento do código.
 //Se você tiver mais dúvidas, fique à vontade para perguntar.