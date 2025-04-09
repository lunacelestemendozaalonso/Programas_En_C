#include <stdio.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
 
// Función para cambiar el color
void setColor(const char* color) {
    printf("%s", color);
}

int main() {
    float num1, num2;
    int ope;
    float resultado;

    printf("\033[2J");

    setColor("\033[7;32m");
    gotoxy(10, 3);
    printf("%s", "Calculadora básica con gotoxy y switch-case");


    setColor("\033[4;30m");
    gotoxy(10, 5);
    printf("%s", "Menú de operaciones:");

  
    
    gotoxy(12, 7);
    setColor("\033[7;34m");
    printf("%s ", "1:");

    setColor("\033[0m");
    printf("%s ", " Sumar");

    gotoxy(12, 8);
    setColor("\033[7;36m");
    printf("%s ", "2:");
    
    setColor("\033[0m");
    printf("%s ", " Restar ");
    gotoxy(12, 9);
    setColor("\033[7;32m");
    printf("%s ", "3:");
    setColor("\033[0m");
    printf("%s ", " Multiplicar ");
    gotoxy(12, 10);
    setColor("\033[7;35m");
    printf("%s ", "4:");
    setColor("\033[0m");
    printf("%s ", " Division ");
    gotoxy(12, 12);
    setColor("\033[0m");
    printf("%s ", "Seleccione una opcion ");
    setColor("\033[7;33m");
    printf("%s ", "(1-4)");
    setColor("\033[0m");
    printf("%s ", ":");
    
return 0;

}