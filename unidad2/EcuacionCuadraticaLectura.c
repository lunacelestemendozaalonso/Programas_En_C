#include <stdio.h>
#include <math.h>
#include <string.h>
struct EcCuadratica { //Declaro mi estructura 
    int a;
    int b;
    int c;
    int discriminante;
    float x1;
    float x2;
    char solucion[30];
};
int main (){
    int size;//variable para el tamano del arreglo
    printf("Ingrese el tamaño del arreglo  ");//pedir el tamano del arreglo
    scanf("%d",&size);
    struct EcCuadratica arreglo[size]; //arreglo de estructuras
    
    for(int i=0; i<size; i++){

        printf("Ingrese a:  "); //impresion y lectura 
        scanf(" %d",&arreglo[i].a); 

        printf("Ingrese b:  ");
        scanf(" %d",&arreglo[i].b); 

        printf("Ingrese c:  ");
        scanf(" %d",&arreglo[i].c); 


        int d = (arreglo[i].b * arreglo[i].b)-4*arreglo[i].a*arreglo[i].c; // calculo del discriminante
        if (d<0){
            strcpy (arreglo[i].solucion, "  No tiene solución"); // si el discriminante es negativo, no existe solucion alguna
        }else{
            arreglo[i].x1 = ((-arreglo[i].b)+sqrt(d))/(2*arreglo[i].a); // formula general para calcular las raices
            arreglo[i].x2 = ((-arreglo[i].b)-sqrt(d))/(2*arreglo[i].a);
           strcpy (arreglo[i].solucion, "  Tiene solución");
        }
    } // impresión de la tabla
    printf("%s\t | %s\t | %s\t | %s\t | %s\t | %s ", "a","b", "c","x1","x2","solucion");
    for (int i=0; i<size; i++){

        printf("%d\t |%d\t | %d\t| %.2f\t|%.2f\t|%s ",
            arreglo[i].a,
            arreglo[i].b,
            arreglo[i].c,
            arreglo[i].x1,
            arreglo[i].x2,
            arreglo[i].solucion);

    }
    
    return 0; 
}

