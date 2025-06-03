#include <stdio.h>
#include <string.h>

int main() {
    char *p = strrchr("banana", 'a');
    if (p) printf("Última 'a': %s\n", p);  // Imprime: a
    return 0;
}

// Qué hace?: Busca la última aparición de un carácter en una cadena.
// ¿Para qué se usa?: Sirve para ubicar la última posición donde aparece una letra específica.
