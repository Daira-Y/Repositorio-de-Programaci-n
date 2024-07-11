#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida.
#include <ctype.h> // Incluye la biblioteca para funciones de clasificación de caracteres.

/* Letras minúsculas y mayúsculas.
El programa al recibir como dato un archivo formado por cadenas de
caracteres determina el número de letras minúsculas y mayúsculas que hay
en el archivo. */

void minymay(FILE *); // Prototipo de función 'minymay'.

void main(void) {
    FILE *ap;
    if ((ap = fopen("arc.txt", "r")) != NULL) {
        minymay(ap); // Llama a la función 'minymay' pasando el archivo como parámetro.
        fclose(ap); // Cierra el archivo.
    } else
        printf("No se puede abrir el archivo"); // Muestra un mensaje si no se puede abrir el archivo.
}

void minymay(FILE *ap1) {
    char cad[30];
    int i, mi = 0, ma = 0;
    while (!feof(ap1)) {
        fgets(cad, 30, ap1); // Lee una cadena de caracteres del archivo.
        i = 0;
        while (cad[i] != '\0') {
            if (islower(cad[i]))
                mi++; // Incrementa el contador de minúsculas.
            else if (isupper(cad[i]))
                ma++; // Incrementa el contador de mayúsculas.
            i++;
        }
    }
    printf("\n\nNúmero de letras minúsculas: %d", mi);
    printf("\n\nNúmero de letras mayúsculas: %d", ma);
}

