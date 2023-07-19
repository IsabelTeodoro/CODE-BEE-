#include <iostream>
int main(){

int I,G,n, vi=0,vg=0,emp=0, cont=0;

do{
scanf("%d %d",&I,&G);
if(I>G){
   vi++;
}
if(G>I){
    vg++;
}
if(I==G){
    emp++;
}
printf("Novo grenal (1-sim 2-nao)\n");
scanf("%d",&n);
cont++;
}while(n==1);
printf("%d grenais\n",cont);
printf("Inter: %d\n",vi);
printf("Gremio: %d\n",vg);
printf("Empates: %d\n",emp);
if(vi>vg)
    printf("Inter venceu mais\n");
else if(vg>vi)
    printf("Gremio venceu mais\n");
else
    printf("Nao houve vencedor\n");

}