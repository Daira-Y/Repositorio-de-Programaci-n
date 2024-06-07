#include <stdio.h>
#include <stdlib.h>

void main(void)//Define la función principal del programa que no recibe argumentos y no devuelve un valor.
{
float PRE, NPR;//Declara dos variables de punto flotante: PRE (precio del producto) y NPR (nuevo precio del producto).
printf("Ingrese el precio del producto: ");//Muestra el mensaje "Ingrese el precio del producto: " en la consola, solicitando al usuario que introduzca un valor.
scanf("%f", & PRE);//Lee un valor de punto flotante introducido por el usuario y lo almacena en la variable PRE.
   if (PRE < 1500)//Comprueba si el valor de PRE es menor que 1500.
        NPR = PRE * 1.11;//Si PRE es menor que 1500, calcula el nuevo precio del producto incrementado en un 11% y almacena el resultado en la variable NPR.
else//i PRE no es menor que 1500 (es decir, es 1500 o más).
    NPR = PRE * 1.8;//Calcula el nuevo precio del producto incrementado en un 80% y almacena el resultado en la variable NPR.
printf("\nNuevo precio del producto: %8.2f", NPR);//Imprime el nuevo precio del producto, formateado con un ancho total de 8 caracteres y 2 decimales, precedido por el mensaje "Nuevo precio del producto: ".
}
//En resumen, el programa solicita al usuario que ingrese el precio de un producto. Luego, calcula un nuevo precio basado en la condición del precio ingresado:Si el precio es menor que 1500, se incrementa en un 11%.Si el precio es 1500 o más, se incrementa en un 80%.Finalmente, el nuevo precio se imprime en la consola.
