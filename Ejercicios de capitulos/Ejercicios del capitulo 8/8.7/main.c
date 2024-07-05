#include <stdio.h>
#include <string.h>

/* Escuela.
El programa genera información importante de los alumnos de una escuela. */

// Declaración de la estructura matpro que representa una materia con su promedio
typedef struct
{
    char mat[20];  // Nombre de la materia
    int pro;       // Promedio en la materia
} matpro;

// Declaración de la estructura alumno que contiene información de cada alumno
typedef struct
{
    int matri;         // Matrícula del alumno
    char nom[20];      // Nombre del alumno
    matpro cal[5];     // Arreglo de 5 estructuras matpro para las calificaciones de las materias
} alumno;

// Prototipos de funciones utilizadas en el programa
void Lectura(alumno *, int);
void F1(alumno *, int);
void F2(alumno *, int);
void F3(alumno *, int);

// Función principal del programa
void main(void)
{
    alumno ALU[50];  // Arreglo unidimensional de tipo alumno para almacenar información de hasta 50 alumnos
    int TAM;

    // Solicitar al usuario el tamaño del arreglo con validación
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);    // Validación del tamaño del arreglo

    Lectura(ALU, TAM);  // Llamada a la función para leer la información de los alumnos
    F1(ALU, TAM);       // Llamada a la función F1 para obtener el promedio general de cada alumno
    F2(ALU, TAM);       // Llamada a la función F2 para listar alumnos con calificación mayor a 9 en la tercera materia
    F3(ALU, TAM);       // Llamada a la función F3 para obtener el promedio general de la cuarta materia
}

// Función para leer la información de los alumnos
void Lectura(alumno A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese los datos del alumno %d", I + 1);
        printf("\nIngrese la matrícula del alumno: ");
        scanf("%d", &A[I].matri);
        fflush(stdin);

        printf("Ingrese el nombre del alumno:");
        gets(A[I].nom);

        for (J = 0; J < 5; J++)
        {
            printf("\tMateria %d: ", J + 1);
            fflush(stdin);
            gets(A[I].cal[J].mat);

            printf("\tPromedio %d: ", J + 1);
            scanf("%d", &A[I].cal[J].pro);
        }
    }
}

// Función para obtener la matrícula y el promedio general de cada alumno
void F1(alumno A[], int T)
{
    int I, J;
    float SUM;
    for (I = 0; I < T; I++)
    {
        printf("\nMatrícula del alumno : %d", A[I].matri);
        SUM = 0.0;

        // Calcular el promedio de todas las materias para el alumno actual
        for (J = 0; J < 5; J++)
            SUM = SUM + A[I].cal[J].pro;

        SUM = SUM / 5;  // Promedio general
        printf("\tPromedio: %.2f", SUM);
    }
}

// Función para listar las matrículas de alumnos con calificación mayor a 9 en la tercera materia
void F2(alumno A[], int T)
{
    int I;
    printf("\nAlumnos con calificación mayor a 9 en la tercera materia");
    for (I = 0; I < T; I++)
    {
        if (A[I].cal[2].pro > 9)
            printf("\nMatrícula del alumno : %d", A[I].matri);
    }
}

// Función para obtener el promedio general de la cuarta materia
void F3(alumno A[], int T)
{
    int I;
    float SUM = 0.0;

    // Calcular la suma de las calificaciones de la cuarta materia para todos los alumnos
    for (I = 0; I < T; I++)
        SUM = SUM + A[I].cal[3].pro;

    SUM = SUM / T;  // Promedio general de la cuarta materia
    printf("\n\nPromedio de la cuarta materia: %.2f", SUM);
}

