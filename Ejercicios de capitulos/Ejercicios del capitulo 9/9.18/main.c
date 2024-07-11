#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.

/* Mezcla.
El programa mezcla, respetando el orden, dos archivos que se encuentran
ordenados en forma ascendente considerando la matrícula de los alumnos. */

void mezcla(FILE *, FILE *, FILE *);  // Prototipo de función.

void main(void)
{
    FILE *ar, *ar1, *ar2;
    ar = fopen("arc9.dat", "r");  // Abre el archivo 'arc9.dat' para lectura.
    ar1 = fopen("arc10.dat", "r");  // Abre el archivo 'arc10.dat' para lectura.
    ar2 = fopen("arc11.dat", "w");  // Abre el archivo 'arc11.dat' para escritura.
    if (((ar != NULL) && (ar1 != NULL)) && (ar2 != NULL))
    {
        // Verifica que los tres archivos se hayan abierto correctamente.
        mezcla(ar, ar1, ar2);  // Llama a la función 'mezcla' pasando los tres archivos como parámetros.
        fclose(ar);  // Cierra el archivo 'arc9.dat'.
        fclose(ar1);  // Cierra el archivo 'arc10.dat'.
        fclose(ar2);  // Cierra el archivo 'arc11.dat'.
    }
    else
    {
        printf("No se pueden abrir los archivos");  // Muestra un mensaje si no se pueden abrir los archivos.
    }
}

void mezcla(FILE *ar, FILE *ar1, FILE *ar2)
{
    /* Esta función mezcla, respetando el orden, dos archivos que se encuentran
    ordenados en función de la matrícula. */
    int i, mat, mat1, b = 1, b1 = 1;
    float ca[3], ca1[3], cal;
    while (((!feof(ar)) || !b) && ((!feof(ar1)) || !b1))
    {
        // Bucle que se ejecuta mientras no se llegue al final de ambos archivos o las banderas no estén encendidas.
        if (b)
        {
            // Si la bandera 'b' está encendida, se lee del archivo 'ar' la matrícula y las tres calificaciones del alumno.
            fscanf(ar, "%d", &mat);
            for (i = 0; i < 3; i++)
            {
                fscanf(ar, "%f", &ca[i]);
            }
            b = 0;  // Apaga la bandera 'b'.
        }
        if (b1)
        {
            // Si la bandera 'b1' está encendida, se lee del archivo 'ar1' la matrícula y las tres calificaciones del alumno.
            fscanf(ar1, "%d", &mat1);
            for (i = 0; i < 3; i++)
            {
                fscanf(ar1, "%f", &ca1[i]);
            }
            b1 = 0;  // Apaga la bandera 'b1'.
        }
        if (mat < mat1)
        {
            // Si la matrícula del primer archivo es menor, se escribe en el archivo 'ar2'.
            fprintf(ar2, "%d\t", mat);
            for (i = 0; i < 3; i++)
            {
                fprintf(ar2, "%f\t", ca[i]);
            }
            fputs("\n", ar2);  // Añade una nueva línea en el archivo 'ar2'.
            b = 1;  // Enciende la bandera 'b'.
        }
        else
        {
            // Si la matrícula del segundo archivo es menor o igual, se escribe en el archivo 'ar2'.
            fprintf(ar2, "%d\t", mat1);
            for (i = 0; i < 3; i++)
            {
                fprintf(ar2, "%f\t", ca1[i]);
            }
            fputs("\n", ar2);  // Añade una nueva línea en el archivo 'ar2'.
            b1 = 1;  // Enciende la bandera 'b1'.
        }
    }
    if (!b)
    {
        // Si quedan datos en el primer archivo, se escriben en el archivo 'ar2'.
        fprintf(ar2, "%d\t", mat);
        for (i = 0; i < 3; i++)
        {
            fprintf(ar2, "%f\t", ca[i]);
        }
        fputs("\n", ar2);
        while (!feof(ar))
        {
            fscanf(ar, "%d", &mat);
            fprintf(ar2, "%d\t", mat);
            for (i = 0; i < 3; i++)
            {
                fscanf(ar, "%f", &cal);
                fprintf(ar2, "%f\t", cal);
            }
            fputs("\n", ar2);
        }
    }
    if (!b1)
    {
        // Si quedan datos en el segundo archivo, se escriben en el archivo 'ar2'.
        fprintf(ar2, "%d\t", mat1);
        for (i = 0; i < 3; i++)
        {
            fprintf(ar2, "%f\t", ca1[i]);
        }
        fputs("\n", ar2);
        while (!feof(ar1))
        {
            fscanf(ar1, "%d", &mat1);
            fprintf(ar2, "%d\t", mat1);
            for (i = 0; i < 3; i++)
            {
                fscanf(ar1, "%f", &cal);
                fprintf(ar2, "%f\t", cal);
            }
            fputs("\n", ar2);
        }
    }
}
