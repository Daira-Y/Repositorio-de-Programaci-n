#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.

/* Escuela.
El programa, al recibir como dato un archivo de acceso directo que contiene
información de los alumnos de una escuela, genera información estadística
importante. */

typedef struct
{
    char materia[20];
    int calificacion;
} matcal;  // Declaración de la estructura matcal.

typedef struct
{
    int matricula;
    char nombre[20];
    matcal cal[5];  // Un campo de esta estructura es a su vez una estructura.
} alumno;  // Declaración de la estructura alumno.

void F1(FILE *);  // Prototipo de la función F1.
void F2(FILE *);  // Prototipo de la función F2.
float F3(FILE *);  // Prototipo de la función F3.

void main(void)
{
    float pro;
    FILE *ap;
    if ((ap = fopen("esc.dat", "r")) != NULL)
    {
        F1(ap);  // Llama a la función F1 pasando el archivo como parámetro.
        F2(ap);  // Llama a la función F2 pasando el archivo como parámetro.
        pro = F3(ap);  // Llama a la función F3, guarda el promedio retornado en 'pro'.
        printf("\n\nPROMEDIO GENERAL MATERIA 4: %f", pro);  // Muestra el promedio general de la materia 4.
    }
    else
    {
        printf("\nEl archivo no se puede abrir");  // Muestra un mensaje si no se puede abrir el archivo.
    }
    fclose(ap);  // Cierra el archivo.
}

void F1(FILE *ap)
{
    /* La función escribe la matrícula y el promedio general de cada alumno. */
    alumno alu;
    int j;
    float sum, pro;
    printf("\nMATRÍCULA y PROMEDIOS");
    fread(&alu, sizeof(alumno), 1, ap);  // Lee un registro del archivo.
    while (!feof(ap))
    {
        printf("\nMatrícula: %d", alu.matricula);
        sum = 0.0;
        for (j = 0; j < 5; j++)
        {
            sum += alu.cal[j].calificacion;  // Suma las calificaciones de las 5 materias.
        }
        pro = sum / 5;  // Calcula el promedio.
        printf("\tPromedio: %f", pro);
        fread(&alu, sizeof(alumno), 1, ap);  // Lee el siguiente registro del archivo.
    }
}

void F2(FILE *ap)
{
    /* La función escribe la matrícula de los alumnos cuya calificación en la
    tercera materia es mayor a 9. */
    alumno alu;
    int j;
    rewind(ap);  // Regresa el puntero del archivo al inicio.
    printf("\n\nALUMNOS CON CALIFICACIÓN > 9 EN MATERIA 3");
    fread(&alu, sizeof(alumno), 1, ap);  // Lee un registro del archivo.
    while (!feof(ap))
    {
        if (alu.cal[2].calificacion > 9)    // Verifica si la calificación de la tercera materia es mayor a 9.
        {
            printf("\nMatrícula del alumno: %d", alu.matricula);
        }
        fread(&alu, sizeof(alumno), 1, ap);  // Lee el siguiente registro del archivo.
    }
}

float F3(FILE *ap)
{
    /* Esta función obtiene el promedio general de la materia 4. */
    alumno alu;
    int i = 0;
    float sum = 0, pro;
    rewind(ap);  // Regresa el puntero del archivo al inicio.
    fread(&alu, sizeof(alumno), 1, ap);  // Lee un registro del archivo.
    while (!feof(ap))
    {
        i++;
        sum += alu.cal[3].calificacion;  // Suma las calificaciones de la cuarta materia.
        fread(&alu, sizeof(alumno), 1, ap);  // Lee el siguiente registro del archivo.
    }
    pro = (float)sum / i;  // Calcula el promedio de la materia 4.
    return (pro);  // Retorna el promedio.
}
