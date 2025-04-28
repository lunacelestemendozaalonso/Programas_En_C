#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE  1024

int main (){

    FILE *file;
    char line [MAX_LINE];
    char *token;

    //Abrir el archivo en modo lectura
    file = fopen("../1datos.csv", "r");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    printf ("%-15s %-10s %-15s\n", "Nombre", "Edad", "Pais");
    printf ("-------------------------------------------\n");

    while (fgets(line, sizeof(line), file)) { 
        //(line) Evalua el tamaño de una linea  
        // fgets obtiene cada uyno de los datos del archivo 
        //Line variable de que cada reglon de daatos y fine de donde esta leyendo los datos 
        line[strcspn(line, "\n")] = 0; // Eliminar el salto de línea
        
        token = strtok(line, ",");
        if (token != NULL) printf("%-15s ", token);

        token = strtok(NULL, ",");
        if (token != NULL) printf("%-10s ", token);

        token = strtok(NULL, ",");
        if (token != NULL) printf("%-15s ", token);

        printf("\n"); 
    }

    // Cerrar el archivo
    fclose(file); 
    return 0;

}
    