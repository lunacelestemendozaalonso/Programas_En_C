#include <stdio.h>

void setColor(const char* color) {
printf("%s", color);
}

int main (){
    //LIMPIAR PANTALLA 
    printf("\033[2J");

    setColor("\033[4;32m");
    printf(" Bienvenido al programa con marco y colores! ");

    //RESTAURAR COLOR 
    setColor("\033[0m");

    setColor("\033[7;34m");
    printf(" Bienvenido al programa con marco y colores! ");

    setColor("\033[0m");

    setColor("\033[4;34m");
    printf(" Bienvenido al programa con marco y colores! ");
    
    setColor("\033[4;30m");
    printf(" R ");
    setColor("\033[4;31m");
    printf(" U ");
    setColor("\033[4;32m");
    printf(" B ");
    setColor("\033[4;33m");
    printf(" I ");
    setColor("\033[4;34m");
    printf(" C ");
    setColor("\033[4;35m");
    printf(" H ");
    setColor("\033[4;36m");
    printf(" O ");
    setColor("\033[4;37m");
    printf(" T ");
    setColor("\033[4;31m");
    printf(" A ");
    return 0;
}
