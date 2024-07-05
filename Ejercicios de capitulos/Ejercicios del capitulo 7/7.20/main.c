#include <stdio.h>
#include <string.h>
void main(void)
{
    char cadena[100], subcadena[50]; // Declaraci�n de una cadena de caracteres y una subcadena.
    char *ptr; // Declaraci�n de un apuntador a char.
    printf("Ingrese una cadena: ");
    gets(cadena); // Lee la cadena.
    printf("Ingrese una subcadena para buscar: ");
    gets(subcadena); // Lee la subcadena.
    ptr = strstr(cadena, subcadena); // Busca la subcadena en la cadena.
    if (ptr)
    {
        printf("La subcadena '%s' se encontr� en la posici�n: %ld\n", subcadena, ptr - cadena + 1); // Imprime la posici�n de la subcadena.
    }
    else
    {
        printf("La subcadena '%s' no se encontr� en la cadena.\n", subcadena); // Indica que la subcadena no se encontr�.
    }
}

