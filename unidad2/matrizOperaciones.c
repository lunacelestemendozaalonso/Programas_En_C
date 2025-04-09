#include <stdio.h>

#define filas 2
#define columnas 2      

int main() {

    float num1[filas][columnas];
    float num2[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingresa un numero: ");
            scanf("%f", &num1[i][j]);

            printf("Imgresa un numero: ");
            scanf("%f", &num2[i][j]);
            printf(" ");
        }
    }

    printf(" |%10s\t|%10s\t|%10s\t|%10s\t|%15s\t|%10s\t| ","num1", "num2", "suma", "resta", "multiplicacion", "division");
    printf("------------------------------------------------------------------------------------------------------------------------ ");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            float suma = num1[i][j] + num2[i][j];
            float resta = num1[i][j] - num2[i][j];
            float mult = num1[i][j] * num2[i][j];
            float div = num1[i][j] / num2[i][j];

            printf("|%10.2f\t|%10.2f\t|%10.2f\t|%10.2f\t|%15.2f\t|%10.2f\t| ", num1[i][j], num2[i][j], suma, resta, mult, div);
        }
    }

    return 0;
}