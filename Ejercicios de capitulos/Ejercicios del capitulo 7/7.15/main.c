#include <stdio.h>
#include <string.h>
void main(void)
{
    char cadena1[50], cadena2[50]; // Declaración de dos cadenas de caracteres.
    printf("Ingrese la primera cadena: ");
    gets(cadena1); // Lee la primera cadena.
    printf("Ingrese la segunda cadena: ");
    gets(cadena2); // Lee la segunda cadena.
    if (strcmp(cadena1, cadena2) == 0)   // Compara las dos cadenas.
    {
        printf("Las cadenas son iguales.\n"); // Si son iguales, imprime el mensaje.
    }
    else
    {
        printf("Las cadenas son diferentes.\n"); // Si son diferentes, imprime el mensaje.
    }
}
