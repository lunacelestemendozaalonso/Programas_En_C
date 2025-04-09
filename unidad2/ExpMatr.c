#include <stdio.h>
#define maximo 30  


void imprimirMatriz(int matriz[maximo][maximo], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%5d ", matriz[i][j]);
        }
        printf(" ");
    }
}


void multiplicarMatrices(int matriz1[maximo][maximo], int matriz2[maximo][maximo], int resultado[maximo][maximo], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnas; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}


void elevarMatriz(int matriz[maximo][maximo], int resultado[maximo][maximo], int exponente, int filas, int columnas) {
    int temp[maximo][maximo];

    for (int exp = 1; exp <= exponente; exp++) {
        multiplicarMatrices(resultado, matriz, temp, filas, columnas);
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                resultado[i][j] = temp[i][j];
            }
        }
    }
}
void llenar(int n, int matriz[maximo][maximo], char nombre) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Dame valor de la matriz %c [%d][%d]: ", nombre, i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int main() {
    int filas, columnas, exponente;

    
    printf("Ingrese el tamaño de la matriz (filas/columnas): ");
    scanf("%d", &filas);
    columnas = filas;  

    int matriz[maximo][maximo], resultado[maximo][maximo];

    llenar(n,matriz)
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    elevarMatriz(matriz, resultado, exponente, filas, columnas);
    printf("Resultado de la matriz elevada a la potencia %d: ", exponente);
    imprimirMatriz(resultado, filas, columnas);

    return 0;
}\\\\\\\\\\
