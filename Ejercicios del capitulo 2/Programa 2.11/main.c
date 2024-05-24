#include <stdio.h>
#include <stdlib.h>

void main(void)//Define la función principal del programa que no recibe argumentos y no devuelve un valor.
{
   int DIS, TIE;//Declara dos variables enteras DIS (distancia entre ciudades) y TIE (tiempo de estancia).
   float BIL;//Declara una variable de punto flotante BIL que se usará para almacenar el costo del billete.
   printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");//Muestra el mensaje "Ingrese la distancia entre ciudades y el tiempo de estancia: " en la consola, solicitando al usuario que introduzca dos valores.
   scanf("%d %d", &DIS, &TIE);//Lee dos valores enteros introducidos por el usuario y los almacena en las variables DIS y TIE.
   if ((DIS*2 > 500) && (TIE > 10))//Comprueba si el doble de la distancia (DIS * 2) es mayor que 500 y si el tiempo de estancia (TIE) es mayor que 10.
      BIL = DIS * 2 * 0.19 * 0.8;//Calcula el costo del billete (BIL) multiplicando la distancia por 2, por la tarifa por kilómetro (0.19), y por un descuento del 20% (0.8), si se cumplen las condiciones del if.
   else//Si la condición del if no se cumple, continúa con la siguiente instrucción.
      BIL = DIS * 2 * 0.19;//Calcula el costo del billete (BIL) multiplicando la distancia por 2 y por la tarifa por kilómetro (0.19), si la condición del if no se cumple.
   printf("\n\nCosto del billete: %7.2f", BIL);//Imprime el costo del billete (BIL) con un ancho total de 7 caracteres y 2 decimales, precedido por el mensaje "Costo del billete: " en la consola.
}
