#include <stdio.h>
int main(){
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
}