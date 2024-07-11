#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char p1;  // Declara una variable de tipo char para almacenar caracteres.
    FILE *ar;  // Declara un puntero a FILE para manejar el archivo.

    if ((ar = fopen("arc.txt", "r")) != NULL)    // Abre el archivo "arc.txt" en modo lectura y verifica si se abrió correctamente.
    {
        while (!feof(ar))    // Mientras no se alcance el final del archivo.
        {
            p1 = fgetc(ar);  // Lee un carácter del archivo.
            if (p1 != EOF)    // Verifica que el carácter leído no sea el indicador de fin de archivo.
            {
                putchar(p1);  // Muestra el carácter en la salida estándar (pantalla).
            }
        }
        fclose(ar);  // Cierra el archivo.
    }
    else
    {
        printf("No se puede abrir el archivo");  // Muestra un mensaje de error si no se pudo abrir el archivo.
    }
}
