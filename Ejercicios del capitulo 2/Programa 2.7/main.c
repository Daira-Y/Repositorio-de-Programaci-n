#include <stdio.h>
#include <stdlib.h>

int main()//Esta línea define la función principal main del programa, que retorna un entero (int).
{
    float P,S,R;//Declara tres variables de tipo float llamadas P, S y R para almacenar las ventas de los tres vendedores.
    printf("\nIngrese las ventas de los tres vendedores: ");//Imprime en pantalla un mensaje pidiendo al usuario que ingrese las ventas de los tres vendedores.
    scanf("%f %f %f", &P, &S, &R);//Lee tres valores de tipo float introducidos por el usuario y los asigna a las variables P, S y R.
    if (P > S)//Comprueba si las ventas del primer vendedor (P) son mayores que las ventas del segundo vendedor (S).
        if (P > R)//Si P es mayor que S, comprueba si también es mayor que las ventas del tercer vendedor (R).
            if(S > R)//Si P es mayor que R y S es mayor que R
                printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);//imprime que el orden de las ventas es P, S, R.

            else//Si P es mayor que R pero S no es mayor que R
            {
                printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);//imprime que el orden de las ventas es P, R, S.
            }

        else//Si P no es mayor que R
        {
            printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);//imprime que el orden de las ventas es R, P, S.
        }

    else if (S>R)//Si P no es mayor que S, comprueba si S es mayor que R.
        if//

        (P>R)//Si S es mayor que R y P es mayor que R
            printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);//imprime que el orden de las ventas es S, P, R.

        else//Si S es mayor que R pero P no es mayor que R
        {
            printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);// imprime que el orden de las ventas es S, R, P.
        }

    else//Si S no es mayor que R
    {
        printf("\n\n El orden es R, S y P> %8.2f %8.2f %8.2f", R, S, P);//imprime que el orden de las ventas es R, S, P
    }

}
