#include <stdio.h>

int main(){
    int numero = 42;
    int *apuntador = &numero;

    printf("Valor del numero: %d ", numero);
    printf("Direccion del numero%p ", &numero);
    printf("Valor del apuntador: %p ", apuntador);
    printf("Valor al que aplica: %d ", *apuntador);

    return 0;
}