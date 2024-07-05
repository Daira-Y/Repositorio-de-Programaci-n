#include <stdio.h>
#include <string.h>
void main(void)
{
    char cadena1[50], cadena2[50]; // Declaración de dos cadenas de caracteres.
    printf("Ingrese la primera cadena: ");
    gets(cadena1); // Lee la primera cadena.
    printf("Ingrese la segunda cadena: ");
    gets(cadena2); // Lee la segunda cadena.
    strcat(cadena1, cadena2); // Concatena la segunda cadena a la primera.
    printf("La cadena resultante es: %s\n", cadena1); // Imprime la cadena concatenada.
}
