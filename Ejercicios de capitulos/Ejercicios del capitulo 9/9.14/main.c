#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.
#include <ctype.h>  // Incluye la biblioteca para funciones de clasificación de caracteres.

/* Letras minúsculas y mayúsculas.
El programa al recibir como dato un archivo formado por cadenas de caracteres
determina el número de letras minúsculas y mayúsculas que hay en el archivo. */

void minymay(FILE *);  // Prototipo de función 'minymay'.

void main(void)
{
    char p;
    FILE *ar;  // Declara un apuntador a archivo.
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar);  // Llama a la función 'minymay'.
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
        p = fgetc(arc);  // Lee un carácter del archivo.
        if (islower(p))
            min++;  // Incrementa el contador de minúsculas.
        else if (isupper(p))
            may++;  // Incrementa el contador de mayúsculas.
    }
    printf("\nNúmero de minúsculas: %d", min);
    printf("\nNúmero de mayúsculas: %d", may);
}
