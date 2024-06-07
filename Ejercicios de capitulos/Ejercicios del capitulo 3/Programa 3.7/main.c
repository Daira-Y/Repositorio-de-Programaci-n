#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

void main(void)
{
    // Declaración de variables:
    // I se usa como contador en el bucle for.
    // N se usa para almacenar el número de lanzamientos ingresado por el usuario.
    // LAN se usa para almacenar cada lanzamiento ingresado por el usuario.
    // SLA se usa para acumular la suma de los lanzamientos y luego para almacenar el promedio.
    int I, N;
    float LAN, SLA = 0;

    // Bucle do-while que solicita al usuario que ingrese el número de lanzamientos.
    // Continúa solicitando hasta que el número esté en el rango de 1 a 11.
    do
    {
        // Imprime un mensaje solicitando al usuario que ingrese el número de lanzamientos.
        printf("Ingrese el número de lanzamientos:\t");

        // Lee el número de lanzamientos introducido por el usuario y lo almacena en la variable N.
        scanf("%d", &N);
    }
    // Condición del bucle: continúa mientras N sea menor que 1 o mayor que 11.
    while (N < 1 || N > 11);

    // Bucle for que se ejecuta N veces, donde N es el número de lanzamientos.
    for (I = 1; I <= N; I++)
    {
        // Imprime un mensaje solicitando al usuario que ingrese el lanzamiento I.
        printf("\nIngrese el lanzamiento %d: ", I);

        // Lee el lanzamiento introducido por el usuario y lo almacena en la variable LAN.
        scanf("%f", &LAN);

        // Suma el lanzamiento leído a la variable SLA.
        SLA = SLA + LAN;
    }

    // Calcula el promedio de los lanzamientos.
    SLA = SLA / N;

    // Imprime el valor promedio de los lanzamientos con dos decimales.
    printf("\nEl promedio de lanzamientos es: %.2f", SLA);
}

