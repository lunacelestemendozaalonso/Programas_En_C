#include <stdio.h>

void pedirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Dame valor A[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    printf("Matriz original: ");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf(" ");
    }
}

void trasponerMatriz(int filas, int columnas, int matriz[filas][columnas], int traspuesta[columnas][filas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            traspuesta[j][i] = matriz[i][j];
        }
    }
}

void imprimirMatrizTraspuesta(int filas, int columnas, int matriz[columnas][filas]) {
    printf("Matriz traspuesta: ");
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf(" ");
    }
}

int main() {
    int filas, columnas;

    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);



    int matriz[filas][columnas];
    int traspuesta[columnas][filas]; 

    pedirMatriz(filas, columnas, matriz);
    imprimirMatriz(filas, columnas, matriz);

    trasponerMatriz(filas, columnas, matriz, traspuesta);
    imprimirMatrizTraspuesta(filas, columnas, traspuesta);

    return 0;
}
