#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    // Declaraci�n de variables enteras I (contador del bucle), PRI (primer t�rmino), SEG (segundo t�rmino) y SIG (siguiente t�rmino)
    int I, PRI = 0, SEG = 1, SIG;
    // Imprime los dos primeros t�rminos de la serie de Fibonacci: 0 y 1
    printf("\t %d \t %d", PRI, SEG);
    // Bucle for que comienza en 3 y contin�a hasta 50, inclusive, para generar los siguientes t�rminos de la serie de Fibonacci
    for (I = 3; I <= 50; I++)
    {
        // Calcula el siguiente t�rmino de la serie sumando los dos t�rminos anteriores
        SIG = PRI + SEG;
        // Actualiza PRI para que sea el t�rmino anterior
        PRI = SEG;
        // Actualiza SEG para que sea el t�rmino actual
        SEG = SIG;
        // Imprime el siguiente t�rmino de la serie
        printf("\t %d", SIG);
    }
}

