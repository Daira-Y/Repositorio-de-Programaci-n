#include <stdio.h>
#include <stdlib.h>

#define TRUE 1//Define una constante llamada TRUE con el valor 1.
#define FALSE 0//Define una constante llamada FALSE con el valor 0.
int main()//Define la función principal del programa que no recibe argumentos y devuelve un valor entero.
{
    float PRO;//Declara una variable de punto flotante llamada PRO, que se usará para almacenar el promedio del alumno.


    while(TRUE)//Inicia un bucle infinito porque TRUE es siempre 1, lo que significa que la condición es siempre verdadera.
    {
        printf("\nIngrese el promedio del alumno: ");//Muestra el mensaje "Ingrese el promedio del alumno: " en la consola, solicitando al usuario que introduzca un valor.
        scanf("%f", &PRO);//Lee un valor de punto flotante introducido por el usuario y lo almacena en la variable PRO.

         if ((PRO>=0) && (PRO<=4))//Comprueba si el valor de PRO está en el rango de 0 a 4, inclusive. Esta es la condición para verificar que el promedio es válido.
    {
        if(PRO>=3.1)//Comprueba si el promedio es mayor o igual a 3.1.
        {

            printf("\nAprobado");//Si PRO es mayor o igual a 3.1, imprime "Aprobado".

        }
        else//Si PRO es menor que 3.1
        {
            printf("\nReprobado\n\n");//Imprime "Reprobado".
        }


        printf("---------------\n\n\n");//Imprime una línea de guiones para separar visualmente las entradas y salidas.
    }
    else//Si PRO no está en el rango de 0 a 4.
    {
        printf("Valor no valido ingresar 0 a 4");//Imprime "Valor no valido ingresar 0 a 4".

    }
    }



    return 0;// Finaliza la ejecución de la función main y devuelve 0 al sistema operativo, indicando que el programa terminó correctamente.
}
