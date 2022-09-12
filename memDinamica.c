#include <stdio.h>
#include <stdbool.h>
int main() {
    int *d = malloc(sizeof(int));
    *d = 10;
    printf("%d\n", *d);
    free(d);
    d = NULL;
    d = malloc(10 * sizeof(int));
    for (int *i = d; i < d + 10; i++) {
        *i = 2;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", d[i]);
    }
    free(d);
    d = NULL;
}
