#include <stdio.h>

void main(void)//Define la función principal del programa que no recibe argumentos y no devuelve un valor.
{
float PRE, NPR;//Declara dos variables de punto flotante: PRE (precio del producto) y NPR (nuevo precio del producto).
printf("Ingrese el precio del producto: ");//Muestra el mensaje "Ingrese el precio del producto: " en la consola, solicitando al usuario que introduzca un valor.
scanf("%f", &PRE);//Lee un valor de punto flotante introducido por el usuario y lo almacena en la variable PRE.

if (PRE > 1500)//omprueba si el valor de PRE es mayor que 1500. Esta es la condición para aplicar el incremento del 11%.
{
    NPR = PRE * 1.11;//Calcula el nuevo precio del producto incrementado en un 11% y almacena el resultado en la variable NPR.
    printf("\nNuevo precio: %7.2f",NPR);//Imprime el nuevo precio del producto, formateado con 7 caracteres en total y 2 decimales, precedido por el mensaje "Nuevo precio: ".
}
}
