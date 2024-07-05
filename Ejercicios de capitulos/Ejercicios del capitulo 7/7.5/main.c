#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    char cad[20]; // Declaración de una cadena de caracteres.
    int i;
    double d;
    long l;
    printf("Ingrese una cadena de caracteres: ");
    gets(cad); // Lee una cadena de caracteres.
    i = atoi(cad); // Convierte la cadena a un entero.
    printf("El entero es: %d\n", i);
    d = atof(cad); // Convierte la cadena a un double.
    printf("El double es: %.2f\n", d);
    l = atol(cad); // Convierte la cadena a un long.
    printf("El long es: %ld\n", l);
}


