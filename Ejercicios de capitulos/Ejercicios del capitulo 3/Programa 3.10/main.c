#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

void main(void)
{
    // Declaración e inicialización de variables:
    // I se usa para generar los números de la serie, inicializado en 2.
    // CAM es un indicador para alternar el incremento de I, inicializado en 1.
    // SSE se usa para acumular la suma de la serie, inicializado en 0.
    int I = 2, CAM = 1;
    long SSE = 0;

    // Bucle while que se ejecuta mientras I sea menor o igual a 2500.
    while (I <= 2500)
    {
        // Suma el valor de I a SSE.
        SSE = SSE + I;

        // Imprime el valor de I.
        printf("\t %d", I);

        // Comprueba el valor de CAM.
        if (CAM)
        {
            // Si CAM es 1, incrementa I en 5.
            I += 5;

            // Cambia el valor de CAM a 0.
            CAM--;
        }
        else
        {
            // Si CAM es 0, incrementa I en 3.
            I += 3;

            // Cambia el valor de CAM a 1.
            CAM++;
        }
    }

    // Imprime la suma de la serie SSE.
    printf("\nLa suma de la serie es: %ld", SSE);
}

