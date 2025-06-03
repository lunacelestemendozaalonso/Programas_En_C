#include <stdio.h>
#include <string.h>

int main() {
    char destino[20];
    strcpy(destino, "Copiado");
    printf("%s\n", destino);  // Imprime: Copiado
    return 0;
}


/* ¿Qué hace?: Copia el contenido de una cadena en otra.
   ¿Para qué se usa?: Se utiliza cuando se necesita duplicar una cadena o asignar su valor a otra variable.
