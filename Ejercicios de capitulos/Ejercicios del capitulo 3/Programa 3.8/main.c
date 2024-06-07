#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

void main(void)
{
    // Declaraci�n de variables:
    // I se usa como contador en el bucle for.
    // NUM se usa para almacenar el n�mero entero ingresado por el usuario.
    // FAC se usa para almacenar el factorial del n�mero.
    int I, NUM;
    long FAC;

    // Imprime un mensaje solicitando al usuario que ingrese un n�mero.
    printf("\nIngrese el n�mero: ");

    // Lee el n�mero introducido por el usuario y lo almacena en la variable NUM.
    scanf("%d", &NUM);

    // Comprueba si el n�mero ingresado es mayor o igual a 0.
    if (NUM >= 0)
    {
        // Inicializa FAC a 1 para calcular el factorial.
        FAC = 1;

        // Bucle for que calcula el factorial del n�mero.
        for (I = 1; I <= NUM; I++)
        {
            FAC *= I;
        }

        // Imprime el factorial del n�mero.
        printf("\nEl factorial de %d es: %ld", NUM, FAC);
    }
    // Si el n�mero ingresado es negativo, imprime un mensaje de error.
    else
    {
        printf("\nError en el dato ingresado");
    }
}

