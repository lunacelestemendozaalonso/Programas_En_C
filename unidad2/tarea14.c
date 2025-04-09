#include <stdio.h>
#include <math.h>

void ecuacion(float a, float b, float c) {
    float discriminante = (b * b) - (4 * a * c);

    if (discriminante > 0) {
        float x1 = (-b + sqrt(discriminante)) / (2 * a);
        float x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las soluciones son: x1 = %.2f y x2 = %.2f ", x1, x2);
    } else if (discriminante == 0) {
        float x = -b / (2 * a);
        printf("La solución única es: x = %.2f ", x);
    } else {
        printf("No hay solucion ");
    }
}

int main() {
    float a, b, c;
    
    printf("Ingresa a: ");
    scanf("%f", &a);
    
    if (a == 0) {
        printf("No es una ecuación de segundo grado. ");
        return 1;
    }

    printf("Ingresa b: ");
    scanf("%f", &b);
    printf("Ingresa c: ");
    scanf("%f", &c);

    ecuacion(a, b, c);

    return 0;
}