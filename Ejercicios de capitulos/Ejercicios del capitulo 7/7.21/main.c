#include <stdio.h>
void reemplazar(char *cadena, char viejo, char nuevo); // Prototipo de la funci�n que reemplaza caracteres.
void main(void)
{
    char cadena[100], viejo, nuevo; // Declaraci�n de una cadena de caracteres y dos caracteres.
    printf("Ingrese una cadena: ");
    gets(cadena); // Lee la cadena.
    printf("Ingrese el car�cter a reemplazar: ");
    viejo = getchar(); // Lee el car�cter viejo.
    fflush(stdin); // Limpia el b�fer de entrada.
    printf("Ingrese el nuevo car�cter: ");
    nuevo = getchar(); // Lee el nuevo car�cter.
    reemplazar(cadena, viejo, nuevo); // Llama a la funci�n que reemplaza caracteres.
    printf("La cadena resultante es: %s\n", cadena); // Imprime la cadena resultante.
}
void reemplazar(char *cadena, char viejo, char nuevo)
{
    while (*cadena)   // Mientras no sea el fin de la cadena.
    {
        if (*cadena == viejo) *cadena = nuevo; // Si hay coincidencia, reemplaza el car�cter.
        cadena++; // Avanza al siguiente caracter.
    }
}

