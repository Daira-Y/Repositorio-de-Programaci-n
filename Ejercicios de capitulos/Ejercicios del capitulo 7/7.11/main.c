#include <stdio.h>
#include <ctype.h>
void main(void)
{
    char cadena[50]; // Declaraci�n de una cadena de caracteres.
    int posicion;
    printf("Ingrese una cadena de caracteres: ");
    gets(cadena); // Lee una cadena de caracteres.
    printf("Ingrese la posici�n del car�cter que desea verificar: ");
    scanf("%d", &posicion); // Lee la posici�n del car�cter.
    if (islower(cadena[posicion]))   // Si el car�cter es min�scula.
    {
        printf("El car�cter en la posici�n %d es una letra min�scula.\n", posicion);
    }
    else
    {
        printf("El car�cter en la posici�n %d no es una letra min�scula.\n", posicion);
    }
}

