#include <stdio.h>
#include <stdlib.h>

// Factorial
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Suma de 1 a n
int suma(int n) {
    if (n == 0) return 0;
    return n + suma(n - 1);
}

// Contador regresivo
void contar(int n) {
    if (n == 0) {
        printf("¡Despegue!\n");
        return;
    }
    printf("%d\n", n);
    contar(n - 1);
}

// Potencia
int potencia(int base, int exponente) {
    if (exponente == 0) return 1;
    return base * potencia(base, exponente - 1);
}

// Menú principal
int main() {
    int opcion;
    do {
        printf("\n===== MENÚ DE RECURSIVIDAD =====\n");
        printf("1. Factorial\n");
        printf("2. Fibonacci\n");
        printf("3. Suma de 1 a N\n");
        printf("4. Contar regresivamente\n");
        printf("5. Potencia (base^exponente)\n");
        printf("0. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        int num, base, exp;

        switch (opcion) {
            case 1:
                printf("Ingresa un número: ");
                scanf("%d", &num);
                printf("Factorial de %d es %d\n", num, factorial(num));
                break;
            case 2:
                printf("Ingresa la posición en la serie de Fibonacci: ");
                scanf("%d", &num);
                printf("Fibonacci en la posición %d es %d\n", num, fibonacci(num));
                break;
            case 3:
                printf("Ingresa un número: ");
                scanf("%d", &num);
                printf("La suma de los primeros %d números es %d\n", num, suma(num));
                break;
            case 4:
                printf("Ingresa desde qué número contar: ");
                scanf("%d", &num);
                contar(num);
                break;
            case 5:
                printf("Ingresa la base: ");
                scanf("%d", &base);
                printf("Ingresa el exponente: ");
                scanf("%d", &exp);
                printf("%d^%d = %d\n", base, exp, potencia(base, exp));
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida\n");
        }
    } while (opcion != 0);

    return 0;
}