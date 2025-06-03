#include <stdio.h>

int sumaEnteros(int number) {
    if (number == 1)
        return 1;
    else
        return number + sumaEnteros(number - 1);
}

int main() {
    int n;
    printf("Ingrese número a sumar: ");
    if (scanf("%d", &n) == 1) {
        printf("Suma: %ld\n", sumaEnteros(n));
    } else {
        printf("Error: Ingrese un número válido...\n");
    }
    return 0;
}
