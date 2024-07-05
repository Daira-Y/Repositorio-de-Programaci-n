#include <stdio.h>
#include <ctype.h>
void contar_letras(char *cadena); // Prototipo de la función que cuenta letras.
void main(void)
{
    char cadena[50]; // Declaración de una cadena de caracteres.
    printf("Ingrese una cadena de caracteres: ");
    gets(cadena); // Lee una cadena de caracteres.
    contar_letras(cadena); // Llama a la función que cuenta letras.
}
void contar_letras(char *cadena)
{
    int min = 0, may = 0;
    while (*cadena)   // Mientras no sea el fin de la cadena.
    {
        if (islower(*cadena)) min++; // Si el carácter es minúscula, incrementa el contador.
        if (isupper(*cadena)) may++; // Si el carácter es mayúscula, incrementa el contador.
        cadena++; // Avanza al siguiente caracter.
    }
    printf("Número de letras minúsculas: %d\n", min); // Imprime el número de minúsculas.
    printf("Número de letras mayúsculas: %d\n", may); // Imprime el número de mayúsculas.
}
