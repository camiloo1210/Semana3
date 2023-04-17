//Leer un número y calcularle su factorial.
//n=numero que el usuario debe ingresar
//c=contador,f=factorial,
#include <stdio.h>
int main() {
    int n, c, f = 1;
    printf("Ingrese el valor del numero que quiere calcular el factorial:\n ");
    scanf("%i", &n);
    for (c = 1; c <= n; c++) {
        f = f * c;  //se multiplica el valor donde se acumula las multiplicaciones por el contador inicializado en 1 
    }
    printf("El factorial de %i es %i\n", n, f);
    return 0;
}