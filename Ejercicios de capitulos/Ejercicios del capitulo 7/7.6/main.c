#include <stdio.h>
void inverso(char *cadena);
void main(void)
{
    char cadena[50];
    printf("Ingrese una l�nea de texto: ");
    gets(cadena); // Lectura de la cadena.
    printf("La l�nea de texto invertida es: ");
    inverso(cadena); // Llama a la funci�n que invierte la cadena.
}
void inverso(char *cadena)
{
    if (*cadena)   // Verifica si no es el fin de la cadena.
    {
        inverso(cadena + 1); // Llama a la funci�n con el siguiente caracter.
        putchar(*cadena); // Imprime el caracter actual.
    }
}
