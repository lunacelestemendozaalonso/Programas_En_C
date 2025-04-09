#include <stdio.h>

float convertir_divisa(float cantidad, float precio) {
    return cantidad * precio;
}

int main() {
    char moneda[10];
    float cantidad, precio;

    printf("Ingrese la moneda (ejemplo: USD, EUR, MXN): ");
    scanf("%s", moneda);
    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);
    printf("Ingrese el precio de conversión: ");
    scanf("%f", &precio);

    printf("El equivalente es: %.2f %s ", convertir_divisa(cantidad, precio), moneda);

    return 0;
}