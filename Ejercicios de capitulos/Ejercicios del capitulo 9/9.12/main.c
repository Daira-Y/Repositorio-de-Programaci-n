#include <stdio.h>  // Incluye la biblioteca est�ndar de entrada y salida.

/* Incorpora caracteres.
El programa agrega caracteres al archivo libro.txt. */

void main(void) {
    char p1;
    FILE *ar;  // Declara un apuntador a archivo.
    ar = fopen("libro.txt", "a");  // Abre el archivo "libro.txt" en modo de adici�n.
    if (ar != NULL) {
        while ((p1 = getchar()) != '\n')  // Lee caracteres de entrada hasta que se presiona Enter.
            fputc(p1, ar);  // Escribe cada car�cter en el archivo.
        fclose(ar);  // Cierra el archivo.
    } else
        printf("No se puede abrir el archivo");  // Muestra un mensaje si el archivo no se puede abrir.
}
