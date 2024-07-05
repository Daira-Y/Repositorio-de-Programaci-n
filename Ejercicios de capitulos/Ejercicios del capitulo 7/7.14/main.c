#include <stdio.h>
int longitud_recursiva(char *cadena); // Prototipo de la función recursiva que calcula la longitud.
void main(void)
{
    char cadena[50]; // Declaración de una cadena de caracteres.
    printf("Ingrese una cadena de caracteres: ");
    gets(cadena); // Lee una cadena de caracteres.
    printf("La longitud de la cadena es: %d\n", longitud_recursiva(cadena)); // Imprime la longitud.
}
int longitud_recursiva(char *cadena)
{
    if (*cadena == '\0') return 0; // Caso base: fin de la cadena.
    return 1 + longitud_recursiva(cadena + 1); // Llamada recursiva con el siguiente caracter.
}
