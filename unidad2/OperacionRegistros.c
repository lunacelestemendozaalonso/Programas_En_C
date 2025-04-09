#include <stdio.h>

int main() {
int ah, al, bh, bl, ch, cl, dh, dl;


printf("Ingrese valor AH: ");
scanf("%d", &ah);
printf("Ingrese valor AL: ");
scanf("%d", &al);
printf("Ingrese valor BH: ");
scanf("%d", &bh);
printf("Ingrese valor BL: ");
scanf("%d", &bl);
printf("Ingrese valor CH: ");
scanf("%d", &ch);
printf("Ingrese valor CL: ");
scanf("%d", &cl);


int *const pah = &ah;
int *const pal = &al;
int *const pbh = &bh;
int *const pbl = &bl;
int *const pch = &ch;
int *const pcl = &cl;
int *const pdh = &dh;

printf("  Valor A:  ");
printf("*AH: %d ",*pah);
printf("&AH: %d ", &ah);
printf("*AL: %d ",*pal);
printf("&AL: %d ", &al);
dh = *pah + *pal;
printf("Suma: %d ", *pdh);
printf("Posición: %d ", &pdh);
dh = *pah - *pal;
printf("Resta: %d ", *pdh);
printf("Posición: %d ", &pdh);
dh = *pah * *pal;
printf("Multiplicación: %d ", *pdh);
printf("Posición: %d ", &pdh);
dh = (*pah/ *pal);
printf("División: %d ", *pdh);
printf("Posición: %d ", &pdh);


printf("  Valor B:  ");
printf("*BH: %d ",*pbh);
printf("&BH: %d ", &bh);
printf("*BL: %d ",*pbl);
printf("&bL: %d ", &bl);
dh = *pbh + *pbl;
printf("Suma: %d ", *pdh);
printf("Posición: %d ", &pdh);
dh = *pbh - *pbl;
printf("Resta: %d ", *pdh);
printf("Posición: %d ", &pdh);
dh = *pbh * *pbl;
printf("Multiplicación: %d ", *pdh);
printf("Posición: %d ", &pdh);
dh = (*pbh/ *pbl);
printf("División: %d ", *pdh);
printf("Posición: %d ", &pdh);


printf("  Valor C:  ");
printf("*BH: %d ",*pch);
printf("&BH: %d ", &ch);
printf("*BL: %d ",*pcl);
printf("&bL: %d ", &cl);
dh = *pch + *pcl;
printf("Suma: %d ", *pdh);
printf("Posición: %d ", &pdh);
dh = *pch - *pcl;
printf("Resta: %d ", *pdh);
printf("Posición: %d ", &pdh);
dh = *pch * *pcl;
printf("Multiplicación: %d ", *pdh);
printf("Posición: %d ", &pdh);
dh = (*pch/ *pcl);
printf("División: %d ", *pdh);
printf("Posición: %d ", &pdh);
    return 0;
}
