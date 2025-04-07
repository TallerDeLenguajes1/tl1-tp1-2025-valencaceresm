#include <stdio.h>

int main() {
    int miVariable = 10;
       int *miPuntero = &miVariable;

       printf("Contenido del puntero: %p\n", miPuntero);
       printf("Dirección de memoria almacenada por el puntero: %p\n", miPuntero);
       printf("Dirección de memoria de la variable: %p\n", &miVariable);
       printf("Dirección de memoria del puntero: %p\n", &miPuntero);
       printf("Tamaño de memoria de la variable: %zu bytes\n", sizeof(miVariable));
       
    return 0;
}