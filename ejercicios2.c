#include <stdio.h>
#include <stdbool.h>
int main() {
    /*// varibles booleanas: int, _Bool, bool
    int falso = 0;
    int verdadero = 1;
    _Bool b = 0;
    b = verdadero;
    b = falso;
    bool b2 = true;
    b2 = false;
    b = !b2;*/
    /*// operaciones logica, OR, AND, Negacion
    bool b1 = false;
    bool b2 = true;
    bool b3 = b1 || b2;
    bool b4 = b1 || false;
    bool b5 = b1 && b2;
    bool b6 = b2 && true;
    bool b7 = !b1 || false;
    bool b8 = !(b1 && b2) && (b6 || b7);*/
    /*//dados 2 numeros indicar cual es el mayor
    int a = 22;
    int b = 21;
    bool aEsMayor = a > b;
    if (aEsMayor) {
        printf("a es mayor");
    } else{
        printf("a no es mayor");
    }*/
    /*// dado un numero entero indicar si es par o impar
    int a = 1024;
    bool esPar = a % 2 == 0;
    if (esPar) {
        printf("a es Par");
    } else {
        printf("a es Impar");
    }
    
    a = 1111;
    esPar = a % 2 == 0;
    if (esPar) {
        printf("a es Par");
    } else {
        printf("a es Impar");
    }*/
    // determinar si un numero esta en un rango de numeros
    int inferior = 100;
    int superior = 200;
    int numero = 150;
    bool siEsta = numero > inferior && numero < superior;
    if (siEsta) {
        printf("Si esta");
    } else {
        printf("No esta");
    }
}