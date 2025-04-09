#include <stdio.h>

int main() {
int espacios= 3;
int asterisco = 3;
for(int i=3; i>=0; i--){
    for(int j2=1; j2<= espacios; j2++){
        printf("%4s"," e");
    }
    espacios++;
    for(int k=1; k<=asterisco; k++){
        printf("%4s","*");
    }
    //asterisco = asterisco + 2;
    asterisco +=2;
    printf(" ");
    
}
}