#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define MAX_LINE 1024

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setColor(const char* color) {
    printf("%s", color);
}

int main() {
    FILE *file;
    char nombre[MAX];
    int edad;
    char pais[MAX];
    int cantidad, i;
    char arch[MAX];
    char archivo[MAX];
    char line[MAX_LINE];
    char *token;
    int contador = 1;

    printf("\033[2J");

    setColor("\033[32m");
    gotoxy(20, 13);
    printf("Personas:");
    setColor("\033[0m");
    gotoxy(30, 13);
    scanf("%d", &cantidad);
    getchar();

    printf("\033[2J");

    gotoxy(3, 13);
    setColor("\033[34m");
    printf("Ingresa el nombre del archivo: ");
    setColor("\033[0m");
    gotoxy(34, 13);
    scanf("%s", arch);
    getchar();

    strcpy(archivo, "../");
    strcat(archivo, arch);
    strcat(archivo, ".csv");

    file = fopen(archivo, "w");
    if (file == NULL) {
        perror("Error al crear el archivo");
        return 1;
    }

    fprintf(file, "Nombre,Edad,País\n");

    for (i = 0; i < cantidad; i++) {
        printf("\033[2J");

        gotoxy(12, 7);
        setColor("\033[35m");
        printf("Persona %d", i + 1);
        setColor("\033[0m");

        gotoxy(12, 11);
        setColor("\033[36m");
        printf("Edad: ");
        setColor("\033[0m");
        gotoxy(18, 11);
        scanf("%d", &edad);
        getchar();

        gotoxy(12, 12);
        setColor("\033[33m");
        printf("Nombre: ");  
        setColor("\033[0m");
        gotoxy(19, 12);
        fgets(nombre, MAX, stdin);
        nombre[strcspn(nombre, "\n")] = 0;

        gotoxy(12, 13);
        setColor("\033[31m");
        printf("Pais: ");
        setColor("\033[0m");
        gotoxy(18, 13);
        fgets(pais, MAX, stdin);
        pais[strcspn(pais, "\n")] = 0;

        fprintf(file, "%s,%d,%s\n", nombre, edad, pais);
    }
    fclose(file);

    printf("\033[2J");
    file = fopen(archivo, "r");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    setColor("\033[36m");
    printf("%-5s %-15s %-10s %-15s\n", "| Persona", "| Nombre", "| Edad", "| Pais");
    setColor("\033[0m");
    printf("------------------------------------------------------\n");
    setColor("\033[0m");

    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file)) {
        line[strcspn(line, "\n")] = 0;
        if (strlen(line) == 0) continue;

        token = strtok(line, ",");
        printf("| %-3d |", contador);

        if (token != NULL) printf(" %-10s |", token);

        token = strtok(NULL, ",");
        if (token != NULL) printf(" %-15s |", token);

        token = strtok(NULL, ",");
        if (token != NULL) printf(" %-15s |", token);

        printf("\n");
        printf("------------------------------------------------------\n");

        contador++;
    }

    fclose(file);

    return 0;
}
