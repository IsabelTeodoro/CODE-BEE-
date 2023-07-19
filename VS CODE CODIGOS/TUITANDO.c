
#include <stdio.h>
#include <string.h>

int main() {
    char texto[141]; // Consideramos 1 extra para o caractere nulo '\0'
    int limite = 140;

    printf("Digite um texto (limite de 140 caracteres): ");
    fgets(texto, sizeof(texto), stdin);

    // Verifica se o texto é maior que o limite e, se for, trunca para 140 caracteres
    if (strlen(texto) > limite) {
        texto[limite] = '\0';
         printf("MUTE\n");
    }else{
       printf("TWEET\n");
    }

    return 0;
}
