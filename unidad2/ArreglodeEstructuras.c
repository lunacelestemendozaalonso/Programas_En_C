#include <stdio.h>

struct Persona {
    char nombre[50]; 
    int edad;
    char correo[50];
    char telefono[10];
    char nac[4];  
    char genero[20];
    char direc[100]; 
    char enf[50];  
};


int main() {
    int size;
    
    printf("Ingrese el tamaño del arreglo  ");
    scanf("%d", &size);

    struct Persona persona[size]; 


    for (int i = 0; i < size; i++) {
        printf(" Ingrese los datos de la persona %d ", i + 1);

        printf("Ingrese su nombre:  ");
        scanf(" %s",persona[i].nombre); 

        printf("Ingrese su edad:  ");
         scanf("%d",&persona[i].edad);

        printf("Ingrese su correo:  ");
        scanf(" %s",persona[i].correo);

         printf("Ingrese su telefono:  ");
        scanf("%s",persona[i].telefono);

        printf("Ingrese su año de nacimiento:  ");
        scanf("%s",persona[i].nac);
        printf("Ingrese su genero:  ");
        scanf("%s",persona[i].genero);
        printf("Ingrese su direccion:  ");
        scanf("%s",persona[i].direc);

        printf("Ingrese si padece una enfermedad:  ");
        scanf(" %s",persona[i].enf);
    }


    for (int i = 0; i < size; i++) {
        printf(" Persona %d: ", i + 1);
        printf("Nombre: %s ",persona[i].nombre);
        printf("Edad: %d ",persona[i].edad);
        printf("Correo: %s ", persona[i].correo);
        printf("Telefono: %s ",persona[i].telefono);
        printf("Año de nacimiento: %s ",persona[i].nac);
        printf("Genero: %s ",persona[i].genero);
        printf("Direccion: %s ",persona[i].direc);
        printf("Enfermedad: %s ",persona[i].enf);
    }

    return 0;
}
