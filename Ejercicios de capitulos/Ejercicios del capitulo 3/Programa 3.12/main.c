#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    // Declaraci�n de variables enteras: I y J (contadores de bucles), NUM (n�mero l�mite), SUM (suma de divisores), C (contador de n�meros perfectos)
    int I, J, NUM, SUM, C = 0;
    // Imprime el mensaje para solicitar el n�mero l�mite
    printf("\nIngrese el n�mero l�mite: ");
    // Lee el n�mero l�mite ingresado por el usuario
    scanf("%d", &NUM);
    // Bucle que itera desde 1 hasta NUM (incluido)
    for (I = 1; I <= NUM; I++)
    {
        // Inicializa la suma de divisores a 0
        SUM = 0;
        // Bucle que itera desde 1 hasta la mitad de I (incluido)
        for (J = 1; J <= (I / 2); J++)
            // Si J es un divisor de I, lo suma a SUM
            if ((I % J) == 0)
                SUM += J;
        // Si la suma de los divisores es igual a I, I es un n�mero perfecto
        if (SUM == I)
        {
            // Imprime que I es un n�mero perfecto
            printf("\n%d es un n�mero perfecto", I);
            // Incrementa el contador de n�meros perfectos
            C++;
        }
    }
    // Imprime el total de n�meros perfectos encontrados entre 1 y NUM
    printf("\nEntre 1 y %d hay %d n�meros perfectos", NUM, C);
}

