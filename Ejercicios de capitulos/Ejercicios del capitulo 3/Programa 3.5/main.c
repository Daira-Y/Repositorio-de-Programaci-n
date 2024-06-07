#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

void main(void)
{
    // Declaración de variables:
    // PAG se usa para almacenar cada pago ingresado por el usuario.
    // SPA se usa para acumular el total de los pagos.
    float PAG, SPA = 0;

    // Imprime un mensaje solicitando al usuario que ingrese el primer pago.
    printf("Ingrese el primer pago:\t");

    // Lee el primer pago introducido por el usuario y lo almacena en la variable PAG.
    scanf("%f", &PAG);

    // Bucle do-while que ejecuta al menos una vez y continúa mientras PAG no sea igual a 0.
    do
    {
        // Suma el pago leído a la variable SPA.
        SPA = SPA + PAG;

        // Imprime un mensaje solicitando al usuario que ingrese el siguiente pago.
        // Indica que ingresar 0 terminará el programa.
        printf("Ingrese el siguiente pago -0 para terminar-:\t ");

        // Lee el siguiente pago introducido por el usuario y lo almacena en la variable PAG.
        scanf("%f", &PAG);
    }
    // Condición del bucle: continúa mientras PAG no sea igual a 0.
    while (PAG);

    // Imprime el valor total acumulado de los pagos con dos decimales.
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}
