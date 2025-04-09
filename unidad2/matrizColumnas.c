#include <stdio.h>

#define FILAS 6
#define COLUMNAS 6

int main() {
    // Definiendo la matriz con valores dados manualmente
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };


    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (j % 2 == 0) {  
                printf("%2d ", matriz[i][j]);
            } else {  
                printf(" # ");
            }
        }
        printf(" ");  
}
return 0;
}