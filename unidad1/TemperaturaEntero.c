#include <stdio.h> /*libreria*/
/*imprime la tabla Fahrenheit Celcius
    para fahr = n0, 20, ... 300 */
int main () /*metodo principal*/
{ 
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

}