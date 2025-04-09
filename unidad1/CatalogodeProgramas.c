#include <stdio.h>
int main () {
    int opc;
    printf("%s ","");
    printf("%s  ","Menú de programas | Unidad 1");
    printf("%s ","Por favor, seleccione una opción");
    printf("%s ","1.- Escapes");
    printf("%s ","2.- Tipos de datos");
    printf("%s ","3.- Promedio de calificaciones");
    printf("%s ","4.- Temperatura (entero)");
    printf("%s ","5.- Temperatura (flotante)");
    printf("%s ","6.- Diagonales");
    printf("%s ","7.- Cuadrado de numeros");
    printf("%s ","8.- Cuadrado de asteriscos");
    printf("%s ","9.- Triangulo rectangulo");
    printf("%s ","10.- Triangulo rectangulo 2");
    printf("%s ","11.- Triangulo equilatero");
    printf("%s ","12.- Trapecio");
    printf("%s ","13.- Tabla de multiplicar");
    printf("%s ","14.- Promedio leer datos");
    printf("%s ","15.- Volumen de una esfera");
    printf("%s ","16.- Volumen de un cono");
    printf("%s ","17.- Volumen de un cilindro");
    printf("%s ","18.- Prueba switch");
    printf("%s ","19.- Calculadora");
    scanf("%d", & opc);

    switch(opc){
        case 1:
        printf("%s ","Ha selecionado Escapes "); 
        printf("\\a Alarma ");
        printf("\\b Retroceso ");
        printf("\\f Avance de pagina ");
        printf("\  Retorno de carro y avance de linea ");
        printf("\\r Fetorno de carro ");
        printf("\\t Tabulacion ");
        printf("\\\\ Diagonal invertida ");
        printf("\\? Signo de interrogacion ");
        printf("\\"" Comillas dobles ");
        printf("\\000 Octal ");
        printf("\\xhh Hexadecimal ");
        printf("\\0 Caracter nulo ");
        break;
        case 2:
        printf("%s ","Ha seleccionado Tipos de datos ");
        printf("%s","%d imprime datos decimales: 5.4 ");
        printf("%s","%i imprime datos enteros: 2 ");
        printf("%s","%o imprime datos octales: 6 ");
        printf("%s","%x imprime datos hexadecimales: 8A1 ");
        printf("%s","%u imprime datos enteros sin signo en decimal: 23 ");
        printf("%s","%c imprime datos de caracteres: # ");
        printf("%s","%e imprime datos reales expresados en base y exponente:5^2  ");
        printf("%s","%f imprime datos reales escrito con punto decimal: 23.12 ");
        printf("%s","%f imprime datos reales : 14 ");
        printf("%s","%s imprime cadenas de caracteres: Hola123 ");
        printf("%s","%lf imprime datos reales de tipo long double: 2.1646466565466642 ");
        break;
        case 3:
        printf("%s ","Ha seleccionado Promedio de calificaciones");
        int cal1 = 8, cal2 = 9, cal3 = 7;
             int promedio = (cal1 + cal2 + cal3) / 3;
             printf("Las calificaciones son: %.1d, %.1d, %.1d ", cal1, cal2, cal3);
             printf("El promedio es: %.2dd ", promedio);
             return 0;
        break;
        case 4:
        printf("%s ","Ha seleccionado Tempreatura (entero) ");
        int fahr, celsius;
        int lower, upper, step; 

        lower=0; 
        upper=300;
        step=20; 

        fahr = lower;
        while (fahr<=upper){ 
            celsius= 5*(fahr-32)/9; 
            printf("%d\t%d ", fahr, celsius); 
            fahr = fahr + step; 
        } 
        break;
        case 5:
        printf("%s ","Ha seleccionado Temperatura (flotante)");
        float fahr2, celsius2;
        float lower2, upperi2, step2; 
    
        lower2 = 0; 
        upperi2 = 300;
        step2 = 20; 
    
        fahr2 = lower2;
        while (fahr2 <= upperi2) { 
            celsius2 = 5.0 * (fahr2 - 32.0) / 9.0; 
            printf("%.0f\t%.2f ", fahr2, celsius2); 
            fahr2 = fahr2 + step2; 
        } 
        break;
        case 6:
        printf("%s ","Ha seleccionado Diagonales ");
        printf("%s","Diagonal normal: ");
        int tamano = 10;
         for (int i = 0; i < tamano; i++) {
         for (int j = 0; j < tamano; j++) {
            if (i == j) {
                printf("%s","*");
            } else {
                printf("%s"," ");
            }
            }
        printf("%s"," ");
        }

        printf("%s"," ");
        printf("%s","Diagonal inversa: ");
          for (int i = 0; i < tamano; i++) {
          for (int j = 0; j < tamano; j++) {
            if (i + j == tamano - 1) {
                printf("%s","*");
            } else {
                printf("%s"," ");
            }
            }
        printf(" ");
        }
         return 0;
        break;
        case 7:
        printf("%s ","Ha seleccionado Cuadro de numeros ");
        printf(" %s ", "Ejemplo de impresion");
        int limitesy =0;
            while (limitesy <= 10) {
                int limitesx = 0;
                while (limitesx <= 10){
                    printf("%4d", limitesx);
                    limitesx++;
                }
                    printf(" ");
                    limitesy++;
            }
        break;
        case 8:
        printf("%s ","Ha seleccionado cuadrado de asteristcos");
        for (int a=0;a<=9;a++){
            printf("%3s","*");
        }
        printf(" ");
        for(int b=1;b<=7;b++){
            printf("%3s","*");
    
            for (int c=1;c<=8;c++){
                printf("%3s","");
            }
    
            printf("%3s","*");
            printf(" ");
    
        }
        for (int a=0;a<=9;a++){
            printf("%3s","*");
        }
    return 0;
        break;
        case 9:
        printf("%s ","Ha seleccionado triangulo rectangulo");
        int asteriscos=1;
          for (int i3=6 ; i3>=0;i3--) {
          for (int k3=6; k3>= asteriscos; k3--){
          printf("%5s", " ");
        }
          for (int j3=1; j3<= asteriscos; j3++) {
          printf("%5s", "*");
        }
          asteriscos++;
          printf(" ");
        }
        return 0;  
        break;
        case 10:
        printf("%s ","Ha seleccionado Triangulo rectangulo 2");
        int asteriscos2=1;
            for (int i2=6 ; i2>=0;i2--) {
            for (int j2=1; j2<= asteriscos2; j2++) {
            printf("%5s", "*");
            } 
            asteriscos2++;
            printf(" ");
            }
            return 0;
        break;
        case 11:
        printf("%s ","Ha seleccionado Triangulo equilatero");
        int espacios1=6 ; int asteriscos1=1;
             for (int i1=6; i1>=0; i1--) {
             for (int j1=1; j1<=espacios1; j1++) {
             printf ( "%4s", "");
            }   
            espacios1--;
             for (int k1=1; k1<=asteriscos1; k1++){
             printf ("%4s", "*");
            }
             asteriscos1=asteriscos1+2;
             printf (" ");
            }
            return 0; 
        break;
        case 12:
        printf("%s ","Ha seleccionado Trapecio ");
        int espacios= 3;
        int asterisco = 3;
        for(int i=3; i>=0; i--){
            for(int j=1; j<= espacios; j++){
                printf("%4s"," ");
            }
            espacios--;
            for(int k=1; k<=asterisco; k++){
                printf("%4s","*");
            }
            //asterisco = asterisco + 2;
            asterisco +=2;
            printf(" ");
            
        }
        break;
        case 13:
        printf("%s ","Ha seleccionado Tabla de multiplicar");
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
        break;
        case 14:
        printf("%s ","Ha seleccionado Promedio leer datos");
        char nombre2 [50];
    printf("%s ","Ingrese su nombre");
    scanf("%s",& nombre2);

    int calif1; 
    printf("%s ","Ingrese calif1");
    scanf("%d",&calif1);


    int calif2; 
    printf("%s ","Ingrese calif2");
    scanf("%d",&calif2);

    int calif3; 
    printf("%s ","Ingrese calif3");
    scanf("%d",&calif3);

    float promedio2 = (calif1+calif2+calif3)/3;
    //Resultados
    printf("%s%s ","Nombre: ",nombre2);
    printf("%s%.2f ","Promedio: ",promedio2);

    if (promedio2 >=6){
        printf("%s ","APROBADO");
    } else {
        printf("%s ","REPROBADO");
    }
        break;
        case 15:
        printf("%s ","He seleccionado Volumen de una esfera");
        float radio;
        float altura;
        float volumen;
        float pi=3.1416;
        float areatotal;
        float hipotenusa;

        printf("Dame el valor de la altura ");
        scanf("%f",&altura);
        printf("%s ","Dame el valor del radio");
        scanf("%f",&radio);

        hipotenusa=(radio*radio)+(altura*altura);
        areatotal=(pi*radio*radio)+(pi*radio*hipotenusa);
        volumen=(pi*radio*radio*altura)/3;
        
        printf("El volumen es:   %f ", volumen);
        printf("El area total es:   %.2f  ",areatotal);

        return 0;
        break;
        case 16:
        printf("%s ","Ha seleccionado Volumen de un cono");
        float radion;
        float alturan;
        float volumenn;
        float pin=3.1416;
        float areatotaln;
        float hipotenusan;

        printf("Dame el valor de la altura ");
        scanf("%f",&alturan);
        printf("%s ","Dame el valor del radio");
        scanf("%f",&radion);

        hipotenusan=(radion*radion)+(alturan*alturan);
        areatotaln=(pin*radion*radion)+(pin*radion*hipotenusan);
        volumenn=(pin*radion*radion*alturan)/3;
        
        printf("El volumen es:   %f ", volumenn);
        printf("El area total es:   %.2f  ",areatotaln);
        return 0;
        break;
        case 17:
        printf("%s ","Ha seleccionado Volumen de un cilindro");
        float hc;
        float radioc;
        float pic=3.1416;
        float volumenc;
        float areac;

        printf("%s ", "Ingresa el valor de la altura de tu cilindro");
        scanf("%f", &hc);
        printf("%s ", "Ingresa el radio de la circunferencia de tu cilindro");
        scanf("%f", &radioc);

        volumenc =(pic*radioc*radioc*hc);
        areac = ((2*pic)*(radioc*hc)+(2*pic*radioc*radioc));

        printf("%s%.4f ", "El volumen es  ", volumenc);
        printf("%s%.2f ", "El area es:  ", areac);
        return 0;
        break;
        case 18:
        printf("%s ","Ha seleccionado Prueba switch");
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
        break;
        case 19:
        printf("%s ","Ha seleccionado Calculadora");
        float num1, num2;
    int ope;
    float resultado;
    printf("%s", "BIENVENIDO A LA CALCULADORA");
    printf("%s", "Ingresa el numero 1: ");
    scanf("%f", &num1);
    printf("%s", "Ingresa el numero 2: ");
    scanf("%f", &num2);

    printf("%s ", "Indica una operación");
    printf("%s ", "1: Sumar");
    printf("%s ", "2: Restar");
    printf("%s ", "3: Multiplicar");
    printf("%s ", "4: Division");
    scanf("%d", &ope);

    switch(ope){
        case 1:
            resultado=num1+num2;
            printf("%s %.5f", "El resultado de los dos numeros sumados es:", resultado);
            break;

        case 2:
            resultado=num1-num2;
            printf("%s %.5f", "El resultado de los numeros restados es:", resultado);
            break;

        case 3:
            resultado=num1*num2;
            printf("%s %.5f", "El resultado de la multiplicación es:", resultado);
            break;
            
        case 4:
            resultado=num1/num2;
            printf("%s %.5f", "El resultado de la division es:", resultado);
            break;

        default:
            printf("%s", "Selecciona un caracter correcto");
            break;
    }
return 0;
        break;
        default:
        printf("%s ","No ha selecionado una opción valida");
        break;
        

    }
   return 0;
}