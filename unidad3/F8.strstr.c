#include <stdio.h>
#include <string.h>

int main() {
    char *p = strstr("Programar en C es cool", "C");
    if (p) printf("Subcadena encontrada: %s\n", p);
    return 0;
}

// ¿Qué hace?: Busca una subcadena dentro de otra.
// ¿Para qué se usa?: Para verificar si una palabra o frase está contenida en otra.
