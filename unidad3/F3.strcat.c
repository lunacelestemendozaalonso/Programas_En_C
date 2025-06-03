#include <stdio.h>
#include <string.h>

int main() {
    char saludo[30] = "Hola ";
    strcat(saludo, "Luna");
    printf("%s\n", saludo);  // Imprime: Hola Luna
    return 0;
}

/* ¿Qué hace?: Concatena una cadena al final de otra.
   ¿Para qué se usa?: Sirve para formar frases, unir rutas o mensajes personalizados.
