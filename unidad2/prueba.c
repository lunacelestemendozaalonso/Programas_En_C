#include <stdio.h>

void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s ", nombre);

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void saveMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    FILE *archivo = fopen("../matriz.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo. ");
        return;
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            fprintf(archivo, "%d ", matriz[i][j]);
        }
        fprintf(archivo, " ");
    }
    fclose(archivo);
    printf("Matriz guardada en 'matriz.txt' exitosamente. ");
}

void imprimirMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s ", nombre);
    printf("Matriz ingresada: ");

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf(" ");
    }
}

void MulMatriz(int filas, int columnas, int numero, int matriz1[filas][columnas], int matrizr[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizr[i][j] = matriz1[i][j] * numero;
        }
    }
}

int main() {
    int filas, columnas, numero;

    printf("Ingrese el numero con el que multiplicar: ");
    scanf("%d", &numero);

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    int matriz_a[filas][columnas];
    int matriz_r[filas][columnas];

    llenarMatriz("Matriz A", filas, columnas, matriz_a);
    imprimirMatriz("Matriz A", filas, columnas, matriz_a);
    MulMatriz(filas, columnas, numero, matriz_a, matriz_r);
    imprimirMatriz("Resultado", filas, columnas, matriz_r);
    saveMatriz(filas, columnas, matriz_r); 

    return 0;
}