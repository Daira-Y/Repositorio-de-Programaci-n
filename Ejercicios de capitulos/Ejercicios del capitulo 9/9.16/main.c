#include <stdio.h>  // Incluye la biblioteca est�ndar de entrada y salida.
#include <stdlib.h> // Incluye la biblioteca est�ndar para funciones de utilidad general.

/* Suma reales.
El programa lee cadenas de caracteres de un archivo, detecta aquellas que
comienzan con n�meros, los suma y calcula el promedio de los mismos. */

void sumypro(FILE *); // Prototipo de la funci�n 'sumypro'.

void main(void)
{
    FILE *ap; // Declara un apuntador a archivo.
    if ((ap = fopen("arc2.txt", "r")) != NULL)
    {
        // Intenta abrir el archivo "arc2.txt" en modo lectura.
        sumypro(ap);
        // Llama a la funci�n 'sumypro', pasando el archivo 'ap' como par�metro.
        fclose(ap); // Cierra el archivo.
    }
    else
    {
        printf("No se puede abrir el archivo"); // Muestra un mensaje si no se puede abrir el archivo.
    }
}

void sumypro(FILE *ap1)
{
    /* Esta funci�n lee cadenas de caracteres de un archivo, detecta aquellas
    que comienzan con n�meros, y obtiene la suma y el promedio de dichos
    n�meros. */
    char cad[30]; // Declara un arreglo de caracteres para almacenar las l�neas le�das del archivo.
    int i = 0; // Declara un contador de n�meros v�lidos encontrados.
    float sum = 0.0, r; // Declara una variable para la suma y otra para almacenar los n�meros convertidos.
    while (!feof(ap1))
    {
        // Bucle que se ejecuta mientras no se llegue al final del archivo.
        fgets(cad, 30, ap1); // Lee una l�nea del archivo y la almacena en 'cad'.
        r = atof(cad);
        // Convierte la cadena de caracteres en un n�mero flotante (de tipo 'double').
        // La funci�n 'atof' convierte una cadena que contiene n�meros reales a un valor de tipo 'double'.
        // Si la cadena comienza con otro car�cter o no contiene n�meros, devuelve 0 o un valor indefinido.
        if (r)
        {
            // Si la conversi�n resulta en un n�mero distinto de 0 (es decir, si la cadena comenzaba con un n�mero).
            i++; // Incrementa el contador de n�meros v�lidos.
            sum += r; // Agrega el n�mero a la suma total.
        }
    }
    printf("\nSuma: %.2f", sum); // Imprime la suma de los n�meros encontrados.
    if (i)   // Si se encontraron n�meros v�lidos (i es distinto de 0).
    {
        printf("\nPromedio: %.2f", sum / i); // Calcula e imprime el promedio de los n�meros.
    }
}


