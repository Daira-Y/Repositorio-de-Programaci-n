#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.

/* Ordena de menor a mayor.
El programa ordena de menor a mayor en función de la matrícula, creando un
nuevo archivo, un archivo de acceso directo compuesto por estructuras y
ordenado de mayor a menor. */

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;  // Declaración de la estructura alumno.

void ordena(FILE *, FILE *);  // Prototipo de función.

void main(void)
{
    FILE *ar1, *ar2;
    ar1 = fopen("ad5.dat", "r");  // Abre el archivo 'ad5.dat' para lectura.
    ar2 = fopen("ad6.dat", "w");  // Abre el archivo 'ad6.dat' para escritura.
    if ((ar1 != NULL) && (ar2 != NULL))
    {
        ordena(ar1, ar2);  // Llama a la función 'ordena' pasando los dos archivos como parámetros.
    }
    else
    {
        printf("\nEl o los archivos no se pudieron abrir");  // Muestra un mensaje si no se pueden abrir los archivos.
    }
    fclose(ar1);  // Cierra el archivo 'ad5.dat'.
    fclose(ar2);  // Cierra el archivo 'ad6.dat'.
}

void ordena(FILE *ap1, FILE *ap2)
{
    /* Esta función ordena de menor a mayor un archivo compuesto por estructuras,
    en función de su matrícula, y genera un nuevo archivo. */
    alumno alu;
    int t, n, i;
    t = sizeof(alumno);  // Obtiene el tamaño de la estructura 'alumno'.
    fseek(ap1, sizeof(alumno), 2);  // Mueve el puntero del archivo al final.
    n = (ftell(ap1) / t) - 1;  // Calcula el número de registros en el archivo.
    // El valor de 'n' se utilizará para posicionarnos en el archivo.
    rewind(ap1);  // Regresa el puntero del archivo al inicio.
    for (i = (n-1); i >= 0; i--)
    {
        // Utiliza un ciclo descendente para recorrer el archivo desde el final.
        fseek(ap1, i * sizeof(alumno), 0);  // Posiciona el puntero en el registro i-ésimo.
        fread(&alu, sizeof(alumno), 1, ap1);  // Lee un registro del archivo 'ap1' y lo guarda en 'alu'.
        fwrite(&alu, sizeof(alumno), 1, ap2);  // Escribe el registro en el archivo 'ap2'.
    }
}
