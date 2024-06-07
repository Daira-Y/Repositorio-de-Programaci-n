#include <stdio.h>
#include <math.h>

void main(void)//Define la función principal del programa que no recibe argumentos y no devuelve un valor.
{
   float X;//Declara una variable de punto flotante X que se usará para almacenar el resultado de las operaciones.
   int Y;//Declara una variable entera Y que se usará para almacenar el valor ingresado por el usuario.
   printf("Ingrese el valor de Y: ");//Muestra el mensaje "Ingrese el valor de Y: " en la consola, solicitando al usuario que introduzca un valor.
   scanf("%d", &Y);//Lee un valor entero introducido por el usuario y lo almacena en la variable Y.
   if (Y < 0 || Y > 50)//Comprueba si el valor de Y es menor que 0 o mayor que 50.
       X = 0;//Si es así, asigna 0 a la variable X.
   else//Si la condición del if no se cumple (es decir, si Y está en el rango de 0 a 50), continúa con la siguiente instrucción.
         if (Y <= 10)//Comprueba si Y es menor o igual a 10.
             X= 4 / Y - Y;//Si es así, calcula X como 4/Y-Y
         else// Si la condición del if anterior no se cumple (es decir, si Y es mayor que 10), continúa con la siguiente instrucción.
            if (Y <= 25)// Comprueba si Y es menor o igual a 25.
                X = pow (Y, 3) - 12;//Si es así, calcula X como Y^3-12
            else//Si la condición del if anterior no se cumple (es decir, si Y es mayor que 25), continúa con la siguiente instrucción.
                X = pow(Y, 2) + pow(Y,3) - 18;//Calcula X como Y^2+Y^3-18
   printf("\n\nY= %d\tX = %8.2f", Y, X);//Imprime el valor de Y y el valor de X con un ancho total de 8 caracteres y 2 decimales, precedidos por los mensajes "Y= " y "X= " en la consola.
}
