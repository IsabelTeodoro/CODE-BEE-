#include <stdio.h>

int main() {
     
     int lesmas,veloc;
     int m_veloc=0;

     while(scanf("%d", &lesmas) != EOF) {

         for (int i = 0; i < lesmas; i++) {

            scanf("%d",&veloc);

            if(veloc < 10){
                veloc=1;
                

            }else if(veloc >=10 && veloc<20){
                veloc=2;
                
                
            }else{
                veloc=3;

            }

                if (veloc > m_veloc){
                    m_veloc=veloc;
                }
         }
          printf("%d\n", m_veloc);
          m_veloc=0;
        
     }
     
     return 0;
}
