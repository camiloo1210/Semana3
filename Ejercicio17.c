#include <stdio.h>

 main() {
    // Leer los valores de x e y
    int x, y;
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    // Calcular el promedio de los primeros x múltiplos de 2
    int suma2 = 0;
    for (int i = 1; i <= x; i++) {
        suma2 += i * 2;
    }
    float promedio2 = suma2 / x;

    // Se calcula la suma de los primeros y múltiplos de 5
    int suma5 = 0;
    for (int i = 1; i <= y; i++) {
        suma5 += i * 5;
    }
    float promedio5=suma5/y;
    // Se compara los promedios
    if (promedio2 > promedio5) {
        printf("El promedio de los primeros %i multiplos de 2 es mayor que el promedio de los primeros %i multiplos de 5\n", x, y);
    } else {
        printf("El promedio de los primeros %i multiplos de 5 es mayor que el promedio de los primeros %i multiplos de 2\n", y, x);
    }

}