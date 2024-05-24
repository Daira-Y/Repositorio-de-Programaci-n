#include <stdio.h>
#include <stdlib.h>

void main(void)//Define la función principal del programa que no recibe argumentos y no devuelve un valor.
{
    float SAL;//Declara una variable de punto flotante llamada SAL, que se usará para almacenar el salario del profesor.
    int NIV;//Declara una variable entera llamada NIV, que se usará para almacenar el nivel académico del profesor.
    printf("Ingrese el nivel academico del profesor: ");//Muestra el mensaje "Ingrese el nivel académico del profesor: " en la consola, solicitando al usuario que introduzca un valor.
    scanf("%d", &NIV);//Lee un valor entero introducido por el usuario y lo almacena en la variable NIV
    printf("Ingrese el salario: ");//Muestra el mensaje "Ingrese el salario: " en la consola, solicitando al usuario que introduzca un valor.
    scanf("%f", &SAL);//Lee un valor de punto flotante introducido por el usuario y lo almacena en la variable SAL
    switch(NIV)//Inicia una estructura de control switch que evalúa la variable NIV (nivel académico del profesor).
    {
        case 1: SAL = SAL * 1.0035;  break;//Si NIV es 1, multiplica SAL por 1.0035 (aumento del 0.35%) y termina el caso.
        case 2: SAL = SAL * 1.0041;  break;//Si NIV es 2, multiplica SAL por 1.0041 (aumento del 0.41%) y termina el caso.
        case 3: SAL = SAL * 1.0048;  break;//Si NIV es 3, multiplica SAL por 1.0048 (aumento del 0.48%) y termina el caso.
        case 4: SAL = SAL * 1.0053;  break;//Si NIV es 4, multiplica SAL por 1.0053 (aumento del 0.53%) y termina el caso.
    }
    printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL);//Imprime el nivel académico (NIV) y el nuevo salario (SAL) formateado con un ancho total de 8 caracteres y 2 decimales, precedido por el mensaje "Nivel: \tNuevo salario: ".
}
