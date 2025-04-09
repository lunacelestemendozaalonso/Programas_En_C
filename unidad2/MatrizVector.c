#include <stdio.h>

void llenarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    printf("Llenando la matriz (%dx%d): ", filas, columnas);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingresa el valor para la posicion A[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void llenarVector(int tamaño, int vector[tamaño]) {
    printf("Llenando el vector columna (%dx1): ", tamaño);
    for (int i = 0; i < tamaño; i++) {
        printf("Ingresa el valor para la posicion [%d]: ", i); 
        scanf("%d", &vector[i]);
    }
}

void multiplicarMatrizPorVector(int filas, int columnas, int matriz[filas][columnas], int vector[columnas], int resultado[filas]) {
    for (int i = 0; i < filas; i++) {
        resultado[i] = 0;
        for (int j = 0; j < columnas; j++) {
            resultado[i] += matriz[i][j] * vector[j];
        }
    }
}

void imprimirResultado(int tamaño, int vector[tamaño]) {
    printf("Resultado (vector columna): ");
    for (int i = 0; i < tamaño; i++) {
        printf("%4d ", vector[i]);
    }
}

int main() {
    int filas, columnas;

    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];
    int vector[columnas];
    int resultado[filas];

    llenarMatriz(filas, columnas, matriz);
    llenarVector(columnas, vector);
    multiplicarMatrizPorVector(filas, columnas, matriz, vector, resultado);
    imprimirResultado(filas, resultado);

    return 0;
}