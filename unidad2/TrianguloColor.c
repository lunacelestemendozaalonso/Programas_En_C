#include <stdio.h>
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
void setColor(const char* color) {
    printf("%s", color);
}
int main (){
    int espacios=6 ; 
    int asteriscos=1;
    printf("\033[2J");
    gotoxy(0, 5);
             for (int i=6; i>=0; i--) {
             for (int j=1; j<=espacios; j++) { 
             printf ( "%4s", "");
            }   
            espacios--;
             for (int k=1; k<=asteriscos; k++){
                setColor("\033[7;34m");
             printf ("%4s", "*");
             setColor("\033[0m");
            }
             asteriscos=asteriscos+2;
             printf ("\n");
            }
}