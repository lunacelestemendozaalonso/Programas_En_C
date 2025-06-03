#include <stdio.h>
#include <string.h>

int main() {
    printf("%d\n", strcmp("Hola", "Hola"));   // 0
    printf("%d\n", strcmp("Hola", "Mundo"));  // < 0
    return 0;
}

/* ¿Qué hace?: Compara dos cadenas carácter por carácter.
¿Para qué se usa?: Permite saber si dos cadenas son iguales o cuál es mayor en orden alfabético.
