#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    float PAG, SPA;
    SPA = 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);
    while(PAG)
    {
        SPA = SPA + PAG;
        printf("Ingrese el siguinte pago:\t");
        scanf("%f", &PAG);
    }
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}
void main (void)
{
    // Declaración de variables:
    // PAG se usa para almacenar cada pago ingresado por el usuario.
    // SPA se usa para acumular el total de los pagos.
    float PAG, SPA;

    // Inicializa la variable SPA a 0 antes de empezar a sumar los pagos.
    SPA = 0;

    // Imprime un mensaje solicitando al usuario que ingrese el primer pago.
    printf("Ingrese el primer pago:\t");

    // Lee el primer pago introducido por el usuario y lo almacena en la variable PAG.
    scanf("%f", &PAG);

    // Bucle while que continúa mientras PAG no sea igual a 0.
    while(PAG)
    {
        // Suma el pago leído a la variable SPA.
        SPA = SPA + PAG;

        // Imprime un mensaje solicitando al usuario que ingrese el siguiente pago.
        printf("Ingrese el siguiente pago:\t");

        // Lee el siguiente pago introducido por el usuario y lo almacena en la variable PAG.
        scanf("%f", &PAG);
    }

    // Imprime el valor total acumulado de los pagos con dos decimales.
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}
