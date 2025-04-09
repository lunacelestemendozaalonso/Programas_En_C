#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3
#define LONG 20 

int main() {
    char matriz[FILAS][COLUMNAS][LONG];

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Ingrese una palabra  ");
            scanf("%s", matriz[i][j]);
        }
    }

    printf(" Matriz de palabras: ");
    printf("----------------------------------------- "); 
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("| %-10s ", matriz[i][j]); 
        }
        printf("| "); 
        printf("---------------------------------------- "); 
    }

    return 0;
}
