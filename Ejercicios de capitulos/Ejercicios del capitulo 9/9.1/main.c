#include <stdio.h>
#include <stdlib.h>
 // Incluye la biblioteca estándar de entrada y salida.

void main(void)
{
    char p1;  // Declara una variable de tipo char para almacenar caracteres.
    FILE *ar;  // Declara un puntero a FILE para manejar el archivo.

    ar = fopen("arc.txt", "w");  // Abre el archivo "arc.txt" en modo escritura.
    if (ar != NULL)    // Verifica si el archivo se abrió correctamente.
    {
        printf("Escriba una linea de caracteres\n");  // Solicita al usuario que escriba una línea de caracteres.
        while ((p1 = getchar()) != '\n')    // Lee caracteres del teclado hasta encontrar un salto de línea.
        {
            fputc(p1, ar);  // Escribe cada carácter en el archivo.
        }
        fclose(ar);  // Cierra el archivo.
    }
    else
    {
        printf("No se puede abrir el archivo");  // Muestra un mensaje de error si no se pudo abrir el archivo.
    }
}
