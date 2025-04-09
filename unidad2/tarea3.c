#include <stdio.h>
//NUMERO MAYORRR
int mayor(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    printf("El mayor es: %d ", mayor(num1, num2));
    
    return 0;
}