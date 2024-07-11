#include <stdio.h> // Incluye la biblioteca est�ndar de entrada y salida.
#include <ctype.h> // Incluye la biblioteca para funciones de clasificaci�n de caracteres.

/* Letras min�sculas y may�sculas.
El programa al recibir como dato un archivo formado por cadenas de
caracteres determina el n�mero de letras min�sculas y may�sculas que hay
en el archivo. */

void minymay(FILE *); // Prototipo de funci�n 'minymay'.

void main(void) {
    FILE *ap;
    if ((ap = fopen("arc.txt", "r")) != NULL) {
        minymay(ap); // Llama a la funci�n 'minymay' pasando el archivo como par�metro.
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
                mi++; // Incrementa el contador de min�sculas.
            else if (isupper(cad[i]))
                ma++; // Incrementa el contador de may�sculas.
            i++;
        }
    }
    printf("\n\nN�mero de letras min�sculas: %d", mi);
    printf("\n\nN�mero de letras may�sculas: %d", ma);
}

