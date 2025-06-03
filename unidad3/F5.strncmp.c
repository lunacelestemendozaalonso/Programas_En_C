#include <stdio.h>
#include <string.h>

int main() {
    printf("%d\n", strncmp("holanda", "holas", 4));  // 0
    return 0;
}

// ¿Qué hace?: Compara solo los primeros 'n' caracteres de dos cadenas.
   // ¿Para qué se usa?: Ideal para comparar prefijos o partes específicas de cadenas.

