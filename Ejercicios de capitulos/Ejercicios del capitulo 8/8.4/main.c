#include <stdio.h>
#include <string.h>

/* Escuela.
El programa genera información estadística de los alumnos de una escuela. */

// Definición de la estructura alumno utilizando typedef
typedef struct
{
    int matricula;
    char nombre[30];
    float cal[5]; // Arreglo unidimensional para almacenar calificaciones
} alumno;

// Prototipos de funciones
void Lectura(alumno[], int);
void F1(alumno[], int);
void F2(alumno[], int);
void F3(alumno[], int);

void main(void)
{
    alumno ARRE[50]; // Arreglo unidimensional de tipo alumno con capacidad para 50 alumnos
    int TAM;

    // Ciclo para ingresar el tamaño del arreglo y validar que esté entre 1 y 50
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);

    Lectura(ARRE, TAM); // Llama a la función Lectura para ingresar los datos de los alumnos
    F1(ARRE, TAM);      // Llama a la función F1 para calcular la matrícula y promedio de cada alumno
    F2(ARRE, TAM);      // Llama a la función F2 para mostrar las matrículas de alumnos con calificación en la tercera materia > 9
    F3(ARRE, TAM);      // Llama a la función F3 para calcular y mostrar el promedio general del grupo en la materia 4
}

// Función para leer los datos de los alumnos
void Lectura(alumno A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese los datos del alumno %d", I + 1);
        printf("\nIngrese la matrícula del alumno: ");
        scanf("%d", &A[I].matricula);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].nombre);
        for (J = 0; J < 5; J++)
        {
            printf("\tIngrese la calificación %d del alumno %d: ", J + 1, I + 1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}

// Función para obtener la matrícula y el promedio de cada alumno
void F1(alumno A[], int T)
{
    int I, J;
    float SUM, PRO;
    for (I = 0; I < T; I++)
    {
        printf("\nMatrícula del alumno: %d", A[I].matricula);
        SUM = 0.0;
        for (J = 0; J < 5; J++)
            SUM = SUM + A[I].cal[J];
        PRO = SUM / 5;
        printf("\t\tPromedio: %.2f", PRO);
    }
}

// Función para obtener las matrículas de los alumnos con calificación en la tercera materia > 9
void F2(alumno A[], int T)
{
    int I;
    printf("\nAlumnos con calificación en la tercera materia > 9");
    for (I = 0; I < T; I++)
        if (A[I].cal[2] > 9)
            printf("\nMatrícula del alumno: %d", A[I].matricula);
}

// Función para calcular y mostrar el promedio general del grupo en la materia 4
void F3(alumno A[], int T)
{
    int I;
    float PRO, SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM = SUM + A[I].cal[3];
    PRO = SUM / T;
    printf("\n\nPromedio de la materia 4: %.2f", PRO);
}

