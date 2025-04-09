#include <stdio.h>

int main(){
    int numeros [] = {12, 20, 30, 20};
    int size = sizeof(numeros)/sizeof(numeros[0]);

    printf("Tamaño: %d ", size);
    
    for (int i=0; i< size; i++){
        printf("numeros[%d] = %d ", i, numeros[i]);
    }
}