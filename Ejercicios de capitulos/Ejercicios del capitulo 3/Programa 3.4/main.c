#include <stdio.h>
#include <stdlib.h>

v#include <stdio.h>
#include <math.h>

void main(void)
{
    // Declaraci�n de variables:
    // NUM se usa para almacenar cada n�mero entero ingresado por el usuario.
    // CUA se usa para almacenar el cuadrado de NUM.
    // SUC se usa para acumular la suma de los cuadrados.
    int NUM;
    long CUA, SUC = 0;

    // Imprime un mensaje solicitando al usuario que ingrese un n�mero entero.
    // Indica que ingresar 0 termina el programa.
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &NUM);

    // Bucle while que contin�a mientras NUM no sea igual a 0.
    while (NUM)
    {
        // Calcula el cuadrado del n�mero ingresado (NUM) y lo almacena en CUA.
        CUA = pow(NUM, 2);

        // Imprime el cuadrado del n�mero.
        printf("%d al cuadrado es %ld\n", NUM, CUA);

        // Suma el cuadrado al acumulador SUC.
        SUC = SUC + CUA;

        // Imprime un mensaje solicitando al usuario que ingrese otro n�mero entero.
        // Indica que ingresar 0 termina el programa.
        printf("\nIngrese un numero entero -0 para terminar-:\t");
        scanf("%d", &NUM);
    }

    // Imprime el valor total acumulado de los cuadrados.
    printf("\nLa suma de los cuadrados es %ld\n", SUC);
}

