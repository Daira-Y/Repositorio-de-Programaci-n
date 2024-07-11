#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.
#include <stdlib.h> // Incluye la biblioteca estándar para funciones como exit().

void main(void)
{
    char cad[50];  // Declara un arreglo de caracteres para almacenar una cadena.
    int res;  // Declara una variable entera para la respuesta del usuario.
    FILE *ar;  // Declara un puntero a FILE para manejar el archivo.

    // Abre el archivo "arc.txt" en modo escritura.
    if ((ar = fopen("arc.txt", "w")) != NULL)
    {
        printf("\nDesea ingresar una cadena de caracteres Si-1 No-0:");
        scanf("%d", &res);  // Lee la respuesta del usuario.

        while (res)    // Mientras la respuesta sea 1 (Sí).
        {
            fflush(stdin);  // Limpia el búfer de entrada para evitar problemas con gets.
            printf("Ingrese la cadena: ");
            gets(cad);  // Lee una cadena de caracteres del usuario.
            fputs(cad, ar);  // Escribe la cadena en el archivo.

            printf("\nDesea ingresar otra cadena de caracteres Si-1 No-0:");
            scanf("%d", &res);  // Lee la respuesta del usuario.

            if (res)    // Si la respuesta es 1 (Sí).
            {
                fputs("\n", ar);  // Escribe un salto de línea en el archivo.
            }
        }

        fclose(ar);  // Cierra el archivo.
    }
    else
    {
        printf("No se puede abrir el archivo");  // Muestra un mensaje de error si no se pudo abrir el archivo.
    }
}
