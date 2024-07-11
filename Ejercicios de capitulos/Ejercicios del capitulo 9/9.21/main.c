#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.

/* Examen de admisión.
El programa, al recibir como dato un archivo de acceso directo que contiene
información sobre los alumnos que presentaron el examen de admisión a una
universidad, genera información importante para el Departamento de Control
Escolar. */

typedef struct
{
    int clave;
    char nombre[20];
    int carrera;
    float promedio;
    float examen;
    char telefono[12];
} alumno;  // Declaración de la estructura alumno.

float F1(FILE *);  // Prototipo de la función F1.
void F2(FILE *, FILE *, FILE *, FILE *, FILE *, FILE *);  // Prototipo de la función F2.
void F3(FILE *, FILE *, FILE *, FILE *, FILE *);  // Prototipo de la función F3.

void main(void)
{
    float pro;
    FILE *ap, *c1, *c2, *c3, *c4, *c5;
    ap = fopen("alu1.dat", "r");  // Abre el archivo alu1.dat para lectura.

    // Observa que los archivos car1.dat, car2.dat, car3.dat, car4.dat y car5.dat
    // se abren en la modalidad para escribir y leer.
    c1 = fopen("car1.dat", "w+");
    c2 = fopen("car2.dat", "w+");
    c3 = fopen("car3.dat", "w+");
    c4 = fopen("car4.dat", "w+");
    c5 = fopen("car5.dat", "w+");

    if ((ap != NULL) && (c1 != NULL) && (c2 != NULL) && (c3 != NULL) &&
            (c4 != NULL) && (c5 != NULL))
    {
        pro = F1(ap);  // Llama a la función F1 y almacena el promedio en 'pro'.
        printf("\nPROMEDIO EXAMEN DE ADMISIÓN: %.2f", pro);  // Imprime el promedio del examen de admisión.
        F2(ap, c1, c2, c3, c4, c5);  // Llama a la función F2 para generar archivos por carrera.
        F3(c1, c2, c3, c4, c5);  // Llama a la función F3 para obtener el promedio por carrera.
    }
    else
    {
        printf("\nEl o los archivos no se pudieron abrir");  // Muestra un mensaje si no se pueden abrir los archivos.
    }

    // Cierra todos los archivos abiertos.
    fclose(ap);
    fclose(c1);
    fclose(c2);
    fclose(c3);
    fclose(c4);
    fclose(c5);
}

float F1(FILE *ap)
{
    /* Esta función obtiene el promedio del examen de admisión. */
    alumno alu;
    float sum = 0, pro;
    int i = 0;
    fread(&alu, sizeof(alumno), 1, ap);  // Lee un registro del archivo.
    while (!feof(ap))
    {
        i++;
        sum += alu.examen;  // Suma las calificaciones del examen de admisión.
        fread(&alu, sizeof(alumno), 1, ap);  // Lee el siguiente registro del archivo.
    }
    pro = sum / i;  // Calcula el promedio.
    return (pro);  // Retorna el promedio.
}

void F2(FILE *ap, FILE *c1, FILE *c2, FILE *c3, FILE *c4, FILE *c5)
{
    /* Esta función genera un archivo de los alumnos admitidos en cada una de
    las carreras de la universidad. */
    alumno alu;
    rewind(ap);  // Regresa el puntero del archivo al inicio.
    fread(&alu, sizeof(alumno), 1, ap);  // Lee un registro del archivo.
    while (!feof(ap))
    {
        /* Se analiza si el candidato es admitido a la universidad. */
        if (((alu.examen >= 1300) && (alu.promedio >= 8)) ||
                ((alu.examen >= 1400) && (alu.promedio >= 7)))
        {
            switch (alu.carrera)
            {
            case 1:
                fwrite(&alu, sizeof(alumno), 1, c1);
                break;  // Escribe el registro en car1.dat.
            case 2:
                fwrite(&alu, sizeof(alumno), 1, c2);
                break;  // Escribe el registro en car2.dat.
            case 3:
                fwrite(&alu, sizeof(alumno), 1, c3);
                break;  // Escribe el registro en car3.dat.
            case 4:
                fwrite(&alu, sizeof(alumno), 1, c4);
                break;  // Escribe el registro en car4.dat.
            case 5:
                fwrite(&alu, sizeof(alumno), 1, c5);
                break;  // Escribe el registro en car5.dat.
            }
        }
        fread(&alu, sizeof(alumno), 1, ap);  // Lee el siguiente registro del archivo.
    }
}

void F3(FILE *c1, FILE *c2, FILE *c3, FILE *c4, FILE *c5)
{
    /* Esta función se utiliza para obtener el promedio que consiguieron los
    alumnos admitidos en cada una de las carreras. */
    alumno alu;
    float cal[5], sum;
    int i, j;

    // Procesa el archivo car1.dat.
    i = 0;
    sum = 0;
    rewind(c1);  // Regresa el puntero del archivo al inicio.
    fread(&alu, sizeof(alumno), 1, c1);  // Lee un registro del archivo.
    while (!feof(c1))
    {
        i++;
        sum += alu.examen;  // Suma las calificaciones del examen de admisión.
        fread(&alu, sizeof(alumno), 1, c1);  // Lee el siguiente registro del archivo.
    }
    if (i)
    {
        cal[0] = (sum / i);  // Calcula el promedio si hay registros.
    }
    else
    {
        cal[0] = 0;  // Si no hay registros, el promedio es 0.
    }

    // Procesa el archivo car2.dat.
    rewind(c2);
    sum = 0;
    i = 0;
    fread(&alu, sizeof(alumno), 1, c2);
    while (!feof(c2))
    {
        i++;
        sum += alu.examen;
        fread(&alu, sizeof(alumno), 1, c2);
    }
    if (i)
    {
        cal[1] = (sum / i);
    }
    else
    {
        cal[1] = 0;
    }

    // Procesa el archivo car3.dat.
    rewind(c3);
    sum = 0;
    i = 0;
    fread(&alu, sizeof(alumno), 1, c3);
    while (!feof(c3))
    {
        i++;
        sum += alu.examen;
        fread(&alu, sizeof(alumno), 1, c3);
    }
    if (i)
    {
        cal[2] = (sum / i);
    }
    else
    {
        cal[2] = 0;
    }

    // Procesa el archivo car4.dat.
    rewind(c4);
    sum = 0;
    i = 0;
    fread(&alu, sizeof(alumno), 1, c4);
    while (!feof(c4))
    {
        i++;
        sum += alu.examen;
        fread(&alu, sizeof(alumno), 1, c4);
    }
    if (i)
    {
        cal[3] = (sum / i);
    }
    else
    {
        cal[3] = 0;
    }

    // Procesa el archivo car5.dat.
    rewind(c5);
    sum = 0;
    i = 0;
    fread(&alu, sizeof(alumno), 1, c5);
    while (!feof(c5))
    {
        i++;
        sum += alu.examen;
        fread(&alu, sizeof(alumno), 1, c5);
    }
    if (i)
    {
        cal[4] = (sum / i);
    }
    else
    {
        cal[4] = 0;
    }

    // Imprime los promedios de los alumnos admitidos en cada carrera.
    for (i = 0; i < 5; i++)
    {
        printf("\nPromedio carrera %d: %.2f", i + 1, cal[i]);
    }
}

