#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    // Declaraci�n e inicializaci�n de variables enteras: I (contador de t�rminos), B (alternador de suma/resta) y C (contador de iteraciones)
    int I = 1, B = 0, C;
    // Declaraci�n de una variable de tipo double para almacenar el resultado de la serie
    double RES;
    // Inicializaci�n de RES con el primer t�rmino de la serie (4 / 1)
    RES = 4.0 / I;
    // Inicializaci�n de C (contador de iteraciones) a 1
    C = 1;
    // Bucle que contin�a mientras la diferencia entre el valor calculado y 3.1415 sea mayor que 0.0005
    while ((fabs(3.1415 - RES)) > 0.0005)
    {
        // Incrementa I en 2 (pasa al siguiente denominador impar en la serie)
        I += 2;
        // Si B es 1 (verdadero), suma el t�rmino actual a RES
        if (B)
        {
            RES += (double)(4.0 / I);
            // Cambia el valor de B a 0 (falso)
            B = 0;
        }
        // Si B es 0 (falso), resta el t�rmino actual a RES
        else
        {
            RES -= (double)(4.0 / I);
            // Cambia el valor de B a 1 (verdadero)
            B = 1;
        }
        // Incrementa el contador de iteraciones
        C++;
    }
    // Imprime el n�mero de t�rminos necesarios para que la diferencia sea menor o igual a 0.0005
    printf("\nNumero de terminos:%d", C);
}
