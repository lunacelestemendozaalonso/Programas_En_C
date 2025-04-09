#include <stdio.h>

struct Direccion {
    char calle[50];
    int numero;
};

struct Persona {
    char nombre[50];
    struct Direccion domicilio;
};

int main () {
    struct Persona persona1 = {"Carlos Ramírez",{"Av. Reforma", 123}};
    printf("Nombre: %s ", persona1.nombre);
    printf("Domicilio: %s #%d ", persona1.domicilio.calle, persona1.domicilio.numero);
}