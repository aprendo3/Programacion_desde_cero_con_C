#include <stdio.h>
#include <stdbool.h>
// struct punto {
//     int x;
//     int y;
// };
typedef struct {
    int x;
    int y;
} punto;

typedef struct {
    char *nombre;
    int edad;
} persona;
void mostrarPersona(persona p){
    printf("nombre = %s, edad = %d\n", p.nombre, p.edad);
}
void cambiar3(punto p) {
    p.x = p.x + 1;
}
void cambiar4(punto *p) {
    p->x = p->x + 1;
}
int main() {
    //struct punto uno = {10, 20};
    punto uno = {10, 20};
    printf("uno.x = %d, uno.y = %d\n", uno.x, uno.y);
    uno.x = 5;
    uno.y = 7;
    printf("uno.x = %d, uno.y = %d\n", uno.x, uno.y);
    cambiar3(uno);
    printf("uno.x = %d, uno.y = %d\n", uno.x, uno.y);
    cambiar4(&uno);
    printf("uno.x = %d, uno.y = %d\n", uno.x, uno.y);
    persona juan = {"Juan", 20};
    persona pedro = {"Pedro", 30};
    mostrarPersona(juan);
    mostrarPersona(pedro);

}
