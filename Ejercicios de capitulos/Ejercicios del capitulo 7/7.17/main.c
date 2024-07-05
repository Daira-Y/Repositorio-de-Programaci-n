#include <stdio.h>
#include <string.h>
void main(void)
{
    char cadena1[50], cadena2[50]; // Declaración de dos cadenas de caracteres.
    printf("Ingrese una cadena: ");
    gets(cadena1); // Lee la cadena.
    strcpy(cadena2, cadena1); // Copia la primera cadena a la segunda.
    printf("La cadena copiada es: %s\n", cadena2); // Imprime la cadena copiada.
}

