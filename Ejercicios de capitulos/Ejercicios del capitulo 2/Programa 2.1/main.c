#include <stdio.h>
#include <stdlib.h>

void main(void)//Define la función principal del programa que no recibe argumentos y no devuelve un valor.
{
 float PRO;//Declara una variable de punto flotante llamada PRO, que se usará para almacenar el promedio del alumno.
 printf("Ingrese el promedio del alumno: \n");//Muestra el mensaje "Ingrese el promedio del alumno: " en la consola, solicitando al usuario que introduzca un valor.
 scanf("%f", &PRO);//Lee un valor de punto flotante introducido por el usuario y lo almacena en la variable PRO.
 if (PRO >= 6)//Comprueba si el valor de PRO es mayor o igual a 6. Esta es la condición para determinar si el alumno ha aprobado.

    printf("\nAprobado");//Si la condición del if se cumple (es decir, PRO es mayor o igual a 6), se ejecuta esta línea que imprime el mensaje "Aprobado" en la consola.
}
