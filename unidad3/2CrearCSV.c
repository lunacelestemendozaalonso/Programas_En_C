#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX  100

int main (){
    FILE *file;
    char nombre[MAX];
    int edad;
    char pais[MAX];
    int cantidad, i;

    //Abrir el archivo en modo escritura
    file = fopen("../2Salida.csv", "w"); 
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    } 

    //Escribir encabezados //fprintf es para imprimir en el archivo 
    fprintf (file, "Nombre, Edad, Pais\n");
        printf ("¿Cuántas personas quires regristrar? "); 
        scanf ("%d", &cantidad);
     getchar(); // Limpiar el buffer de entrada 
    
    for (i=0;i<cantidad; i++){
        printf ("Nombre: ");
        fgets (nombre, MAX, stdin); // Leer el nombre 
        nombre[strcspn(nombre, "\n")] = 0; // Eliminar el salto de línea

        printf ("Edad: ");
        scanf ("%d", &edad); // Leer la edad
        getchar(); // Limpiar el buffer de entrada 

        printf ("Pais: ");
        fgets (pais, MAX, stdin);
        pais[strcspn(pais, "\n")] = 0; // Eliminar el salto de línea

        //Escribir los datos en el archivo
        fprintf (file, "%s, %d, %s\n", nombre, edad, pais);
    }
    
    fclose(file); // Cerrar el archivo 
    printf ("\nArchivo 'salida.cvs' creado exitosamente\n");    
   return 0;

}