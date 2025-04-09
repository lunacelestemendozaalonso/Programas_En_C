#include <stdio.h>

char* palabra(int num) {
    switch (num) {
        case 1: return "Ponce";
        case 2: return "Pelón";
        case 3: return "Aimep3";
        case 4: return "Barritas";
        case 5: return "Circo";
        case 6: return "Hamburguesa";
        case 7: return "Pesto";
        case 8: return "Sillón";
        case 9: return "Nueve";
        case 10: return "Calavera";
        default: return "numero invalido";
    }
}

int main() {
    int numero;
    printf("Ingrese un número entre 1 y 10: ");
    scanf("%d", &numero);

    printf("El número es: %s ", palabra(numero));

    return 0;
}