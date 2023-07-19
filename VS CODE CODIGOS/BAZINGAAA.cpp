#include<stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

char sheldom[20];
char raj[20];
int num,cont=0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
    cont++;
    scanf("%s %s", &sheldom, &raj);

    if (strcmp(sheldom, raj) == 0)
      printf("Caso #%d: De novo!\n", cont);


     else if (strcmp(sheldom, "Spock") == 0 && strcmp(raj, "pedra") == 0 )
      printf("Caso #%d: Bazinga!\n", cont);
    else if (strcmp(sheldom, "Spock") == 0 && strcmp(raj, "tesoura") == 0 )
        printf("Caso #%d: Bazinga!\n", cont);

    else if (strcmp(sheldom, "tesoura") == 0 && strcmp(raj, "papel") == 0 )
      printf("Caso #%d: Bazinga!\n", cont);
       else if (strcmp(sheldom, "tesoura") == 0 && strcmp(raj, "lagarto") == 0)
      printf("Caso #%d: Bazinga!\n", cont);

     else if (strcmp(sheldom, "papel") == 0 && strcmp(raj, "pedra") == 0)
      printf("Caso #%d: Bazinga!\n", cont);
      else if (strcmp(sheldom, "papel") == 0 &&  strcmp(raj, "Spock") == 0)
      printf("Caso #%d: Bazinga!\n", cont);

    else if (strcmp(sheldom, "lagarto") == 0 && strcmp(raj, "Spock") == 0 )
      printf("Caso #%d: Bazinga!\n", cont);
    else if (strcmp(sheldom, "lagarto") == 0 && strcmp(raj, "papel") == 0)
      printf("Caso #%d: Bazinga!\n", cont);

    else if (strcmp(sheldom, "pedra") == 0 && strcmp(raj, "lagarto") == 0)
      printf("Caso #%d: Bazinga!\n", cont);
    else if (strcmp(sheldom, "pedra") == 0 &&  strcmp(raj, "tesoura") == 0)
      printf("Caso #%d: Bazinga!\n", cont);

    else 
        printf("Caso #%d: Raj trapaceou!\n", cont);


    }



}
// A função strcmp() compara os caracteres das duas strings,
// caracter por caracter, até encontrar uma diferença. 
// Ela retorna um valor inteiro com base na diferença encontrada