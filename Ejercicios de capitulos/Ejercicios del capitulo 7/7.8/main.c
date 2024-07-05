#include <stdio.h>
#include <ctype.h>
void convertir(char *cadena); // Prototipo de la funci�n que convierte a may�sculas.
void main(void)
{
    char cadena[50]; // Declaraci�n de una cadena de caracteres.
    printf("Ingrese una cadena de texto: ");
    gets(cadena); // Lee una cadena de texto.
    convertir(cadena); // Llama a la funci�n que convierte a may�sculas.
    printf("La cadena convertida es: %s\n", cadena); // Imprime la cadena convertida.
}
void convertir(char *cadena)
{
    while (*cadena)   // Mientras no sea el fin de la cadena.
    {
        if (islower(*cadena))   // Si el caracter es min�scula.
        {
            *cadena = toupper(*cadena); // Convierte a may�scula.
        }
        cadena++; // Avanza al siguiente caracter.
    }
}

