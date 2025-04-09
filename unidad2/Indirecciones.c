#include <stdio.h>
 
int main() {
    int numero = 42;                // Variable entera
    int *ptr = &numero;             // Puntero apuntando a 'numero'
    int **ptr_doble = &ptr;         // Puntero doble apuntando a 'ptr'
 
    printf("Valor de 'numero': %d ", numero);
    printf("Direccion de 'numero': %p ", (void*)&numero);
 
    printf(" Usando puntero simple: ");
    printf("Valor de 'ptr': %p ", (void*)ptr);
    printf("Valor al que apunta 'ptr': %d ", *ptr);
    printf("Direccion de 'ptr': %p ", (void*)&ptr);
 
    printf(" Usando puntero doble: ");
    printf("Valor de 'ptr_doble': %p ", (void*)ptr_doble);
    printf("Valor al que apunta 'ptr_doble' (direccion de 'ptr'): %p ", (void*)*ptr_doble);
    printf("Valor final al que apunta 'ptr_doble': %d ", **ptr_doble);
    printf("Direccion de 'ptr_doble': %p ", (void*)&ptr_doble);
 
    return 0;
}
// & recuperar el lugar de memoria donde esta l;a variable 