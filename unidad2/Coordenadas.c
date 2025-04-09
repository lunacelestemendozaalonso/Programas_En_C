#include <stdio.h>
#include <math.h>


struct Rectangulo { //Para este codigo haremos dos estructuras, una rectanculo y la otra triangulo
    float x1, y1;
    float x2, y2;
    float x3, y3;
    float x4, y4; //Coordenadas (x,y) para casos 1 2 3 y 4

    float peri1;
    float peri2;
    float peri3;
    float peri4; // perimetro para caso 123y4 
    float perimetro, area; // guardaremos aqui el perimetro y area finales como mis resultados 
};

struct Triangulo {//segunda estructura
    float x1, y1;
    float x2, y2;
    float x3, y3;// coordenadas (x,y) para casos 1 2 y 3
    float peri1;
    float peri2;
    float peri3;
   float perimetro, area; //guardaremos aqui mis calculos 

};


int main() {    
    int opc;//variable que tomara las decisiones del switch 
    printf("%s"," Seleccione una figura para realizar calculos: ");
    printf("%s","1.- Rectangulo ");
    printf("%s","2.- Triangulo ");
   
    scanf("%d", &opc);//lectura de la opcion

    switch (opc) {
        case 1: { //Case 1 (triangulo)
            struct Rectangulo operacion; //declarar arreglo
            printf("%s","Coordenadas del rectangulo:  ");//solicitar datos

            printf("x1: ");
            scanf("%f", &operacion.x1);
            printf("%s","y1: ");
            scanf("%f", &operacion.y1);

            printf("%s","x2: ");
            scanf("%f", &operacion.x2);
            printf("%s","y2: ");
            scanf("%f", &operacion.y2);

            printf("%s","x3: ");
            scanf("%f", &operacion.x3);
            printf("%s","y3: ");

            scanf("%f", &operacion.y3);
            printf("%s","x4: ");
            scanf("%f", &operacion.x4);
            printf("%s","y4: ");
            scanf("%f", &operacion.y4);

            operacion.peri1 = sqrt((operacion.x2-operacion.x1)*(operacion.x2-operacion.x1)+(operacion.y2-operacion.y1)*(operacion.y2-operacion.y1));
            operacion.peri2 = sqrt((operacion.x3-operacion.x2)*(operacion.x3-operacion.x2)+(operacion.y3-operacion.y2)*(operacion.y3-operacion.y2));
            operacion.peri3 = sqrt((operacion.x4-operacion.x3)*(operacion.x4-operacion.x3)+(operacion.y4-operacion.y3)*(operacion.y4-operacion.y3));
            operacion.peri4 = sqrt((operacion.x1-operacion.x4)*(operacion.x1-operacion.x4)+(operacion.y1-operacion.y4)*(operacion.y1-operacion.y4));

            operacion.perimetro = (operacion.peri1 + operacion.peri2 + operacion.peri3 + operacion.peri4);

            operacion.area = operacion.peri1 * operacion.peri2;

            printf("%s","Perimetro del rectangulo: %.2f ", operacion.perimetro);

            printf("%s","Area del rectangulo: %.2f ", operacion.area);

            break;
        }
        case 2: {
            struct Triangulo calculo;
            printf("%s","Ingrese las coordenadas de los tres vartices del triangulo:  ");
            printf("%s","x1: ");
            scanf("%f", &calculo.x1);
            printf("%s","y1: ");
            scanf("%f", &calculo.y1);
            printf("%s","x2: ");

            scanf("%f", &calculo.x2);
            printf("%s","y2: ");
            scanf("%f", &calculo.y2);
            printf("%s","x3: ");

            scanf("%f", &calculo.x3);
            printf("%s","y3: ");
            scanf("%f", &calculo.y3);
            
            calculo.peri1 = sqrt((calculo.x2-calculo.x1)*(calculo.x2-calculo.x1)+(calculo.y2-calculo.y1)*(calculo.y2-calculo.y1));
            calculo.peri2 = sqrt((calculo.x3-calculo.x2)*(calculo.x3-calculo.x2)+(calculo.y3-calculo.y2)*(calculo.y3-calculo.y2));
            calculo.peri3 = sqrt((calculo.x1-calculo.x3)*(calculo.x1-calculo.x3)+    (calculo.y1-calculo.y3)*(calculo.y1-calculo.y3));
            calculo.perimetro = (calculo.peri1 + calculo.peri2 + calculo.peri3);

            calculo.area = ((calculo.x1*(calculo.y2-calculo.y3))+(calculo.x2*(calculo.y3-calculo.y1))+(calculo.x3*(calculo.y1-calculo.y2)))/2;//Calculamos el area
            if (calculo.area<0){
                calculo.area = calculo.area * (-1);
                printf("%s","El perimetro del triangulo: %.2f ", calculo.perimetro);
                printf("%s","El area del triangulo es: %.2f ", calculo.area );
            }
            else { 
            printf("%s","El perimetro del triangulo: %.2f ", calculo.perimetro);
            printf("%s","El area del triangulo es: %.2f ", calculo.area );

            }

            break;
        }
        default:
            printf("%s","Ingrese una opcion valida ");
    }
    
    return 0;
}
