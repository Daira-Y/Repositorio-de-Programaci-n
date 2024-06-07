#include <stdio.h>
#include <math.h>

void main (void)//Define la función principal del programa que no recibe argumentos y no devuelve un valor.
{
   int NUM;//Declara una variable entera llamada NUM que se usará para almacenar el número ingresado por el usuario.
   printf("Ingrese el numero: ");//Muestra el mensaje "Ingrese el número: " en la consola, solicitando al usuario que introduzca un número.
   scanf("%d", &NUM);//Lee un número entero introducido por el usuario y lo almacena en la variable NUM.
   if (NUM == 0)//Comprueba si el número ingresado (NUM) es igual a cero.
         printf("\nNulo");//Si NUM es igual a cero, imprime "Nulo" en la consola.
   else//Si NUM no es igual a cero (es decir, es distinto de cero), continúa con la siguiente instrucción.
         if (pow (-1, NUM) > 0)//Comprueba si el resultado de elevar -1 a la potencia NUM es mayor que cero. Esto es una forma de determinar si un número es par o impar basándose en el concepto de paridad (-1 elevado a un número par es 1, y elevado a un número impar es -1).
             printf("\nPar");//i el resultado de pow(-1, NUM) es mayor que cero (es decir, si NUM es par), imprime "Par" en la consola.
         else //Si el resultado de pow(-1, NUM) no es mayor que cero (es decir, si NUM es impar), continúa con la siguiente instrucción.
             printf("\nImpar");//Si el resultado de pow(-1, NUM) no es mayor que cero (es decir, si NUM es impar), imprime "Impar" en la consola.
}
