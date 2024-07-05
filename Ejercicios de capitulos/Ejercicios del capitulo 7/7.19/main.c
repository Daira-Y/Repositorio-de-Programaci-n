#include <stdio.h>
#include <string.h>
void main(void)
{
    char cadena[50]; // Declaración de una cadena de caracteres.
    printf("Ingrese una cadena: ");
    gets(cadena); // Lee la cadena.
    strrev(cadena); // Invierte la cadena.
    printf("La cadena invertida es: %s\n", cadena); // Imprime la cadena invertida.
}
