#include <stdio.h>  // Incluye la biblioteca est�ndar de entrada y salida.
#include <ctype.h>  // Incluye la biblioteca para funciones de clasificaci�n de caracteres.

/* Letras min�sculas y may�sculas.
El programa al recibir como dato un archivo formado por cadenas de caracteres
determina el n�mero de letras min�sculas y may�sculas que hay en el archivo. */

void minymay(FILE *);  // Prototipo de funci�n 'minymay'.

void main(void)
{
    char p;
    FILE *ar;  // Declara un apuntador a archivo.
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar);  // Llama a la funci�n 'minymay'.
        fclose(ar);  // Cierra el archivo.
    }
    else
        printf("No se pudo abrir el archivo");  // Muestra un mensaje si el archivo no se puede abrir.
}

void minymay(FILE *arc)
{
    int min = 0, may = 0;
    char p;
    while (!feof(arc))
    {
        p = fgetc(arc);  // Lee un car�cter del archivo.
        if (islower(p))
            min++;  // Incrementa el contador de min�sculas.
        else if (isupper(p))
            may++;  // Incrementa el contador de may�sculas.
    }
    printf("\nN�mero de min�sculas: %d", min);
    printf("\nN�mero de may�sculas: %d", may);
}
