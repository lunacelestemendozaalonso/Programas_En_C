#include <stdio.h>

struct Persona {
    char nombre[50];   // Almacena nombres largos
    int edad;
    char correo[50];
    char telefono[20];
    char nac[30];  // Nacionalidad
    char genero[10];
    char direc[100];  // Dirección
    char enf[50];  // Enfermedad
};

int main() {
    int size;
    
    printf("Ingrese el tamaño del arreglo  ");
    scanf("%d", &size);

    struct Persona arregloPersona[size];  // Arreglo de estructuras

    // Captura de datos
    for (int i = 0; i < size; i++) {
        printf(" Ingrese los datos de la persona %d ", i + 1);

        printf("Ingrese su nombre:  ");
        scanf(" %s", arregloPersona[i].nombre);  // Permite espacios

        printf("Ingrese su edad:  ");
        scanf("%d", &arregloPersona[i].edad);

        printf("Ingrese su correo:  ");
        scanf(" %49s", arregloPersona[i].correo);

        printf("Ingrese su telefono:  ");
        scanf(" %19s", arregloPersona[i].telefono);

        printf("Ingrese su nacionalidad:  ");
        scanf(" %s", arregloPersona[i].nac);

        printf("Ingrese su genero:  ");
        scanf(" %9s", arregloPersona[i].genero);

        printf("Ingrese su direccion:  ");
        scanf(" %s", arregloPersona[i].direc);

        printf("Ingrese enfermedad (si aplica):  ");
        scanf(" %s", arregloPersona[i].enf);
    }

    // Imprimir valores del arreglo
    printf(" Lista de personas registradas: ");
    for (int i = 0; i < size; i++) {
        printf(" Persona %d: ", i + 1);
        printf("Nombre: %s ", arregloPersona[i].nombre);
        printf("Edad: %d ", arregloPersona[i].edad);
        printf("Correo: %s ", arregloPersona[i].correo);
        printf("Telefono: %s ", arregloPersona[i].telefono);
        printf("Nacionalidad: %s ", arregloPersona[i].nac);
        printf("Genero: %s ", arregloPersona[i].genero);
        printf("Direccion: %s ", arregloPersona[i].direc);
        printf("Enfermedad: %s ", arregloPersona[i].enf);
    }

    return 0;
}
