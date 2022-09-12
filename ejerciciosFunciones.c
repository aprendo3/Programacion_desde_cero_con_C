#include <stdio.h>
#include <stdbool.h>
// sumar 2 numeros
int sumar(int a, int b) {
    int c = a + b;
    return c;
}
// verificar si un numero es par o impar
void esPar(int numero) {
    if (numero % 2 == 0) {
        printf("%d es par\n", numero);
    } else {
        printf("%d no es par\n", numero);
    }
}
// sacar el factorial de un numero
int factorial(int numero) {
    int f = 1;
    if (numero <= 2){
        return numero;
    }

    for (size_t i = 1; i <= numero; i++) {
        // 1*2*3*...*n
        f = f * i;
    }
    return f;
}
// dado un numero verificar si es primo
void esPrimo(int numero) {
    bool primo = true;
    if (numero > 0 && numero < 3) {
        primo = true;
    } else {
        // n % i == 0
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                primo = false;
                break;
            }
        }
    }
    if (primo) {
        printf("%d Es primo\n", numero);
    } else {
        printf("%d No es primo\n", numero);
    }
}
// sacar el promedio de un arreglo de enteros
float promedio(int numeros[], int lon) {
    float suma = 0;
    printf("%d\n", lon);

    for (size_t i = 0; i < lon; i++) {
        suma += numeros[i];
    }
    
    return suma / lon;
}
// recursividad
void porSiempre(){
    porSiempre();
}
void contar(int a){
    if ( a > 0) {
        contar(a - 1);
    }
}
// Cambiar el Valor de un parametro
void cambio(int a) {
    a++;
    printf("%d en la funcion cambio\n", a);
}
int main() {
    /*int a = sumar(2, 3);
    int b = 3;
    printf("a=%d\n", a);
    printf("%d + %d = %d\n", a, b, sumar(a,b));
    esPar(1024);
    esPar(1111);*/
    /*int a = 5;
    int b = 9;
    printf("%d! = %d\n", a, factorial(a));
    printf("%d! = %d\n", b, factorial(b));
    esPrimo(3);
    esPrimo(9);
    esPrimo(17);*/
    /*int a[] = {1,2,3,4,5};
    int b[] = {1,2,9};
    float c = promedio(a, sizeof(a) / sizeof(int));
    printf("%f\n", c);
    c = promedio(b, sizeof(b) / sizeof(int));
    printf("%f\n", c);*/
    //porSiempre();
    //contar(3);
    int a = 4;
    cambio(a);
    printf("%d en la funcion main\n", a);

}