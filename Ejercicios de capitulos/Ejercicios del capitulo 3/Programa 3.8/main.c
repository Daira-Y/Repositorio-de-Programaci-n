#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

void main(void)
{
    // Declaración de variables:
    // I se usa como contador en el bucle for.
    // NUM se usa para almacenar el número entero ingresado por el usuario.
    // FAC se usa para almacenar el factorial del número.
    int I, NUM;
    long FAC;

    // Imprime un mensaje solicitando al usuario que ingrese un número.
    printf("\nIngrese el número: ");

    // Lee el número introducido por el usuario y lo almacena en la variable NUM.
    scanf("%d", &NUM);

    // Comprueba si el número ingresado es mayor o igual a 0.
    if (NUM >= 0)
    {
        // Inicializa FAC a 1 para calcular el factorial.
        FAC = 1;

        // Bucle for que calcula el factorial del número.
        for (I = 1; I <= NUM; I++)
        {
            FAC *= I;
        }

        // Imprime el factorial del número.
        printf("\nEl factorial de %d es: %ld", NUM, FAC);
    }
    // Si el número ingresado es negativo, imprime un mensaje de error.
    else
    {
        printf("\nError en el dato ingresado");
    }
}

