#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = "uno dos tres";
    char *token = strtok(texto, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    return 0;
}

//¿Qué hace?: Divide una cadena en partes más pequeñas (tokens).
// ¿Para qué se usa?: Se utiliza para separar palabras o elementos usando un delimitador.
