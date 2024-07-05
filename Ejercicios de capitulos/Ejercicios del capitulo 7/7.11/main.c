#include <stdio.h>
#include <ctype.h>
void main(void)
{
    char cadena[50]; // Declaración de una cadena de caracteres.
    int posicion;
    printf("Ingrese una cadena de caracteres: ");
    gets(cadena); // Lee una cadena de caracteres.
    printf("Ingrese la posición del carácter que desea verificar: ");
    scanf("%d", &posicion); // Lee la posición del carácter.
    if (islower(cadena[posicion]))   // Si el carácter es minúscula.
    {
        printf("El carácter en la posición %d es una letra minúscula.\n", posicion);
    }
    else
    {
        printf("El carácter en la posición %d no es una letra minúscula.\n", posicion);
    }
}

