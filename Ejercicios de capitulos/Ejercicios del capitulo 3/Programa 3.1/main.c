#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    // Declaraci�n de variables:
    // I se usa como contador en el bucle for.
    // SAL se usa para almacenar el salario individual de cada profesor.
    // NOM se usa para acumular el total de los salarios (la n�mina).
    int I;
    float SAL, NOM;

    // Inicializa la variable NOM a 0 antes de empezar a sumar los salarios.
    NOM = 0;

    // Bucle for que se ejecuta 15 veces (para 15 profesores).
    for (I=1; I<=15; I++)
    {
        // Imprime un mensaje solicitando el salario del profesor n�mero I.
        printf("\Ingrese el salario del profesor%d:\t", I);

        // Lee el salario introducido por el usuario y lo almacena en la variable SAL.
        scanf("%f", &SAL);

        // Suma el salario le�do a la variable NOM.
        NOM = NOM + SAL;
    }

    // Imprime el total acumulado de los salarios (la n�mina) con dos decimales.
    printf("\nEl total de la nomina es: %.2f", NOM);
}
