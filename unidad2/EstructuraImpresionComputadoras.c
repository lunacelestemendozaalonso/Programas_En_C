#include <stdio.h>

struct Hardware {
    char procesador[50];
    char version[50];
    int ram;
    int almacenamiento;
    char tipoAlmacenamiento[20]; 
    float frecuencia;
    int nucleos;
};
struct Computadora {
    char marca[50];
    char modelo[50];
    char sistemaOperativo[50];
    float pantalla;
    int fabricacion;
    struct Hardware especificaciones;
};

int main () {
    int n;

    printf("Ingrese el numero de computadoras: ");
    scanf("%d",&n);
    getchar();
    struct Computadora computadoras [n];

    for (int i=0; i<n; i++) {
        printf(" Ingrese los datos de la computadora %d : ",i+1);

        printf("Marca: ");
        scanf(" %[^ ]", computadoras[i].marca);

        printf("Modelo: ");
        scanf(" %[^ ]", computadoras[i].modelo);

        printf("Sistema Operativo: ");
        scanf(" %[^ ]", computadoras[i].sistemaOperativo);

        printf("Pantalla (pulgadas): ");
        scanf("%f", &computadoras[i].pantalla);

        printf("Año de Fabricación: ");
        scanf("%d", &computadoras[i].fabricacion);

        printf("Procesador: ");
        scanf(" %[^ ]", computadoras[i].especificaciones.procesador);

        printf("Versión: ");
        scanf(" %[^ ]", computadoras[i].especificaciones.version);

        printf("RAM (GB): ");
        scanf("%d", &computadoras[i].especificaciones.ram);

        printf("Almacenamiento (GB): ");
        scanf("%d", &computadoras[i].especificaciones.almacenamiento);

        printf("Tipo de almacenamiento: ");
        scanf(" %[^ ]", computadoras[i].especificaciones.tipoAlmacenamiento);

        printf("Frecuencia GHZ : ");
        scanf("%f", &computadoras[i].especificaciones.frecuencia);

        printf("Número de núcleos: ");
        scanf("%d", &computadoras[i].especificaciones.nucleos);

        getchar();


    }




 printf(" %-15s | %-15s | %-8s | %-10s | %-5s | %-10s | %-20s | %-5s | %-12s | %-5s | %-10s | %-8s ",
        "Marca", "Modelo", "SO.", "Pantalla", "Año", "Procesador", "Versión", "RAM", "Almacenamiento", "Tipo", "Frecuencia", "Núcleos");
 printf("-------------------------------------------------------------------------------------------------------------------------- ");

 for (int i = 0; i < n; i++) {
     printf("%-15s | %-15s | %-8s | %-10f | %-5d |%-10s | %-20s | %-5d | %-12d | %-10s | %-10f | %-8d ",
            computadoras[i].marca,
            computadoras[i].modelo,
            computadoras[i].sistemaOperativo,
            computadoras[i].pantalla,
            computadoras[i].fabricacion,
            computadoras[i].especificaciones.procesador,
            computadoras[i].especificaciones.version,
            computadoras[i].especificaciones.ram,
            computadoras[i].especificaciones.almacenamiento,
            computadoras[i].especificaciones.tipoAlmacenamiento,
            computadoras[i].especificaciones.frecuencia,
            computadoras[i].especificaciones.nucleos);
 }

 return 0;
}