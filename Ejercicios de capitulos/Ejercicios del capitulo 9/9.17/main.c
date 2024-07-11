#include <stdio.h>   // Incluye la biblioteca est�ndar de entrada y salida.
#include <ctype.h>   // Incluye la biblioteca para funciones de manipulaci�n de caracteres.
#include <string.h>  // Incluye la biblioteca para funciones de manipulaci�n de cadenas de caracteres.

/* Reemplaza palabras.
El programa lee cadenas de caracteres de un archivo y cada vez que
encuentra la palabra M�xico escrita en forma incorrecta �la primera con
min�scula� la reemplaza por su forma correcta y escribe la cadena en otro
archivo. */

void cambia(FILE *, FILE *);  // Prototipo de funci�n. Se pasan dos archivos como par�metros.

void main(void) {
    FILE *ar;
    FILE *ap;
    ar = fopen("arc.txt", "r");  // Se abre el archivo arc.txt para lectura.
    ap = fopen("arc1.txt", "w"); // Se abre el archivo arc1.txt para escritura.
    if ((ar != NULL) && (ap != NULL)) {
        cambia(ar, ap);  // Llama a la funci�n 'cambia' pasando los dos archivos como par�metros.
        fclose(ar);  // Cierra el archivo arc.txt.
        fclose(ap);  // Cierra el archivo arc1.txt.
    } else {
        printf("No se pueden abrir los archivos");  // Muestra un mensaje si no se pueden abrir los archivos.
    }
}

void cambia(FILE *ap1, FILE *ap2) {
    /* Esta funci�n reemplaza en la cadena de caracteres la palabra m�xico escrita
    con min�sculas �la primera letra� por su forma correcta y escribe la cadena
    de caracteres en un nuevo archivo. */
    int i, j, k;
    char cad[30], *cad1 = "", *cad2 = "", aux[30];
    while (!feof(ap1)) {
        // Bucle que se ejecuta mientras no se llegue al final del archivo.
        fgets(cad, 30, ap1);  // Lee una l�nea del archivo y la almacena en 'cad'.
        strcpy(cad1, cad);  // Copia el contenido de 'cad' en 'cad1'.
        cad2 = strstr(cad1, "m�xico");  // Localiza la subcadena "m�xico" en 'cad1'.
        while (cad2 != NULL) {
            // Bucle que se ejecuta mientras se encuentre "m�xico" en 'cad1'.
            cad2[0] = 'M';  // Reemplaza la primera letra min�scula por may�scula.
            i = strlen(cad1);  // Almacena la longitud de 'cad1' en 'i'.
            j = strlen(cad2);  // Almacena la longitud de 'cad2' en 'j'.
            k = i - j;  // Calcula la diferencia de longitudes entre 'cad1' y 'cad2'.
            if (k) {
                strncpy(aux, cad1, k);  // Copia la subcadena de 'cad1' de longitud 'k' en 'aux'.
                aux[k] = '\0';  // A�ade el car�cter nulo al final de 'aux'.
                strcat(aux, cad2);  // Concatena 'cad2' al final de 'aux'.
                strcpy(cad1, aux);  // Copia el contenido de 'aux' de nuevo en 'cad1'.
            } else {
                strcpy(cad1, cad2);  // Si no hay diferencia de longitud, copia 'cad2' en 'cad1'.
            }
            cad2 = strstr(cad1, "m�xico");  // Busca la siguiente aparici�n de "m�xico" en 'cad1'.
        }
        fputs(cad1, ap2);  // Escribe la cadena modificada en el archivo ap2.
    }
}
