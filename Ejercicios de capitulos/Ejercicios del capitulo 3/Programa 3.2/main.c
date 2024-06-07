#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    // Declaración de variables:
    // I se usa como contador en el bucle for.
    // N se usa para almacenar el número de datos que el usuario va a ingresar.
    // NUM se usa para almacenar cada dato ingresado por el usuario.
    // SUM se usa para acumular la suma de los números positivos.
    int I, N, NUM, SUM;

    // Inicializa la variable SUM a 0 antes de empezar a sumar los números positivos.
    SUM = 0;

    // Imprime un mensaje solicitando al usuario que ingrese la cantidad de datos.
    printf("Ingrese el numero de datos:\t");

    // Lee el número de datos (N) introducido por el usuario.
    scanf("%d", &N);

    // Bucle for que se ejecuta N veces, donde N es el número de datos ingresados por el usuario.
    for (I=1; I<=N; I++)
    {
        // Imprime un mensaje solicitando el dato número I.
        printf("Ingrese el dato numero %d:\t", I);

        // Lee el dato introducido por el usuario y lo almacena en la variable NUM.
        scanf("%d", &NUM);

        // Si el número ingresado (NUM) es mayor que 0, lo suma a la variable SUM.
        if (NUM > 0)
            SUM = SUM + NUM;
    }

    // Imprime el valor total de la suma de los números positivos.
    printf("\nLa suma de los positivos es: %d", SUM);
}

