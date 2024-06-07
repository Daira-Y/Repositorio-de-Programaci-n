#include <stdio.h>
#include <math.h>

void main(void)//Define la función principal del programa que no recibe argumentos y no devuelve un valor.
{
float RES;//Declara una variable de punto flotante llamada RES, que se usará para almacenar el resultado del cálculo.
int R, T, Q;//Declara tres variables enteras llamadas R, T, y Q
printf("Ingrese los valores de R, T, Q: ");//Muestra el mensaje "Ingrese los valores de R, T, Q: " en la consola, solicitando al usuario que introduzca tres valores.
scanf("%d %d %d", &R, &T, &Q);//Lee tres valores enteros introducidos por el usuario y los almacena en las variables R, T, y Q.
RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);//Calcula el valor de RES usando la formula R^4-T^3+4.Q^2 con las funciones pow para las potencias.
if(RES < 820)//Comprueba si el valor de RES es menor que 820.
     printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);//Si la condición del if es verdadera (es decir, RES es menor que 820), imprime los valores de R, T, y Q en la consola.

}
