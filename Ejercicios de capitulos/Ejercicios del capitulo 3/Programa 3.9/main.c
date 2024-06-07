#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <math.h>  // Se incluye para la función pow

void main(void)
{
    // Declaración de variables:
    // I se usa como contador en el bucle for.
    // N se usa para almacenar el número de datos que se van a procesar.
    // NUM se usa para almacenar cada número ingresado por el usuario.
    // SPA se usa para acumular la suma de los números pares.
    // SIM se usa para acumular la suma de los números impares.
    // CIM se usa para contar la cantidad de números impares.
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;

    // Imprime un mensaje solicitando al usuario que ingrese el número de datos a procesar.
    printf("Ingrese el número de datos que se van a procesar:\t");

    // Lee el número de datos introducido por el usuario y lo almacena en la variable N.
    scanf("%d", &N);

    // Comprueba si el número de datos ingresado es mayor que 0.
    if (N > 0)
    {
        // Bucle for que se ejecuta N veces, donde N es el número de datos.
        for (I = 1; I <= N; I++)
        {
            // Imprime un mensaje solicitando al usuario que ingrese el número I.
            printf("\nIngrese el número %d: ", I);

            // Lee el número introducido por el usuario y lo almacena en la variable NUM.
            scanf("%d", &NUM);

            // Comprueba si el número ingresado no es 0.
            if (NUM)
            {
                // Comprueba si el número es par.
                if (pow(-1, NUM) > 0)
                {
                    // Suma el número par a la variable SPA.
                    SPA = SPA + NUM;
                }
                // Si el número es impar.
                else
                {
                    // Suma el número impar a la variable SIM.
                    SIM = SIM + NUM;

                    // Incrementa el contador CIM en 1.
                    CIM++;
                }
            }
        }

        // Imprime la suma de los números pares.
        printf("\nLa suma de los números pares es: %d", SPA);

        // Imprime el promedio de los números impares.
        // La división se convierte a float para evitar división entera.
        printf("\nEl promedio de números impares es: %5.2f", (float)SIM / CIM);
    }
    // Si el número de datos ingresado no es mayor que 0, imprime un mensaje de error.
    else
    {
        printf("\nEl valor de N es incorrecto");
    }
}
