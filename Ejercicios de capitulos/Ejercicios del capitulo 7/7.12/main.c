#include <stdio.h>
#include <ctype.h>
void contar_letras(char *cadena); // Prototipo de la funci�n que cuenta letras.
void main(void)
{
    char cadena[50]; // Declaraci�n de una cadena de caracteres.
    printf("Ingrese una cadena de caracteres: ");
    gets(cadena); // Lee una cadena de caracteres.
    contar_letras(cadena); // Llama a la funci�n que cuenta letras.
}
void contar_letras(char *cadena)
{
    int min = 0, may = 0;
    while (*cadena)   // Mientras no sea el fin de la cadena.
    {
        if (islower(*cadena)) min++; // Si el car�cter es min�scula, incrementa el contador.
        if (isupper(*cadena)) may++; // Si el car�cter es may�scula, incrementa el contador.
        cadena++; // Avanza al siguiente caracter.
    }
    printf("N�mero de letras min�sculas: %d\n", min); // Imprime el n�mero de min�sculas.
    printf("N�mero de letras may�sculas: %d\n", may); // Imprime el n�mero de may�sculas.
}
