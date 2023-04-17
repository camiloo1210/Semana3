//Leer dos números enteros y determinar a cuánto es igual el producto mutuo del primer dígito de cada uno.
//n1 valor añadido por el usuario,n2 segundo valor ingresado por el usuario
//m=multiplicacion,d=division primer valor,d2=division segundo valor
#include <stdio.h>
int main()
{
int n1,n2,m,d,d2;
printf("Ingrese el primer valor\n");
scanf("%i",&n1);
printf("Ingrese el segundo valor\n");
scanf("%i",&n2);
d=n1/10;
d2=n2/10;
m=d*d2;
printf("La multiplicacion del primer digito del primer valor %i y el primer digito del segundo valor %i es igual a %i",n1,n2,m );
return 0;
}
