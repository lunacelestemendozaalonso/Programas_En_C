#include <stdio.h>
#include <stdbool.h>

bool raiz(int val) {
    for (int i = 0; i <= 100; i++) {
        if (i * i == val) {
            return true;
        }
    }
    return false;
}

int calcularRaizEntera(int num) {
    for (int i = 0; i <= 100; i++) {
        if (i * i == num) {
            return i;
        }
    }
    return 0;
}

void llenarMatriz(char matriz[][100], int raizNum) {
    for (int i = 0; i < raizNum; i++) {
        for (int j = 0; j < raizNum; j++) {
            printf("Caracter[%d][%d]: ", i, j);
            scanf(" %c", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(char matriz[][100], int raizNum) {
    printf(" Matriz: ");
    for (int i = 0; i < raizNum; i++) {
        for (int j = 0; j < raizNum; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf(" ");
    }
}

void matrizAArreglo(char matriz[][100], char arreglo[], int raizNum) {
    int arr = 0;
    for (int i = 0; i < raizNum; i++) {
        for (int j = 0; j < raizNum; j++) {
            arreglo[arr] = matriz[i][j];
            arr++;
        }
    }
}

void imprimirArreglo(char arreglo[], int tamaño) {
    printf(" Arreglo: ");
    for (int i = 0; i < tamaño; i++) {
        printf("%c ", arreglo[i]);
    }
    printf(" ");
}

int main() {
    int num;

    printf("Introduce un numero: ");
    scanf("%d", &num);

    bool tieneRaiz = raiz(num);

    if (tieneRaiz == false) {
        printf("El numero no tiene raiz ");
        return 0;
    }

    int raizNum = calcularRaizEntera(num);

    char matriz[100][100];
    char arreglo[10000]; 

    llenarMatriz(matriz, raizNum);
    imprimirMatriz(matriz, raizNum);
    
    matrizAArreglo(matriz, arreglo, raizNum);
    imprimirArreglo(arreglo, raizNum * raizNum);

    return 0;
}
