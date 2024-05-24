#include <stdio.h>
#include <math.h>

void main (void)//Define la funci�n principal del programa que no recibe argumentos y no devuelve un valor.
{
   int NUM;//Declara una variable entera llamada NUM que se usar� para almacenar el n�mero ingresado por el usuario.
   printf("Ingrese el numero: ");//Muestra el mensaje "Ingrese el n�mero: " en la consola, solicitando al usuario que introduzca un n�mero.
   scanf("%d", &NUM);//Lee un n�mero entero introducido por el usuario y lo almacena en la variable NUM.
   if (NUM == 0)//Comprueba si el n�mero ingresado (NUM) es igual a cero.
         printf("\nNulo");//Si NUM es igual a cero, imprime "Nulo" en la consola.
   else//Si NUM no es igual a cero (es decir, es distinto de cero), contin�a con la siguiente instrucci�n.
         if (pow (-1, NUM) > 0)//Comprueba si el resultado de elevar -1 a la potencia NUM es mayor que cero. Esto es una forma de determinar si un n�mero es par o impar bas�ndose en el concepto de paridad (-1 elevado a un n�mero par es 1, y elevado a un n�mero impar es -1).
             printf("\nPar");//i el resultado de pow(-1, NUM) es mayor que cero (es decir, si NUM es par), imprime "Par" en la consola.
         else //Si el resultado de pow(-1, NUM) no es mayor que cero (es decir, si NUM es impar), contin�a con la siguiente instrucci�n.
             printf("\nImpar");//Si el resultado de pow(-1, NUM) no es mayor que cero (es decir, si NUM es impar), imprime "Impar" en la consola.
}
