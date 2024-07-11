#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.
#include <stdlib.h> // Incluye la biblioteca estándar para funciones de utilidad general.

/* Suma reales.
El programa lee cadenas de caracteres de un archivo, detecta aquellas que
comienzan con números, los suma y calcula el promedio de los mismos. */

void sumypro(FILE *); // Prototipo de la función 'sumypro'.

void main(void)
{
    FILE *ap; // Declara un apuntador a archivo.
    if ((ap = fopen("arc2.txt", "r")) != NULL)
    {
        // Intenta abrir el archivo "arc2.txt" en modo lectura.
        sumypro(ap);
        // Llama a la función 'sumypro', pasando el archivo 'ap' como parámetro.
        fclose(ap); // Cierra el archivo.
    }
    else
    {
        printf("No se puede abrir el archivo"); // Muestra un mensaje si no se puede abrir el archivo.
    }
}

void sumypro(FILE *ap1)
{
    /* Esta función lee cadenas de caracteres de un archivo, detecta aquellas
    que comienzan con números, y obtiene la suma y el promedio de dichos
    números. */
    char cad[30]; // Declara un arreglo de caracteres para almacenar las líneas leídas del archivo.
    int i = 0; // Declara un contador de números válidos encontrados.
    float sum = 0.0, r; // Declara una variable para la suma y otra para almacenar los números convertidos.
    while (!feof(ap1))
    {
        // Bucle que se ejecuta mientras no se llegue al final del archivo.
        fgets(cad, 30, ap1); // Lee una línea del archivo y la almacena en 'cad'.
        r = atof(cad);
        // Convierte la cadena de caracteres en un número flotante (de tipo 'double').
        // La función 'atof' convierte una cadena que contiene números reales a un valor de tipo 'double'.
        // Si la cadena comienza con otro carácter o no contiene números, devuelve 0 o un valor indefinido.
        if (r)
        {
            // Si la conversión resulta en un número distinto de 0 (es decir, si la cadena comenzaba con un número).
            i++; // Incrementa el contador de números válidos.
            sum += r; // Agrega el número a la suma total.
        }
    }
    printf("\nSuma: %.2f", sum); // Imprime la suma de los números encontrados.
    if (i)   // Si se encontraron números válidos (i es distinto de 0).
    {
        printf("\nPromedio: %.2f", sum / i); // Calcula e imprime el promedio de los números.
    }
}


