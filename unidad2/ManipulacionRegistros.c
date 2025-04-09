#include <stdio.h>

int main (){
int a, b, c, d, e;

printf("Ingrese valor A ");
scanf("%d",&a);
printf("Ingrese valor B ");
scanf("%d",&b);
printf("Ingrese valor C  ");
scanf("%d",&c);
printf("Ingrese valor D  ");
scanf("%d",&d);
printf("Ingrese valor E ");
scanf("%d",&e);

int *const pa= &a;
int *const pb= &b;
int *const pc= &c;
int *const pd= &d;
int *const pe= &e;

printf("Valores ingresados: A=%p ", &pa);
printf("Valores ingresados: B=%p ", &pb);
printf("Valores ingresados: C=%p ", &pc);
printf("Valores ingresados: D=%p ", &pd);
printf("Valores ingresados: E=%p ", &pe);

int suma= *pa + *pa;
printf("Resultado de la suma: %d ", suma);

*pa=suma;
printf("Valor nuevo: A=%d ",*pa);

int res= *pb + *pb;
printf("Resultado de la suma: %d ", res);

*pb=res;
printf("Valor nuevo: A=%d ",*pb);

int mul= *pc + *pc;
printf("Resultado de la suma: %d ", mul);

*pb=res;
printf("Valor nuevo: A=%d ",*pb);
return 0;
}