#include <stdio.h>

int main() {

    char nombre [50];
    printf("%s ","Ingrese su nombre");
    scanf("%s",& nombre);

    int calif1; 
    printf("%s ","Ingrese calif1");
    scanf("%d",&calif1);


    int calif2; 
    printf("%s ","Ingrese calif2");
    scanf("%d",&calif2);

    int calif3; 
    printf("%s ","Ingrese calif3");
    scanf("%d",&calif3);

    float promedio = (calif1+calif2+calif3)/3;
    //Resultados
    printf("%s%s ","Nombre: ",nombre);
    printf("%s%.2f ","Promedio: ",promedio);

    if (promedio >=6){
        printf("%s ","APROBADO");
    } else {
        printf("%s ","REPROBADO");
    }
}
