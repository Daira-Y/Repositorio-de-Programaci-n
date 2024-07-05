#include <stdio.h>
void reemplazar(char *cadena, char viejo, char nuevo); // Prototipo de la función que reemplaza caracteres.
void main(void)
{
    char cadena[100], viejo, nuevo; // Declaración de una cadena de caracteres y dos caracteres.
    printf("Ingrese una cadena: ");
    gets(cadena); // Lee la cadena.
    printf("Ingrese el carácter a reemplazar: ");
    viejo = getchar(); // Lee el carácter viejo.
    fflush(stdin); // Limpia el búfer de entrada.
    printf("Ingrese el nuevo carácter: ");
    nuevo = getchar(); // Lee el nuevo carácter.
    reemplazar(cadena, viejo, nuevo); // Llama a la función que reemplaza caracteres.
    printf("La cadena resultante es: %s\n", cadena); // Imprime la cadena resultante.
}
void reemplazar(char *cadena, char viejo, char nuevo)
{
    while (*cadena)   // Mientras no sea el fin de la cadena.
    {
        if (*cadena == viejo) *cadena = nuevo; // Si hay coincidencia, reemplaza el carácter.
        cadena++; // Avanza al siguiente caracter.
    }
}

