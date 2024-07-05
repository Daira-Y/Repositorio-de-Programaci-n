#include <stdio.h>
#include <string.h>
void main(void)
{
    char cadena[50], caracter; // Declaración de una cadena de caracteres y un carácter.
    char *ptr; // Declaración de un apuntador a char.
    printf("Ingrese una cadena: ");
    gets(cadena); // Lee la cadena.
    printf("Ingrese un carácter para buscar: ");
    caracter = getchar(); // Lee el carácter.
    ptr = strchr(cadena, caracter); // Busca el carácter en la cadena.
    if (ptr)
    {
        printf("El carácter '%c' se encontró en la posición: %ld\n", caracter, ptr - cadena + 1); // Imprime la posición del carácter.
    }
    else
    {
        printf("El carácter '%c' no se encontró en la cadena.\n", caracter); // Indica que el carácter no se encontró.
    }
}

