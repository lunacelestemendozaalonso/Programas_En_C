#include <stdio.h>

int main() {
    int ope;

    printf("Seleccione una opción:\n");
    printf("1: Sumar\n");
    printf("2: Restar\n");
    scanf("%d", &ope);

    switch (ope) {  
        case 1:  
            printf("Ha seleccionado la suma\n");
            break;  
        case 2:
            printf("Ha seleccionado resta\n");
            break;  
        default:
            printf("No ha seleccionado una opción válida\n");
            break;  
    }

    return 0;
}

