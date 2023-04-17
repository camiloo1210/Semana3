//Leer un número entero y determinar cuál es el mayor de sus dígitos.
//n1=El valor añadido por el usuario
//d=digito,md=maximo digito
#include<stdio.h>
main()
{
    int n1,d,md=0;
    printf("Ingrese un valor entero para poder saber que valor es el mayor de los digitos\n");
    scanf("%i",&n1);
    while (n1>0)
    {
        d=n1%10;
        if (d>md)
        {
            md=d;
        }
        n1=n1/10;
    }
    printf("El mayor digito de dicho numero es %i",md);
}
