#include <stdio.h>
#include <ctype.h>
void convertir(char *cadena); // Prototipo de la función que convierte a mayúsculas.
void main(void)
{
    char cadena[50]; // Declaración de una cadena de caracteres.
    printf("Ingrese una cadena de texto: ");
    gets(cadena); // Lee una cadena de texto.
    convertir(cadena); // Llama a la función que convierte a mayúsculas.
    printf("La cadena convertida es: %s\n", cadena); // Imprime la cadena convertida.
}
void convertir(char *cadena)
{
    while (*cadena)   // Mientras no sea el fin de la cadena.
    {
        if (islower(*cadena))   // Si el caracter es minúscula.
        {
            *cadena = toupper(*cadena); // Convierte a mayúscula.
        }
        cadena++; // Avanza al siguiente caracter.
    }
}

