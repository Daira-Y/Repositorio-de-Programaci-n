#include <stdio.h>
#include <string.h>
void main(void)
{
    char cadena[50], caracter; // Declaraci�n de una cadena de caracteres y un car�cter.
    char *ptr; // Declaraci�n de un apuntador a char.
    printf("Ingrese una cadena: ");
    gets(cadena); // Lee la cadena.
    printf("Ingrese un car�cter para buscar: ");
    caracter = getchar(); // Lee el car�cter.
    ptr = strchr(cadena, caracter); // Busca el car�cter en la cadena.
    if (ptr)
    {
        printf("El car�cter '%c' se encontr� en la posici�n: %ld\n", caracter, ptr - cadena + 1); // Imprime la posici�n del car�cter.
    }
    else
    {
        printf("El car�cter '%c' no se encontr� en la cadena.\n", caracter); // Indica que el car�cter no se encontr�.
    }
}

