#include <stdio.h>
#include <stdbool.h>
int main() {
    // sumar los elementos de un arreglo, y su promedio
    {
    int n[] = {1,2,3,4,5};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += n[i];
    }
    int lon = sizeof(n) / sizeof(n[0]);
    float promedio = sum / (float)lon;
    printf("suma = %d, promdedio = %f\n", 
        sum, promedio);
    }
    // imprimir una cadena caracter a caracter
    {
    char cadena[] = "Aprendo";
    int indice = 0;
    while (cadena[indice] != '\0') {
        printf("%c", cadena[indice]);
        indice++;
    }
    printf("\n");
    }
    // convertir una cadena de minuscula a mayuscula
    {
    char cadena[] = "Aprendo";
    char dif = 'a' - 'A';
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            cadena[i] = cadena[i] - dif;
        }
    }
    printf("%s\n", cadena);
    }
    // invertir una cadena
    {
    char cadena[] = "odnerpA";
    int lon = sizeof(cadena) / sizeof(char);
    char invertida[lon];
    for (int i = lon - 2, j = 0; i >= 0; i--, j++) {
        invertida[j] = cadena[i];
    }
    printf("%s -> %s\n", cadena, invertida);
    }
    // ordenar los elementos de una cadena de enteros
    int a[] = { 4, 1, 5, 3, 2};
    int lon = sizeof(a) / sizeof(int);
    for (int i = 0; i < lon - 1; i++) {
        for (int j = i + 1; j < lon; j++) {
            if (a[i] > a[j]) {
                int d = a[i];
                a[i] = a[j];
                a[j] = d;
            }
        }
    }
    
    for (int i = 0; i < lon; i++) {
        printf("%d, ", a[i]);
    }
}