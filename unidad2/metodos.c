#include <stdio.h>
int suma (int a, int b){
    return a+b;
}

int resta (int a, int b){
    int result= a-b;
    return result;
}
int multiplicar (int a){
    return a*a;
}
float dividir(int a, int b){
    return a/b;
}

void imprimir (int a, int b, int c, float d){
    printf("  Resultado de la suma: %d   Resta: %d   Multiplicacion: %d  Divivsion: %.2f",a,b,c,d);
}

int main (){
    //mandar a llamar las funciones 
    int op1 = suma(3,2);
    int op2 = resta (5,3);
    int op3 = multiplicar(3);
    int op4 = dividir(5,3);
    imprimir (op1,op2,op3,op4);
}