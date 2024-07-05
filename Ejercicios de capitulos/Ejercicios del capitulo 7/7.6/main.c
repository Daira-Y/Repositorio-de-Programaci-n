#include <stdio.h>
void inverso(char *cadena);
void main(void)
{
    char cadena[50];
    printf("Ingrese una línea de texto: ");
    gets(cadena); // Lectura de la cadena.
    printf("La línea de texto invertida es: ");
    inverso(cadena); // Llama a la función que invierte la cadena.
}
void inverso(char *cadena)
{
    if (*cadena)   // Verifica si no es el fin de la cadena.
    {
        inverso(cadena + 1); // Llama a la función con el siguiente caracter.
        putchar(*cadena); // Imprime el caracter actual.
    }
}
