#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. Factorial
long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// 2. Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 3. Potencia (base^exp)
double potencia(double base, int exp) {
    if (exp == 0) return 1;
    return base * potencia(base, exp - 1);
}

// 4. Suma de elementos de un array
int sumaArray(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + sumaArray(arr, n - 1);
}

// 5. Búsqueda lineal recursiva
int busquedaLineal(int arr[], int n, int key) {
    if (n == 0) return -1;
    if (arr[n - 1] == key) return n - 1;
    return busquedaLineal(arr, n - 1, key);
}

// 6. Búsqueda binaria recursiva (array ordenado)
int busquedaBinaria(int arr[], int low, int high, int key) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == key) return mid;
    else if (arr[mid] < key) return busquedaBinaria(arr, mid + 1, high, key);
    else return busquedaBinaria(arr, low, mid - 1, key);
}

// 7. Máximo común divisor (Euclides)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 8. Combinatorio C(n, k)
int combinatorio(int n, int k) {
    if (k == 0 || k == n) return 1;
    return combinatorio(n - 1, k - 1) + combinatorio(n - 1, k);
}

// 9. Suma de dígitos
int sumaDigitos(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumaDigitos(n / 10);
}

// 10. Conteo de dígitos
int cuentaDigitos(int n) {
    if (n == 0) return 0;
    return 1 + cuentaDigitos(n / 10);
}

// 11. Invertir cadena
void invertirCadena(char s[], int i, int j) {
    if (i >= j) return;
    char tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
    invertirCadena(s, i + 1, j - 1);
}

// 12. Comprobar palíndromo
int esPalindromo(char s[], int i, int j) {
    if (i >= j) return 1;
    if (s[i] != s[j]) return 0;
    return esPalindromo(s, i + 1, j - 1);
}

// 13. Decimal a binario (imprime)
void decABinario(int n) {
    if (n == 0) return;
    decABinario(n / 2);
    printf("%d", n % 2);
}

// 14. Tribonacci
int tribonacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

// 15. Función de Ackermann
int ackermann(int m, int n) {
    if (m == 0) return n + 1;
    if (m > 0 && n == 0) return ackermann(m - 1, 1);
    return ackermann(m - 1, ackermann(m, n - 1));
}

// 16. Torres de Hanoi (imprime movimientos)
void hanoi(int n, char origen, char auxiliar, char destino) {
    if (n == 1) {
        printf("Mover disco 1 de %c a %c\n", origen, destino);
        return;
    }
    hanoi(n - 1, origen, destino, auxiliar);
    printf("Mover disco %d de %c a %c\n", n, origen, destino);
    hanoi(n - 1, auxiliar, origen, destino);
}

// 17. Permutaciones de cadena
void permutar(char s[], int l, int r) {
    if (l == r) {
        printf("%s\n", s);
        return;
    }
    for (int i = l; i <= r; i++) {
        char tmp = s[l]; s[l] = s[i]; s[i] = tmp;
        permutar(s, l + 1, r);
        tmp = s[l]; s[l] = s[i]; s[i] = tmp; // backtrack
    }
}

// 18. Generar subconjuntos (power set)
void generarSubconjuntos(int arr[], int n, int idx, int subset[], int subSize) {
    if (idx == n) {
        printf("{ ");
        for (int i = 0; i < subSize; i++) printf("%d ", subset[i]);
        printf("}\n");
        return;
    }
    // incluir
    subset[subSize] = arr[idx];
    generarSubconjuntos(arr, n, idx + 1, subset, subSize + 1);
    // excluir
    generarSubconjuntos(arr, n, idx + 1, subset, subSize);
}

// 19. Quicksort
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high], i = low - 1;
        for (int j = low; j < high; j++)
            if (arr[j] < pivot) {
                i++;
                int tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
            }
        int tmp = arr[i+1]; arr[i+1] = arr[high]; arr[high] = tmp;
        int p = i + 1;
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

// 20. Mergesort
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
    int i=0, j=0, k=l;
    while (i<n1 && j<n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i<n1) arr[k++] = L[i++];
    while (j<n2) arr[k++] = R[j++];
}
void mergesort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l)/2;
        mergesort(arr, l, m);
        mergesort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    printf("1) factorial(5)           = %ld\n", factorial(5));
    printf("2) fibonacci(6)           = %d\n", fibonacci(6));
    printf("3) potencia(2,3)          = %.0f\n", potencia(2,3));
    int a1[] = {1,2,3,4,5};
    printf("4) sumaArray               = %d\n", sumaArray(a1,5));
    printf("5) busqLineal de 3         = %d\n", busquedaLineal(a1,5,3));
    printf("6) busqBinaria de 4        = %d\n", busquedaBinaria(a1,0,4,4));
    printf("7) gcd(48,18)              = %d\n", gcd(48,18));
    printf("8) C(5,2)                  = %d\n", combinatorio(5,2));
    printf("9) sumaDigitos(1234)       = %d\n", sumaDigitos(1234));
    printf("10) cuentaDigitos(12345)   = %d\n", cuentaDigitos(12345));

    char s1[]="hola";
    invertirCadena(s1,0,strlen(s1)-1);
    printf("11) invertir 'hola'        = %s\n", s1);

    char s2[]="radar";
    printf("12) 'radar' palíndromo?    = %s\n",
        esPalindromo(s2,0,strlen(s2)-1) ? "sí" : "no");

    printf("13) decABinario(10)        = ");
    decABinario(10); printf("\n");

    printf("14) tribonacci(6)          = %d\n", tribonacci(6));
    printf("15) ackermann(2,1)         = %d\n", ackermann(2,1));

    printf("16) Torres de Hanoi (3):\n");
    hanoi(3,'A','B','C');

    char s3[]="ABC";
    printf("17) Permutaciones 'ABC':\n");
    permutar(s3,0,strlen(s3)-1);

    int set[]={1,2,3}, sub[3];
    printf("18) Subconjuntos {1,2,3}:\n");
    generarSubconjuntos(set,3,0,sub,0);

    int q[] = {5,2,9,1,5,6};
    quicksort(q,0,5);
    printf("19) Quicksort -> ");
    for(int i=0;i<6;i++) printf("%d ",q[i]);
    printf("\n");

    int m[] = {3,4,1,7,0,2};
    mergesort(m,0,5);
    printf("20) Mergesort -> ");
    for(int i=0;i<6;i++) printf("%d ",m[i]);
    printf("\n");

    return 0;
}
