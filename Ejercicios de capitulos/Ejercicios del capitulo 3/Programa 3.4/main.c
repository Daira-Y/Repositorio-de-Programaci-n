#include <stdio.h>
#include <stdlib.h>

v#include <stdio.h>
#include <math.h>

void main(void)
{
    // Declaración de variables:
    // NUM se usa para almacenar cada número entero ingresado por el usuario.
    // CUA se usa para almacenar el cuadrado de NUM.
    // SUC se usa para acumular la suma de los cuadrados.
    int NUM;
    long CUA, SUC = 0;

    // Imprime un mensaje solicitando al usuario que ingrese un número entero.
    // Indica que ingresar 0 termina el programa.
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &NUM);

    // Bucle while que continúa mientras NUM no sea igual a 0.
    while (NUM)
    {
        // Calcula el cuadrado del número ingresado (NUM) y lo almacena en CUA.
        CUA = pow(NUM, 2);

        // Imprime el cuadrado del número.
        printf("%d al cuadrado es %ld\n", NUM, CUA);

        // Suma el cuadrado al acumulador SUC.
        SUC = SUC + CUA;

        // Imprime un mensaje solicitando al usuario que ingrese otro número entero.
        // Indica que ingresar 0 termina el programa.
        printf("\nIngrese un numero entero -0 para terminar-:\t");
        scanf("%d", &NUM);
    }

    // Imprime el valor total acumulado de los cuadrados.
    printf("\nLa suma de los cuadrados es %ld\n", SUC);
}

