#include <stdio.h>
int main() {
    float num1, num2;
    int ope;
    float resultado;
    printf("%s", "BIENVENIDO A LA CALCULADORA");
    printf("%s", "Ingresa el numero 1: ");
    scanf("%f", &num1);
    printf("%s", "Ingresa el numero 2: ");
    scanf("%f", &num2);

    printf("%s ", "Indica una operación");
    printf("%s ", "1: Sumar");
    printf("%s ", "2: Restar");
    printf("%s ", "3: Multiplicar");
    printf("%s ", "4: Division");
    scanf("%d", &ope);

    switch(ope){
        case 1:
            resultado=num1+num2;
            printf("%s %.5f", "El resultado de los dos numeros sumados es:", resultado);
            break;

        case 2:
            resultado=num1-num2;
            printf("%s %.5f", "El resultado de los numeros restados es:", resultado);
            break;

        case 3:
            resultado=num1*num2;
            printf("%s %.5f", "El resultado de la multiplicación es:", resultado);
            break;
            
        case 4:
            resultado=num1/num2;
            printf("%s %.5f", "El resultado de la division es:", resultado);
            break;

        default:
            printf("%s", "Selecciona un caracter correcto");
            break;
    }
return 0;

}