#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    // Declaración e inicialización de variables enteras R1, R2, R3, R4 y R5 a 0
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;
    // Declaración de una variable flotante CAL para almacenar la calificación
    float CAL;
    // Imprime el mensaje para solicitar la calificación del alumno
    printf("Ingresa la calificación del alumno: ");
    // Lee una calificación flotante ingresada por el usuario y la almacena en CAL
    scanf("%f", &CAL);
    // Inicia un bucle que continúa hasta que CAL sea igual a -1
    while (CAL != -1)
    {
        // Si la calificación es menor que 4, incrementa el contador R1
        if (CAL < 4)
            R1++;
        else
            // Si la calificación es menor que 6, incrementa el contador R2
            if (CAL < 6)
                R2++;
            else
                // Si la calificación es menor que 8, incrementa el contador R3
                if (CAL < 8)
                    R3++;
                else
                    // Si la calificación es menor que 9, incrementa el contador R4
                    if (CAL < 9)
                        R4++;
                    else
                        // Si la calificación es 9 o mayor, incrementa el contador R5
                        R5++;
        // Solicita al usuario ingresar otra calificación
        printf("Ingresa la calificación del alumno: ");
        // Lee la nueva calificación ingresada por el usuario
        scanf("%f", &CAL);
    }
    // Imprime el número de calificaciones en el rango 0..3.99
    printf("\n0..3.99 = %d", R1);
    // Imprime el número de calificaciones en el rango 4..5.99
    printf("\n4..5.99 = %d", R2);
    // Imprime el número de calificaciones en el rango 6..7.99
    printf("\n6..7.99 = %d", R3);
    // Imprime el número de calificaciones en el rango 8..8.99
    printf("\n8..8.99 = %d", R4);
    // Imprime el número de calificaciones en el rango 9..10
    printf("\n9..10 = %d", R5);
}
