#include <stdio.h>
#include <stdlib.h>
#include <C:\Program Files\MySQL\MySQL Server 9.2\include\mysql.h>

MYSQL *con;

void finish_with_error() {
    fprintf(stderr, "%s\n", mysql_error(con));
    mysql_close(con);
    exit(1);
}

void conectar() {
    con = mysql_init(NULL);
    if (con == NULL) {
        fprintf(stderr, "mysql_init() falló\n");
        exit(1);
    }

    if (mysql_real_connect(con, "localhost", "root", "12345", "perro", 3306, NULL, 0) == NULL) {
        finish_with_error();
    }
    
}

void crear_perro(MYSQL *con) {
    char nombre[50], especie[50], edad[50], peso[50];
    char color[50], genero[50], habitat[50], alimentacion[50];
    char query[1024]; // ← BUFFER AUMENTADO para evitar el warning

    printf("Datos del perro\n");

    printf("Nombre: ");
    scanf("%49s", nombre);

    printf("Especie: ");
    scanf("%49s", especie);

    printf("Edad: ");
    scanf("%49s", edad);

    printf("Peso: ");
    scanf("%49s", peso);

    printf("Color: ");
    scanf("%49s", color);

    printf("Genero: ");
    scanf("%49s", genero);

    printf("Habitat: ");
    scanf("%49s", habitat);

    printf("Alimentacion: ");
    scanf("%49s", alimentacion); 

    snprintf(query, sizeof(query),
    "INSERT INTO perro(nombre, especie, edad, peso, color, genero, habitat, alimentacion ) "
    "VALUES('%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s')",
    nombre, especie, edad, peso, color, genero, habitat, alimentacion );

    if (mysql_query(con, query)) {
        printf("Error al insertar el perro: %s\n", mysql_error(con));
    } else {
        printf("Los datos del perro se han creado correctamente.\n");
    }
}


void leer_perros() {
    if (mysql_query(con, "SELECT * FROM perro")) {
        finish_with_error();
    }

    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    int num_fields = mysql_num_fields(result);
    MYSQL_FIELD *fields = mysql_fetch_fields(result);

    for (int i = 0; i < num_fields; i++) {
        printf("%-20s", fields[i].name); 
    }
    printf("\n");

    for (int i = 0; i < num_fields; i++) {
        printf("%-20s", "----------------------------");
    }
    printf("\n");

    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result))) {
        for (int i = 0; i < num_fields; i++) {
            printf("%-20s", row[i] ? row[i] : "NULL");
        }
        printf("\n");
    }

    mysql_free_result(result);
}

void leertres_perros() {
    if (mysql_query(con, "SELECT id, color, raza FROM perros")) {
        finish_with_error();
    }

    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    int num_fields = mysql_num_fields(result);
    MYSQL_FIELD *fields = mysql_fetch_fields(result);

    for (int i = 0; i < num_fields; i++) {
        printf("%-20s", fields[i].name); 
    }
    printf("\n");

    for (int i = 0; i < num_fields; i++) {
        printf("%-20s", "--------------------");
    }
    printf("\n");

    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result))) {
        for (int i = 0; i < num_fields; i++) {
            printf("%-20s", row[i] ? row[i] : "NULL");
        }
        printf("\n");
    }

    mysql_free_result(result);
}

void actualizar_perro(MYSQL *con) {
    int id;
    char nuevo_nombre[50], nuevo_edad[50], nuevo_peso[50], nuevo_color[50], nuevo_genero[50], nuevo_habitat[50], nuevo_alimentacion[50];
    char query[1024];
    


    printf("Introduce el ID del perro: ");
    scanf("%d", &id);

    printf("Introduce el nuevo nombre: ");
    scanf("%49s", nuevo_nombre);

    printf("Introduce la nueva edad: ");
    scanf("%49s", nuevo_edad);

    printf("Introduce el nuevo peso: ");
    scanf("%49s", nuevo_peso);

    printf("Introduce el nuevo color: ");
    scanf("%49s", nuevo_color);

    printf("Introduce el nuevo genero: ");
    scanf("%49s", nuevo_genero);

    printf("Introduce el nuevo habitat: ");
    scanf("%49s", nuevo_habitat);

    printf("Introduce la nueva alimentacion: ");
    scanf("%49s", nuevo_alimentacion);
    

    snprintf(query, sizeof(query),
    "UPDATE perro SET color='%s', raza='%s', tamaño='%s' WHERE id=%d",
    nuevo_color, nuevo_nombre, nuevo_edad, id);


    if (mysql_query(con, query)) {
        printf("Error al actualizar el perro: %s\n", mysql_error(con));
    } else {
        printf("Perro con ID %d actualizado correctamente.\n", id);
    }
}

void eliminar_perro(MYSQL *con) {
    int id;
    char query[128];

    printf("Introduce el ID del perro que deseas eliminar: ");
    scanf("%d", &id);

    snprintf(query, sizeof(query), "DELETE FROM perro WHERE id=%d", id);

    if (mysql_query(con, query)) {
        printf("Error al eliminar el perro: %s\n", mysql_error(con));
    } else {
        printf("Perro con ID %d eliminado correctamente.\n", id);
    }
}

int main() {
    int ope;
    conectar();

    while (1) {
        printf("%s\n", "MENU");
        printf("%s\n", "Seleccione que desea realizar: ");
        printf("%s\n", "1) Insertar datos del perro");
        printf("%s\n", "2) Listar perros");
        printf("%s\n", "3) Borrar perros");
        printf("%s\n", "4) Actualizar datos del perro");
        printf("%s\n", "5) Salir");

        scanf("%d", &ope);

        switch (ope) {
            case 1:
                crear_perro(con);
                break;
            case 2:
                leer_perros();
                break;
            case 3:
                leertres_perros();
                eliminar_perro(con);
                break;
            case 4:
                leertres_perros();
                actualizar_perro(con);
                break;
            case 5:
                printf("Saliendo del programa...\n");
                mysql_close(con);
                return 0;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    }

    return 0;
}