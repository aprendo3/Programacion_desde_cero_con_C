#include <stdio.h>
// Punteros
int main() {
    int c = 10;
    int a = 1;
    int b = 20;
    int* ptra = &a;
    int* ptrb = &b;
    int* ptrc = &c;
    printf("a=%d\n", a);
    printf("ptra=%p\n", ptra);
    a++;
    (*ptra)++;
    ptra++;
    (*ptra)++;
    return 0;
}