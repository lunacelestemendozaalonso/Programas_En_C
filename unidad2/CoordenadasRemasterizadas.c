#include <stdio.h>
#include <math.h>

struct cuadrado {
    int x;
    int y;
};

int main() {
    int opc;
    printf("Selecciona una opcion: ");
    printf("1.- cuadrilatero ");
    printf("2.- triangulo ");
    scanf("%d", &opc);

    switch (opc) {
    case 1: {
        struct cuadrado arreglo[4];
        for (int i = 0; i < 4; i++) { 
            int posicion = i + 1;
            printf("Ingresa coordenada x%d: ", posicion);
            scanf("%d", &arreglo[i].x);
            printf("Ingresa coordenada y%d: ", posicion);
            scanf("%d", &arreglo[i].y);
        }

        float ab = sqrt(pow(arreglo[1].x - arreglo[0].x, 2) + pow(arreglo[1].y - arreglo[0].y, 2));
        float bc = sqrt(pow(arreglo[2].x - arreglo[1].x, 2) + pow(arreglo[2].y - arreglo[1].y, 2));
        float cd = sqrt(pow(arreglo[3].x - arreglo[2].x, 2) + pow(arreglo[3].y - arreglo[2].y, 2));
        float da = sqrt(pow(arreglo[0].x - arreglo[3].x, 2) + pow(arreglo[0].y - arreglo[3].y, 2));

        float perimetro = ab + bc + cd + da;

        float area = cd*da;

        printf("Perimetro total: %.2f ", perimetro);
        printf("Area total: %.2f ", area);

        break;
    }
    case 2: {
        struct cuadrado arreglo[3];
        for (int i = 0; i < 3; i++) { 
            int posicion = i + 1;
            printf("Ingresa coordenada x%d: ", posicion);
            scanf("%d", &arreglo[i].x);
            printf("Ingresa coordenada y%d: ", posicion);
            scanf("%d", &arreglo[i].y);
        }

        float ab = sqrt(pow(arreglo[1].x - arreglo[0].x, 2) + pow(arreglo[1].y - arreglo[0].y, 2));
        float bc = sqrt(pow(arreglo[2].x - arreglo[1].x, 2) + pow(arreglo[2].y - arreglo[1].y, 2));
        float ca = sqrt(pow(arreglo[0].x - arreglo[2].x, 2) + pow(arreglo[0].y - arreglo[2].y, 2));

        float perimetro = ab + bc + ca ;

        float area = (ab*bc)/2;

        printf("Perimetro total: %.2f ", perimetro);
        printf("Area total: %.2f ", area);

        break;
    }
    default:
        printf("Opcion no valida. ");
        break;
    }

    return 0;
}