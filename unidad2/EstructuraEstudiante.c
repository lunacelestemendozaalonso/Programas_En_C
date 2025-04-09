#include <stdio.h>

struct Estudiante{
    char nombre[50];
    int edad;
    float promedio;
};

int main (){
    struct Estudiante estudiante1= {"Alejandro Díaz",24,8.5};
    printf("Nombre: %s ", estudiante1.nombre);
    printf("Edad: %d ", estudiante1.edad);
    printf("Promedio: %.2f ",estudiante1.promedio);
    return 0;
}