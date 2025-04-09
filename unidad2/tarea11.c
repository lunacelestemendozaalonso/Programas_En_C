#include <stdio.h>

float celsius_a_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius;
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    printf("La temperatura en grados Fahrenheit es: %.2f ", celsius_a_fahrenheit(celsius));

    return 0;
}