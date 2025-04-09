#include <stdio.h>
#include <string.h>
#define Pi 3.14
union Resultado{
    float volumen;
    float area;
};
int cuadro (int a){
    return a*a;
}

int rectangulo (int a, int b){
    return a*b;
}
int triangulo (int a, int b){
    return (a * b) / 2;
}
float circulo(int a){
    return Pi * a * a;
}
float trapecio (float a, float b, float c) {
    return ((a + b) * c) / 2;
}

float cubo(float a) {
    return a * a * a;
}

float prisma(float a, float b, float c) {
    return a * b * c;
}

float cilindro(float a, float b) {
    return Pi * a * a * b;
}

float esfera(float a) {
    return (4.0 / 3.0) * Pi * a * a * a;
}

float cono(float a, float b) {
    return (1.0 / 3.0) * Pi * a * a * b;
}
void imprimir(union Resultado resultado, int c) {
    if (c)
        printf(" El area es: %.2f ", resultado.area);
    else
        printf(" El volumen es: %.2f ", resultado.volumen);
}

int main (){
    int opc;
    float a, b, c;
    union Resultado resultado[1];
    printf("%s "," Por favor, seleccione una opción ");
    printf("%s ","Area");
    printf("%s ","1.- Cuadrado");
    printf("%s ","2.- Rectangulo");
    printf("%s ","3.- Triangulo");
    printf("%s ","4.- Circulo");
    printf("%s ","5.- Trapecio");
    printf("%s "," Volumen");
    printf("%s ","6.- Cubo");
    printf("%s ","7.- Prisma");
    printf("%s ","8.- Cilindro");
    printf("%s ","9.- Esfera");
    printf("%s ","10.- Cono");
    scanf("%d", & opc);

    switch(opc){
        case 1:
        printf("Lado del cuadrado: "); 
        scanf("%f", &a);
        resultado[0].area = cuadro(a);
        imprimir(resultado[0], 1);
        break;
        case 2:
        printf("Base rectángulo:  "); 
        scanf("%f", &a);
        printf("Altura rectángulo:  ");
         scanf("%f", &b);
         resultado[0].area = rectangulo(a, b);
         imprimir(resultado[0], 1);
        break;
        case 3:
        printf("Base triangulo:  "); 
        scanf("%f", &a);
        printf("Altura triangulo:  ");
         scanf("%f", &b);
        resultado[0].area = triangulo(a, b);
        imprimir(resultado[0], 1);
        break;
        case 4:
        printf("Radio del círculo:  "); 
        scanf("%f", &a);
        resultado[0].area = circulo(a);
        imprimir(resultado[0], 1);
        break;
        case 5:
        printf("Base mayor del trapecio: ");
        scanf("%f", &a);
        printf("Base menor del trapecio: ");
        scanf("%f", &b);
        printf("Altura del trapecio: ");
        scanf("%f", &c);
        resultado[0].area = trapecio(a, b, c);
        imprimir(resultado[0], 1);
        break;
        case 6:
        printf("Lado del cubo: "); 
        scanf("%f", &a);
        resultado[0].volumen = cubo(a);
        imprimir(resultado[0], 0);
        break;
        case 7:
        printf("Base prisma:  "); 
        scanf("%f", &a);
        printf("Altura prisma:  ");
         scanf("%f", &b);
         printf("Profundidad prisma:  ");
         scanf("%f", &c);
         resultado[0].volumen = prisma(a, b, c);
         imprimir(resultado[0], 0);
        break;
        case 8:
        printf("Radio cilindro:  "); 
        scanf("%f", &a);
        printf("Altura cilindro:  ");
         scanf("%f", &b);
         resultado[0].volumen = cilindro(a, b);
         imprimir(resultado[0], 0);
        break;
        case 9:
        printf("Radio de la esfera: "); 
        scanf("%f", &a);
        resultado[0].volumen = esfera(a);
        imprimir(resultado[0], 0);
        break;
        case 10:
        printf("Radio conop:  "); 
        scanf("%f", &a);
        printf("Altura cono:  ");
         scanf("%f", &b);
         resultado[0].volumen = cono(a, b);
         imprimir(resultado[0], 0);
        break;
        default:
        printf("%s ","No ha selecionado una opcion valida");
        break;
    }
    

}