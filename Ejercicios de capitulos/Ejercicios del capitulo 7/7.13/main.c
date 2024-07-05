#include <stdio.h>
int longitud(char *cadena); // Prototipo de la función que calcula la longitud.
void main(void)
{
    char cadena[50]; // Declaración de una cadena de caracteres.
    printf("Ingrese una cadena de caracteres: ");
    gets(cadena); // Lee una cadena de caracteres.
    printf("La longitud de la cadena es: %d\n", longitud(cadena)); // Imprime la longitud.
}
int longitud(char *cadena)
{
    int len = 0;
    while (*cadena)   // Mientras no sea el fin de la cadena.
    {
        len++; // Incrementa el contador de longitud.
        cadena++; // Avanza al siguiente caracter.
    }
    return len; // Devuelve la longitud de la cadena.
}
