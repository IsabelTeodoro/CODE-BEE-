#include<iostream>

main(){

long long int x,y;
long long int sub;

while(scanf("%lld %lld", &x,&y) != EOF) {

if(x>y){
    sub=x-y;
}else{
    sub=y-x;
}
printf("%lld\n",sub);

}

}


