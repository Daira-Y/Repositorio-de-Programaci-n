#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.

/* Alumnos.
El programa pregunta al usuario el número de registro que desea
modificar, obtiene el nuevo promedio del alumno y modifica tanto el
registro como el archivo correspondiente. */

typedef struct    // Declaración de la estructura 'alumno'.
{
    int matricula;  // Campo entero para la matrícula del alumno.
    char nombre[20];  // Cadena de caracteres para el nombre del alumno.
    int carrera;  // Campo entero para la carrera del alumno.
    float promedio;  // Campo flotante para el promedio del alumno.
} alumno;

void modifica(FILE *);  // Prototipo de función 'modifica'.

void main(void)
{
    FILE *ar;  // Declara un apuntador a archivo.
    if ((ar = fopen("ad1.dat", "r+")) != NULL)  // Abre el archivo "ad1.dat" en modo lectura/escritura.
        modifica(ar);  // Llama a la función 'modifica' si el archivo se abre correctamente.
    else
        printf("\nEl archivo no se puede abrir");  // Muestra un mensaje si el archivo no se puede abrir.
    fclose(ar);  // Cierra el archivo.
}

void modifica(FILE *ap)
{
    int d;
    alumno alu;
    printf("\nIngrese el número de registro que desea modificar: ");
    scanf("%d", &d);  // Lee el número de registro que se desea modificar.
    fseek(ap, (d-1) * sizeof(alumno), 0);  // Posiciona el apuntador en el registro correspondiente.
    fread(&alu, sizeof(alumno), 1, ap);  // Lee el registro del archivo.
    printf("\nIngrese el promedio correcto del alumno: ");
    scanf("%f", &alu.promedio);  // Modifica el promedio del alumno.
    fseek(ap, (d-1) * sizeof(alumno), 0);  // Reposiciona el apuntador en el registro correspondiente.
    fwrite(&alu, sizeof(alumno), 1, ap);  // Escribe el registro modificado en el archivo.
}
