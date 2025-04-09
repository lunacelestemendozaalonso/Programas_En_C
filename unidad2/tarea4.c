#include <stdio.h>

int sumar(int menor, int mayor) {
    int suma = 0;
    for (int i = menor; i <= mayor; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int menor, mayor;
    printf("Ingrese un número menor: ");
    scanf("%d", &menor);
    printf("Ingrese un número mayor: ");
    scanf("%d", &mayor);
    
    if (menor > mayor) {
        printf("Error: El primer número debe ser menor que el segundo. ");
        return 1;
    }

    printf("Resultado %d ", sumar(menor, mayor));

    return 0;
}
