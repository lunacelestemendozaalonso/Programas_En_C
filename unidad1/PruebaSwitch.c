#include <stdio.h>
int main () {
    int opc;
    printf("%s ","Por favor, seleccione una opción");
    printf("%s ","1.- Sumar");
    printf("%s ","2.- Restar");
    scanf("%d", & opc);

    switch(opc){
        case 1:
        printf("%s ","Ha selecionado suma");
        break;
        case 2:
        printf("%s ","Ha selecionado resta");
        break;
        default:
        printf("%s ","No ha selecionado una opcion valida");
        break;
    }
   return 0;
}