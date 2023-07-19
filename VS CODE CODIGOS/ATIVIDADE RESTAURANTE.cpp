#include <stdio.h>
#include <iostream>
#include <string>
int main(void)
{
double a, n1;
	int op;
 struct restaurante
{
    char nome_Rest[40];
    char endereco[50];
    char tipo_comida[30];
    int nota;
};

struct restaurante Restaurante;


printf("\n---------- Cadastro de Restaurante -----------\n\n\n");

printf("Nome do restaurante ......: ");
fflush(stdin);
fgets(Restaurante.nome_Rest, 40, stdin);
  printf("Endereco ......: ");
  fflush(stdin);
  fgets(Restaurante.endereco, 50, stdin);
  printf("Tipo comida ......: ");
  fflush(stdin);
  fgets(Restaurante.tipo_comida, 30, stdin);
  printf("Informe a nota do restaurante entre 0 e 5..: ");
  
 do{
 do{
			scanf("%d", &Restaurante.nota);
			if((Restaurante.nota>=0) || (Restaurante.nota<=5)) printf("nota invalida\n");
			else n1=a;
		}while(n1!=a);

    do{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &Restaurante.nota);
		}while((op!=1) && (op!=2));
 }while(op!=2);
  


 printf("\n\n --------- Lendo os dados da struct ---------\n\n");
 
  printf("Nome do Restaurante...........: %s", Restaurante.nome_Rest);
  printf("Endereço .....: %s", Restaurante.endereco);
  printf("Tipo comida .....: %s", Restaurante.tipo_comida);
  printf("Nota do Restaurante ...: %d\n" , Restaurante.nota);
  
  return(0);
}