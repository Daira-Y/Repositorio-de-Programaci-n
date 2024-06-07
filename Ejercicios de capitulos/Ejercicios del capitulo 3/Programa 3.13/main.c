#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    // Declaración de variables enteras I (contador del bucle), PRI (primer término), SEG (segundo término) y SIG (siguiente término)
    int I, PRI = 0, SEG = 1, SIG;
    // Imprime los dos primeros términos de la serie de Fibonacci: 0 y 1
    printf("\t %d \t %d", PRI, SEG);
    // Bucle for que comienza en 3 y continúa hasta 50, inclusive, para generar los siguientes términos de la serie de Fibonacci
    for (I = 3; I <= 50; I++)
    {
        // Calcula el siguiente término de la serie sumando los dos términos anteriores
        SIG = PRI + SEG;
        // Actualiza PRI para que sea el término anterior
        PRI = SEG;
        // Actualiza SEG para que sea el término actual
        SEG = SIG;
        // Imprime el siguiente término de la serie
        printf("\t %d", SIG);
    }
}

