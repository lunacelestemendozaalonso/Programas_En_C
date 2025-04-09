//examen parcial 
#include <stdio.h>
int main (){
    int espacios1=0 ; 
    int espacios=8 ; 
    int asteriscos=1;
             for (int i=4; i>=0; i--) {
             for (int j=1; j<=espacios; j++) {
             printf ( "%4s", "");
            }   
            espacios--;
             for (int k=1; k<=asteriscos; k++){
             printf ("%4s", "*");
            }
             asteriscos=asteriscos+2;
             printf (" ");
            }
  
    int asteriscos1=18;
    for (int i=3; i>=0; i--) {
        for (int j=1; j<=espacios1; j++) {
            printf ( "%4s", "");
           }   
           espacios1++;
   
    for(int j=1; j<= asteriscos1; j++){
        printf("%4s"," *");
    }
    asteriscos1-=2;
    printf (" ");
}
  
}