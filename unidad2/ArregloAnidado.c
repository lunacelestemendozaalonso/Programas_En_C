#include <stdio.h>
struct Coordenadas
{
    char calle[50];
    char num[10];
    int cp;
};

struct Direccion
{
    char colonia[50];
    struct Coordenadas domicilio;
};

struct Estudiantes
{
    int id;
    char nombre[50];
    struct Direccion vivienda;
};

// datos 
int main(){

    int size;
    printf("Ingrese el tamaño de tu arreglo: ");
    scanf("%d",&size);

    struct Estudiantes arreglo[size];

    for (int i =0; i<size;i++){
        printf(" Ingrese los datos del estudiante %d ",i+1);

        printf("id:  ");
        scanf("%d",&arreglo[i].id);

        printf("Nombre:  ");
        scanf("%s",&arreglo[i].nombre);

    
         printf("Colonia:  ");
         scanf("%s",&arreglo[i].vivienda.colonia);
 
        
         printf("Calle:  ");
         scanf("%s",arreglo[i].vivienda.domicilio.calle);
 
         
         printf("Numero:  ");
         scanf("%s",arreglo[i].vivienda.domicilio.num);
 
         printf("Codigo Postal:  ");
         scanf("%d",&arreglo[i].vivienda.domicilio.cp);
    }

    //impresiones 
    printf(" Estudiantes: ");
    for (int i = 0; i < size; i++)
    {
        printf(" Estudiante %d: ", i + 1);
        printf("Id:%d ", arreglo[i].id);
        printf("Nombre: %s ", arreglo[i].nombre);

        printf("Direccion:  Colonia: %s, Calle: %s, NumCasa: %s, Código Postal: %d ",arreglo[i].vivienda.colonia, arreglo[i].vivienda.domicilio.calle,arreglo[i].vivienda.domicilio.num, arreglo[i].vivienda.domicilio.cp);
    }
    return 0;
}