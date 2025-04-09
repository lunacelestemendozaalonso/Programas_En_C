#include <stdio.h>
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
void setColor(const char* color) {
    printf("%s", color);
}

int main() {
    printf("\033[2J");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 30; j++) {
            if (j <= 9) {
                setColor("\033[42m"); 
            } else if (j <=19) {
                setColor("\033[47m"); 
            } else {
                setColor("\033[41m"); 
            }

            printf("  "); 
            setColor("\033[0m"); 
        }
        printf("\n");
    }

    

    return 0;
}
