#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <math.h>  // Se incluye para la funci�n pow

void main(void)
{
    // Declaraci�n de variables:
    // I se usa como contador en el bucle for.
    // N se usa para almacenar el n�mero de datos que se van a procesar.
    // NUM se usa para almacenar cada n�mero ingresado por el usuario.
    // SPA se usa para acumular la suma de los n�meros pares.
    // SIM se usa para acumular la suma de los n�meros impares.
    // CIM se usa para contar la cantidad de n�meros impares.
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;

    // Imprime un mensaje solicitando al usuario que ingrese el n�mero de datos a procesar.
    printf("Ingrese el n�mero de datos que se van a procesar:\t");

    // Lee el n�mero de datos introducido por el usuario y lo almacena en la variable N.
    scanf("%d", &N);

    // Comprueba si el n�mero de datos ingresado es mayor que 0.
    if (N > 0)
    {
        // Bucle for que se ejecuta N veces, donde N es el n�mero de datos.
        for (I = 1; I <= N; I++)
        {
            // Imprime un mensaje solicitando al usuario que ingrese el n�mero I.
            printf("\nIngrese el n�mero %d: ", I);

            // Lee el n�mero introducido por el usuario y lo almacena en la variable NUM.
            scanf("%d", &NUM);

            // Comprueba si el n�mero ingresado no es 0.
            if (NUM)
            {
                // Comprueba si el n�mero es par.
                if (pow(-1, NUM) > 0)
                {
                    // Suma el n�mero par a la variable SPA.
                    SPA = SPA + NUM;
                }
                // Si el n�mero es impar.
                else
                {
                    // Suma el n�mero impar a la variable SIM.
                    SIM = SIM + NUM;

                    // Incrementa el contador CIM en 1.
                    CIM++;
                }
            }
        }

        // Imprime la suma de los n�meros pares.
        printf("\nLa suma de los n�meros pares es: %d", SPA);

        // Imprime el promedio de los n�meros impares.
        // La divisi�n se convierte a float para evitar divisi�n entera.
        printf("\nEl promedio de n�meros impares es: %5.2f", (float)SIM / CIM);
    }
    // Si el n�mero de datos ingresado no es mayor que 0, imprime un mensaje de error.
    else
    {
        printf("\nEl valor de N es incorrecto");
    }
}
