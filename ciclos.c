#include <stdio.h>
#include <stdbool.h>
int main() {
    // contar del 0 al 10
    {
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);
    }
    printf("-----------------\n");
    }
    // contar numeros pares
    printf("---contar numeros pares----\n");
    {
        for (int i = 0; i <= 20; i = i + 2) {
            printf("%d\n", i);
        }
    }
    printf("---factorial de un numero----\n");
    {
        int num = 5;
        printf("ingrese un numero\n");
        //scanf("%d", &num);
        long long factorial = 1;
        for (int i = 2; i <= num; i++) {
            // 1 * 2 * 3 * 4 * 5....
            factorial = factorial * i;
        }
        printf("!%d = %d\n", num, factorial);
    }
    /*// (while) mientras no digas 's' o 'S' de salir
    printf("---menu----\n");
    char op;
    do {
        printf("\nIngrse su opcion:");
        scanf(" %c", &op);

    } while(op != 's' && op != 'S');*/
    // sumar los digitos de un numero
    {
    int numero = 888;
    int digito;
    int suma = 0;
    while (numero > 0) {
        digito = numero % 10;
        suma += digito;
        numero /= 10;
    }
    printf("suma de sus digitos = %d\n", suma);
    }
    // jump
    int contar = 0;
    etiqueta1:
    contar++;
    if ( contar < 10){
        goto etiqueta1;
    }
    printf("%d", contar);
}