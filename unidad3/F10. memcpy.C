#include <stdio.h>
#include <string.h>

int main() {
    char origen[] = "Hola";
    char destino[10];
    memcpy(destino, origen, strlen(origen) + 1);
    printf("%s\n", destino);  // Imprime: Hola
    return 0;
}

// ¿Qué hace?: Copia una cantidad específica de bytes de memoria de un lugar a otro.
// ¿Para qué se usa?: Es útil para copiar datos binarios o cadenas completas rápidamente.
