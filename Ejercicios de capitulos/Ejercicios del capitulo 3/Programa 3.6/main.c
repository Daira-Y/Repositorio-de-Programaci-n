#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

void main(void)
{
    // Declaraci�n de variables:
    // I se usa como contador para el n�mero de salarios ingresados.
    // SAL se usa para almacenar cada salario ingresado por el usuario.
    // PRO se usa para almacenar el promedio de los salarios.
    // NOM se usa para acumular el total de los salarios.
    int I = 0;
    float SAL, PRO, NOM = 0;

    // Imprime un mensaje solicitando al usuario que ingrese el salario del primer profesor.
    printf("Ingrese el salario del profesor:\t");

    // Lee el salario introducido por el usuario y lo almacena en la variable SAL.
    scanf("%f", &SAL);

    // Bucle do-while que ejecuta al menos una vez y contin�a mientras SAL no sea igual a 0.
    do
    {
        // Suma el salario le�do a la variable NOM.
        NOM = NOM + SAL;

        // Incrementa el contador I en 1.
        I = I + 1;

        // Imprime un mensaje solicitando al usuario que ingrese el salario del siguiente profesor.
        // Indica que ingresar 0 terminar� el programa.
        printf("Ingrese el salario del profesor -0 para terminar- :\t");

        // Lee el siguiente salario introducido por el usuario y lo almacena en la variable SAL.
        scanf("%f", &SAL);
    }
    // Condici�n del bucle: contin�a mientras SAL no sea igual a 0.
    while (SAL);

    // Calcula el promedio de los salarios.
    PRO = NOM / I;

    // Imprime el valor total acumulado de los salarios (NOM) y el promedio de los salarios (PRO) con dos decimales.
    printf("\nN�mina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);
}
