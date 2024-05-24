#include <stdio.h>
#include <math.h>

void main(void)//Define la función principal del programa que no recibe argumentos y no devuelve un valor.
{
    int T, P, N;//Declara tres variables enteras T, P, y N.
    printf("Ingrese los valores de T, P Y N: ");//Muestra el mensaje "Ingrese los valores de T, P Y N: " en la consola, solicitando al usuario que introduzca tres valores.
    scanf("%d %d %d", &T, &P, &N);//Lee tres valores enteros introducidos por el usuario y los almacena en las variables T, P, y N.
    if (P != 0)//Comprueba si el valor de P es diferente de cero.
    {
        if(pow(T/P, N) == (pow (T, N)/ pow(P, N)))// Comprueba si el resultado de elevar T/P a la potencia N es igual al resultado de elevar T a la potencia N dividido por el resultado de elevar P a la potencia N.
           printf("\nSe comprueba la igualdad");//Si la condición del if es verdadera (es decir, si se cumple la igualdad), imprime "Se comprueba la igualdad" en la consola.
        else//Si la condición del if no es verdadera (es decir, si no se cumple la igualdad), continúa con la siguiente instrucción.
           printf("\nNo se comprueba la igualdad");//Si la condición del if no es verdadera (es decir, si no se cumple la igualdad), imprime "No se comprueba la igualdad" en la consola.
    }
    else//Si la condición del if (P != 0) no es verdadera (es decir, si P es igual a cero), continúa con la siguiente instrucción.

         printf("\nP tiene que ser diferente de cero");//Si P es igual a cero, imprime "P tiene que ser diferente de cero" en la consola.
}
