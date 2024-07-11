#include <stdio.h>  // Incluye la biblioteca est�ndar de entrada y salida.

/* Cuenta caracteres.
El programa al recibir como dato un archivo de texto y un caracter cuenta
el n�mero de veces que se encuentra el caracter en el archivo. */

int cuenta(char);  // Prototipo de funci�n 'cuenta'.

void main(void)
{
    int res;
    char car;
    printf("\nIngrese el caracter que se va a buscar en el archivo: ");
    car = getchar();  // Lee el car�cter a buscar.
    res = cuenta(car);  // Llama a la funci�n 'cuenta'.
    if (res != -1)
        printf("\n\nEl caracter %c se encuentra en el archivo %d veces", car, res);  // Muestra el resultado.
    else
        printf("No se pudo abrir el archivo");  // Muestra un mensaje si el archivo no se puede abrir.
}

int cuenta(char car)
{
    int res, con = 0;
    char p;
    FILE *ar;  // Declara un apuntador a archivo.
    if ((ar = fopen("arc.txt", "r")) != NULL)    // Abre el archivo para lectura.
    {
        while (!feof(ar))    // Lee el archivo hasta el fin de este.
        {
            p = getc(ar);  // Lee un car�cter del archivo.
            if (p == car)  // Compara el car�cter le�do con el car�cter buscado.
                con++;
        }
        fclose(ar);  // Cierra el archivo.
        res = con;  // Asigna el resultado.
    }
    else
        res = -1;  // Asigna -1 si no se puede abrir el archivo.
    return res;  // Retorna el resultado.
}

