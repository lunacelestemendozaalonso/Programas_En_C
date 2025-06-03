#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <C:\\Program Files\\MySQL\\MySQL Server 9.2\\include\\mysql.h>

typedef struct {
    int id;
    char titulo[100];
    char genero[30];
    int temporadas;
    int anio_estreno;
    char plataforma[30];
} Serie;

typedef struct {
    int id;
    char nombre[100];
    int edad;
} Personaje;

MYSQL *con;

void finish_with_error() {
    fprintf(stderr, "%s\n", mysql_error(con));
    mysql_close(con);
    exit(1);
}

void conectar() {
    con = mysql_init(NULL);
    if (con == NULL) {
        fprintf(stderr, "mysql_init() fall\xF3\n");
        exit(1);
    }

    if (mysql_real_connect(con, "localhost", "root", "12345", "series", 3306, NULL , 0) == NULL) {
        finish_with_error();
    }
}

int crear_serie(const Serie *serie) {
    char query[512];
    snprintf(query, sizeof(query),
        "INSERT INTO Serie(titulo, genero, temporadas, a\xF1o_estreno , plataforma) VALUES('%s', '%s', %d, %d, '%s')",
        serie->titulo, serie->genero, serie->temporadas, serie->anio_estreno , serie->plataforma);

    if (mysql_query(con, query)) {
        finish_with_error();
    }

    return mysql_insert_id(con);
}

void agregar_personaje(int id_serie, const char *nombre, int edad) {
    char query[512];
    snprintf(query, sizeof(query),
        "INSERT INTO Personaje(nombre, edad, personalidad, id_serie, importancia) VALUES('%s', %d, 'Desconocida', %d, 'Principal')",
        nombre, edad, id_serie);

    if (mysql_query(con, query)) {
        finish_with_error();
    }
}

void leer_series_y_personajes() {
    const char *query =
        "SELECT s.id_serie, s.titulo, s.genero, s.temporadas, s.a\xF1o_estreno, s.plataforma, p.id_personaje, p.nombre "
        "FROM Serie s LEFT JOIN Personaje p ON s.id_serie = p.id_serie ORDER BY s.id_serie";

    if (mysql_query(con, query)) {
        finish_with_error();
    }

    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    MYSQL_ROW row;
    int last_serie_id = -1;
    int first_row = 1;

    while ((row = mysql_fetch_row(result))) {
        int serie_id = atoi(row[0]);
        const char *titulo = row[1];
        const char *genero = row[2];
        int temporadas = atoi(row[3]);
        int anio = atoi(row[4]);
        const char *plataforma = row[5];
        const char *personaje_id = row[6];
        const char *nombre = row[7];

        if (serie_id != last_serie_id) {
            if (!first_row) {
                printf("+--------------------+-------------------------------+\n\n");
            }
            printf("+====================+===============================+\n");
            printf("| ID SERIE           | TITULO                        |\n");
            printf("+--------------------+-------------------------------+\n");
            printf("| %-18d | %-29s |\n", serie_id, titulo);
            printf("| GENERO: %-13s | TEMPORADAS: %-3d  | ANIO: %-4d |\n", genero, temporadas, anio);
            printf("| PLATAFORMA: %-35s |\n", plataforma);
            printf("+--------------------+-------------------------------+\n");
            printf("| ID PERSONAJE       | NOMBRE                        |\n");
            printf("+--------------------+-------------------------------+\n");
            last_serie_id = serie_id;
            first_row = 0;
        }

        if (nombre != NULL) {
            printf("| %-18s | %-29s |\n", personaje_id, nombre);
        }
    }

    if (!first_row) {
        printf("+--------------------+-------------------------------+\n");
    }

    mysql_free_result(result);
}

void eliminar_serie(int id) {
    char query[128];
    snprintf(query, sizeof(query), "DELETE FROM Serie WHERE id_serie=%d", id);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Serie eliminada.\n");
    }
}

void eliminar_personaje(int id) {
    char query[128];
    snprintf(query, sizeof(query), "DELETE FROM Personaje WHERE id_personaje=%d", id);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Personaje eliminado.\n");
    }
}

void actualizar_serie(int id, const char *nuevo_titulo, const char *nuevo_genero, int nuevas_temporadas, int nuevo_anio, const char *nueva_plataforma) {
    char query[512];
    snprintf(query, sizeof(query),
        "UPDATE Serie SET titulo='%s', genero='%s', temporadas=%d, anio_estreno=%d, plataforma='%s' WHERE id_serie=%d",
        nuevo_titulo, nuevo_genero, nuevas_temporadas, nuevo_anio, nueva_plataforma, id);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Serie actualizada correctamente.\n");
    }
}

void actualizar_personaje(int id, const char *nuevo_nombre, int nueva_edad, int nueva_serie_id) {
    char query[512];
    snprintf(query, sizeof(query),
        "UPDATE Personaje SET nombre='%s', edad=%d, id_serie=%d WHERE id_personaje=%d",
        nuevo_nombre, nueva_edad, nueva_serie_id, id);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Personaje actualizado correctamente.\n");
    }
}

int main() {
    int opcion;
    conectar();

    printf("\n\nQUE DESEAS REALIZAR?\n");
    printf("1. Crear serie\n");
    printf("2. Agregar personaje\n");
    printf("3. Ver series y personajes\n");
    printf("4. Eliminar Serie\n");
    printf("5. Eliminar Personaje\n");
    printf("6. Actualizar serie\n");
    printf("7. Actualizar personaje\n");
    printf("\nELIJE UNA OPCION: ");
    scanf("%d", &opcion);
    getchar();

    switch (opcion) {
        case 1: {
            Serie serie;
            printf("Ingrese el titulo de la serie: ");
            fgets(serie.titulo, sizeof(serie.titulo), stdin);
            serie.titulo[strcspn(serie.titulo, "\n")] = '\0';

            printf("Ingrese el genero: ");
            fgets(serie.genero, sizeof(serie.genero), stdin);
            serie.genero[strcspn(serie.genero, "\n")] = '\0';

            printf("Ingrese el numero de temporadas: ");
            scanf("%d", &serie.temporadas);
            getchar();

            printf("Ingrese el anio de estreno: ");
            scanf("%d", &serie.anio_estreno);
            getchar();

            printf("Ingrese la plataforma: ");
            fgets(serie.plataforma, sizeof(serie.plataforma), stdin);
            serie.plataforma[strcspn(serie.plataforma, "\n")] = '\0';

            crear_serie(&serie);
            break;
        }

        case 2: {
            int id_serie;
            char nombre[100];
            int edad;

            printf("Ingrese el ID de la serie: ");
            scanf("%d", &id_serie);
            getchar();

            printf("Ingrese el nombre del personaje: ");
            fgets(nombre, sizeof(nombre), stdin);
            nombre[strcspn(nombre, "\n")] = '\0';

            printf("Ingrese la edad del personaje: ");
            scanf("%d", &edad);

            agregar_personaje(id_serie, nombre, edad);
            break;
        }

        case 3:
            leer_series_y_personajes();
            break;

        case 4: {
            int id;
            printf("Ingrese el ID de la serie a eliminar: ");
            scanf("%d", &id);
            eliminar_serie(id);
            break;
        }

        case 5: {
            int id;
            printf("Ingrese el ID del personaje a eliminar: ");
            scanf("%d", &id);
            eliminar_personaje(id);
            break;
        }

        case 6: {
            int id, temporadas, anio;
            char titulo[100], genero[30], plataforma[30];

            printf("Ingrese el ID de la serie: ");
            scanf("%d", &id);
            getchar();

            printf("Nuevo titulo: ");
            fgets(titulo, sizeof(titulo), stdin);
            titulo[strcspn(titulo, "\n")] = '\0';

            printf("Nuevo genero: ");
            fgets(genero, sizeof(genero), stdin);
            genero[strcspn(genero, "\n")] = '\0';

            printf("Nuevas temporadas: ");
            scanf("%d", &temporadas);
            getchar();

            printf("Nuevo anio de estreno: ");
            scanf("%d", &anio);
            getchar();

            printf("Nueva plataforma: ");
            fgets(plataforma, sizeof(plataforma), stdin);
            plataforma[strcspn(plataforma, "\n")] = '\0';

            actualizar_serie(id, titulo, genero, temporadas, anio, plataforma);
            break;
        }

        case 7: {
            int id, edad, nueva_serie_id;
            char nombre[100];

            printf("Ingrese el ID del personaje: ");
            scanf("%d", &id);
            getchar();

            printf("Nuevo nombre del personaje: ");
            fgets(nombre, sizeof(nombre), stdin);
            nombre[strcspn(nombre, "\n")] = '\0';

            printf("Nueva edad: ");
            scanf("%d", &edad);

            printf("Nuevo ID de serie: ");
            scanf("%d", &nueva_serie_id);

            actualizar_personaje(id, nombre, edad, nueva_serie_id);
            break;
        }

        default:
            printf("Opcion invalida.\n");
    }

    mysql_close(con);
    return 0;
}