#include <stdio.h>

// (Funciones cuadrado, cuadrado_void, mostrar_direccion_contenido, invertir, ordenar van aquí)

int main() {
    int num1, num2;
    printf("Ingrese dos números: ");
    scanf("%d %d", &num1, &num2);

    cuadrado_void(num1);
    mostrar_direccion_contenido(num2);

    invertir(&num1, &num2);
    printf("Después de invertir: num1 = %d, num2 = %d\n", num1, num2);

    ordenar(&num1, &num2);
    printf("Después de ordenar: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}