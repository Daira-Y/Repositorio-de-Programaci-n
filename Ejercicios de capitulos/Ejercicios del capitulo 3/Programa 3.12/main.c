#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    // Declaración de variables enteras: I y J (contadores de bucles), NUM (número límite), SUM (suma de divisores), C (contador de números perfectos)
    int I, J, NUM, SUM, C = 0;
    // Imprime el mensaje para solicitar el número límite
    printf("\nIngrese el número límite: ");
    // Lee el número límite ingresado por el usuario
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
        // Si la suma de los divisores es igual a I, I es un número perfecto
        if (SUM == I)
        {
            // Imprime que I es un número perfecto
            printf("\n%d es un número perfecto", I);
            // Incrementa el contador de números perfectos
            C++;
        }
    }
    // Imprime el total de números perfectos encontrados entre 1 y NUM
    printf("\nEntre 1 y %d hay %d números perfectos", NUM, C);
}

