#include <stdio.h>
// funciones
void saludar() {
    printf("Aprendo\n");
}
int uno() {
    int a = 1;
    return a;
}
int duplicar(int a) {
    return 2 * a;
}
void cambiar1(int a) {
    a = 22;
}
void cambiar2(int* a) {
    *a = 33;
}
int main() {
    saludar();
    int a = uno();
    printf("a=%d\n", a);
    int b = duplicar(uno() + uno());
    printf("b=%d\n", b);
    int c = duplicar(4);
    printf("c=%d\n", c);
    int d = 4;
    cambiar1(d);
    printf("d=%d\n", d);
    cambiar2(&d);
    printf("d=%d\n", d);

    return 0;
}