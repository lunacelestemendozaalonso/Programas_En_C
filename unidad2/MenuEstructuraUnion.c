#include <stdio.h>
#include <string.h>

#define FILAS 2
#define COLUMNAS 2

typedef struct {
    char nombre [50];
    char raza [50];
}Gato;
    
typedef struct {
    char perro [50];
    char raza [50];
}Perro;

typedef union {
    Perro perro;
    Gato gato;
}Dato;

typedef struct{
    Dato valor;
    int tipo;
} Celda;

int main (){ 
Celda matriz [FILAS] [COLUMNAS];

for (int i = 0; i < FILAS; i++) {
    for (int j = 0; j < COLUMNAS; j++) {
        printf(" SELECCIONA    1.- Perro   2.- Gato ");
        int opc = 0;
        scanf("%d", &opc);
        
        switch (opc) {
            case 1: {
                char name[50];
                char raza[50];
                printf("Ingrese el nombre del perro: ");
                scanf("%s", name);
                strcpy(matriz[i][j].valor.perro.perro, name);
                printf("Ingrese raza del perro: ");
                scanf("%s", raza);
                strcpy(matriz[i][j].valor.perro.raza, raza);
                matriz[i][j].tipo = 1;
                break;
            }
            case 2: {
                char name[50];
                char raza[50];
                printf("Ingrese el nombre del gato: ");
                scanf("%s", name);
                strcpy(matriz[i][j].valor.gato.nombre, name);
                printf("Ingrese raza del gato: ");
                scanf("%s", raza);
                strcpy(matriz[i][j].valor.gato.raza, raza);
                matriz[i][j].tipo = 2;
                break;
            }
            default:
                printf("Ingresa una opcion correcta ");
                break;
        }
    }
}
printf(" Datos: ");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j].tipo == 1) {
                printf("Perro - Nombre: %s Raza: %s ",
                    matriz[i][j].valor.perro.perro,
                    matriz[i][j].valor.perro.raza);
            }  else if (matriz[i][j].tipo == 2) {
                printf("Gato - Nombre: %s Raza: %s ",
                    matriz[i][j].valor.gato.nombre,
                    matriz[i][j].valor.gato.raza);
    }
     }
    }
    
    return 0;
}