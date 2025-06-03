#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = "Hola Mundo";
    printf("La longitud es: %lu\n", strlen(texto));  // Imprime: 10
    return 0;
}

/* ¿Qué hace?: Cuenta la cantidad de caracteres de una cadena sin incluir el carácter nulo '\0'.
   ¿Para qué se usa?: Se usa para saber la longitud de una cadena antes de copiarla, recorrerla o validarla. 
