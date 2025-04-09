#include <stdio.h>
int main () {
    int cal1 = 8, cal2 = 9, cal3 = 7;
             // Calcular el promedio
             int promedio = (cal1 + cal2 + cal3) / 3;
             // Mostrar el resultado
             printf("Las calificaciones son: %.1d, %.1d, %.1d ", cal1, cal2, cal3);
             printf("El promedio es: %.2d ", promedio);
             return 0;
}