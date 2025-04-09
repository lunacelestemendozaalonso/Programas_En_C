#include <stdio.h>

float celsius_a_kelvin(float celsius) {
    return celsius + 273.15;
}

int main() {
    float celsius;
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    printf("La temperatura en grados Kelvin es: %.2f ", celsius_a_kelvin(celsius));

    return 0;
}