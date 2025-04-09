#include <stdio.h>

int main() {
    int tabla = 0;
    while(tabla <=10){
        int numero = 0;
        printf("%s  ","");
        while (numero<= 10){
            int mul = (numero * tabla);
                                                                                    
            printf("%s%d%s%d%s%d ", "(",tabla,")()",numero,")=",mul);
            numero++;
        }
    
        tabla++;
    }
}                       