#include <stdio.h>

int main() {
    // Variables
    //int a = 0;
    /*int b = 1;
    int c = 2;
    int d = b + c;
    float f = 1.5f;
    double dd = 1.5;*/
    /*a = 1;
    a = 2;
    a = 3;*/
    /*char c = 'h';
    c = 'a';
    c = 'b';
    c = 'c';*/
    /*char c[] = "Hola";
    int a[] = {1,2,3,4,5};
    int b[5];
    b[0] = 1;
    b[1] = 1;
    b[2] = 1;
    b[3] = 1;*/
    
    // Condicionales
    /*int a = 5;
    if (a == 5) {
        printf("Igual");
    }
    if (a > 5) {
        printf("Mayor");
    }

    a = a - 2;
    if (a < 5) {
        printf("Es Menor");
    } else {
        printf("No es menor");
    }*/
    
    // Entrada/Salida
    /*printf("Aprendo\n");
    int a;
    printf("Ingresar un numero\n");
    scanf("%d", &a);
    printf("El numero es: %d\n", a);
    char nombre[32];
    printf("Ingresar nombre\n");
    scanf("%s", &nombre);
    printf("El nombre es: %s\n", nombre);*/

    //Ciclos
    /*int i = 0;
    while(i < 3) {
        i = i + 1;
    }

    for(
        i = 0 ; 
        i < 3; 
        i = i + 1
        ) {
        printf("Aprendo\n");
    }
    
    for (int j = 0; j <= 3; j++) {
        if (j == 1) {
            continue;
        }
        
        printf("%d\n", j);
        if (j == 2) {
            break;
        }
    }*/
    
    //Arreglos
    const TAM = 4;
    int n[TAM];
    for (size_t i = 0; i < TAM; i++)  {
        n[i] = 2;
    }

    for (int i = TAM - 1; i >= 0; i--)  {
        n[i] = 3;
    }
    

    return 0;
}