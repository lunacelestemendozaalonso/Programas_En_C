#include <stdio.h>

#define FILAS 3 
#define COLUMNAS 2

struct Diseno {
    char color[20];
    char material[20];
};

struct Cristaleria {
    char tipo[20];
    char precio[20]; 
    struct Diseno diseno;
};

int main() {

    struct Cristaleria matriz[FILAS][COLUMNAS] = {
        {
            {"Copa Vino", "350", {"Transparente", "Vidrio"}},
            {"Tarro Cerveza", "280", {"Ámbar", "Cristal"}}
        },
        {
            {"Vaso Alto", "150", {"Azul", "Vidrio "}},
            {"Jarra Agua", "500", {"Verde", "Cristal"}}
        },
        {
            {"Copa Coctel", "400", {"Rosado", "Tallado"}},
            {"Vaso Whisky", "320", {"Transparente", "Cristal Grueso"}}
        }
    };

    printf(" ");

    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            printf("|%15s | %15s | %15s | %15s|\t", matriz[i][j].tipo, matriz[i][j].precio, matriz[i][j].diseno.color, matriz[i][j].diseno.material);
        }
        printf(" ");
    }

    return 0;
}
