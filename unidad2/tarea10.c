#include <stdio.h>

float kelvin_a_fahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

int main() {
    float kelvin;
    printf("Ingrese la temperatura en grados Kelvin: ");
    scanf("%f", &kelvin);

    printf("La temperatura en grados Fahrenheit es: %.2f ", kelvin_a_fahrenheit(kelvin));

    return 0;
}