#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("arc.txt", "w");
    if (ar != NULL)
    {
        printf("Escriba una linea de caracteres\n");
        while ((p1=getchar()) != '\n')

            fputc(p1, ar);

        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
}
