#include <stdio.h>
#include <stdbool.h>

//void mostrar(int n[]) {
void mostrar(int *n, int lon) {
    for (size_t i = 0; i < lon; i++) {
        printf("%d,", *(n++));
    }
}

void cambiar2(int *a) {
    *a = *a + 1;
}

int main() {
    int dato = 2;
    int dato2 = 1;
    int dato3 = 3;
    int dato4 = 4;
    int *ptr;
    ptr = &dato;
    int *ptr2 = &dato2;
    int *ptr3 = &dato3;
    int *ptr4 = &dato4;
    printf("dato = %d\n", dato);
    printf("&dato = %d\n", &dato);
    printf("&dato = %p\n", &dato);
    printf("ptr = %p\n", ptr);
    printf("ptr2 = %p\n", ptr2);
    printf("ptr3 = %p\n", ptr3);
    printf("ptr4 = %p\n", ptr4);
    printf("*ptr = %d\n", *ptr);
    *ptr = 3;
    printf("dato = %d\n", dato);
    ptr4++;
    printf("ptr4 = %p\n", ptr4);
    printf("dato3 = %d\n", dato3);
    *ptr4 = 1;
    printf("dato3 = %d\n", dato3);
    int n[] = {1,2,3,4,5};
    ptr = n;
    printf("n[0] = %d\n", *ptr);
    printf("n[1] = %d\n", *(++ptr));
    mostrar(n, sizeof(n) / sizeof(int));

    int a = 1;
    printf("a = %d\n", a);
    cambiar2(&a);
    printf("a = %d\n", a);
}