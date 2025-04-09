#include <stdio.h>

#define maximo 40  


void imprimirMatriz(int matriz[maximo][maximo], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%5d ", matriz[i][j]);
        }
        printf(" ");
    }
}

void llenarMatriz(int matriz[maximo][maximo], int filas, int columnas, char nombre) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la matriz %c en la posición [%d][%d]: ", nombre, i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void multiplicarMatrices(int matriz1[maximo][maximo], int matriz2[maximo][maximo], int resultado[maximo][maximo], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] * matriz2[i][j];  
        }
    }
}

int main() {
    int filas, columnas;

    printf("Ingrese el tamaño de la matriz: ");
    scanf("%d", &filas);
    columnas = filas; 

    int matriz1[maximo][maximo], matriz2[maximo][maximo], resultado[maximo][maximo];


    printf("Ingrese los valores de la matriz 1: ");
    llenarMatriz(matriz1, filas, columnas, '1');  

    printf("Ingrese los valores de la matriz 2: ");
    llenarMatriz(matriz2, filas, columnas, '2'); 

    
    multiplicarMatrices(matriz1, matriz2, resultado, filas, columnas);


    printf("Resultado de la multiplicación (elemento por elemento): ");
    imprimirMatriz(resultado, filas, columnas);

    return 0;
}
