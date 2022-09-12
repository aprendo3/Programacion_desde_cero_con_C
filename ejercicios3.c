#include <stdio.h>
#include <stdbool.h>
int main() {
    /*printf("Hola \n Mundo\n");
    printf("Hola \n \'Mundo\'\n");
    printf("Hola \n\tMundo\n");*/
    /*
    %d -> numero entero
    %f -> numero de punto flotante
    %x -> numero hexadecimal
    %c -> caracter
    %s -> cadena
    */
    /*int a = 10;
    float b = 1.001;
    int c = 65535;
    int d = 'z';
    char e[] = "Aprendo";
    printf("%d\n", a);
    printf("%f\n", b);
    printf("%x\n", c);
    printf("%c\n", d);
    printf("%s\n", e);*/
    /*int a = 20;
    int b = 30;
    int c = 40;
    printf("a = %d, b = %d, c = %d\n", a, b, c);*/
    /*int a;
    int b;
    printf("Ingrese un numero:\n");
    scanf("%d", &a);
    printf("Ingrese otro numero:\n");
    scanf("%d", &b);
    int c = a + b;
    printf("la suma de %d + %d = %d\n", a, b, c);*/
    int a;
    printf("Ingrese un numero:\n");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("%d es Par\n", a);
    } else {
        printf("%d es Impar\n", a);
    }
}