#include <stdio.h>

int main() {

int n,a,b,t=0;
double a1,b1;
    scanf("%d",&n);
    for(int i=1; i <= n; i++)
    {
        t=0;
    scanf("%d %d %lf %lf",&a,&b,&a1,&b1);
    while(a<=b)
    {
     a*=(a1/100.0)+1.0;
     b*=(b1/100.0)+1.0;
    t++;
        if (t>100)
        {
        printf("Mais de 1 seculo.\n");
        break;
        }
    }
    if(t<=100)
        printf("%d anos.\n",t);
}
return 0;

}