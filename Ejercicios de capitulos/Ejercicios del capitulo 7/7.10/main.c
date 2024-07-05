#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    char cadena[10]; // Declaración de una cadena de caracteres.
    int i = 0;
    float suma = 0.0;
    printf("¿Desea ingresar una cadena de caracteres (S/N)? ");
    while (getchar() == 'S')   // Mientras el usuario ingrese 'S'.
    {
        printf("Ingrese una cadena de caracteres: ");
        fflush(stdin); // Limpia el búfer de entrada.
        gets(cadena); // Lee una cadena de caracteres.
        suma += atof(cadena); // Convierte la cadena a float y suma.
        i++; // Incrementa el contador.
        printf("¿Desea ingresar otra cadena de caracteres (S/N)? ");
        fflush(stdin); // Limpia el búfer de entrada.
    }
    printf("Suma: %.2f\n", suma); // Imprime la suma.
    printf("Promedio: %.2f\n", suma / i); // Imprime el promedio.
}
