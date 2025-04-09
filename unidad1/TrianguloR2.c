#include <stdio.h>
int main (){
    int asteriscos=1;
    int espacios=2; 
            for (int i2=6 ; i2>=0;i2--) {
            for (int j2=1; j2<= asteriscos; j2++) {

            printf("%5s", "*");
            
            } 
            asteriscos++;
            printf(" ");
            for(int j2=1; j2<= espacios; j2++){
                printf("%4s"," e");
            }
            }
            return 0;
}