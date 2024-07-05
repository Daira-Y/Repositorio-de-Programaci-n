#include <stdio.h>
#include <string.h>

/* Escuela.
El programa genera informaci�n importante de los alumnos de una escuela. */

// Declaraci�n de la estructura matpro que representa una materia con su promedio
typedef struct
{
    char mat[20];  // Nombre de la materia
    int pro;       // Promedio en la materia
} matpro;

// Declaraci�n de la estructura alumno que contiene informaci�n de cada alumno
typedef struct
{
    int matri;         // Matr�cula del alumno
    char nom[20];      // Nombre del alumno
    matpro cal[5];     // Arreglo de 5 estructuras matpro para las calificaciones de las materias
} alumno;

// Prototipos de funciones utilizadas en el programa
void Lectura(alumno *, int);
void F1(alumno *, int);
void F2(alumno *, int);
void F3(alumno *, int);

// Funci�n principal del programa
void main(void)
{
    alumno ALU[50];  // Arreglo unidimensional de tipo alumno para almacenar informaci�n de hasta 50 alumnos
    int TAM;

    // Solicitar al usuario el tama�o del arreglo con validaci�n
    do
    {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);    // Validaci�n del tama�o del arreglo

    Lectura(ALU, TAM);  // Llamada a la funci�n para leer la informaci�n de los alumnos
    F1(ALU, TAM);       // Llamada a la funci�n F1 para obtener el promedio general de cada alumno
    F2(ALU, TAM);       // Llamada a la funci�n F2 para listar alumnos con calificaci�n mayor a 9 en la tercera materia
    F3(ALU, TAM);       // Llamada a la funci�n F3 para obtener el promedio general de la cuarta materia
}

// Funci�n para leer la informaci�n de los alumnos
void Lectura(alumno A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese los datos del alumno %d", I + 1);
        printf("\nIngrese la matr�cula del alumno: ");
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

// Funci�n para obtener la matr�cula y el promedio general de cada alumno
void F1(alumno A[], int T)
{
    int I, J;
    float SUM;
    for (I = 0; I < T; I++)
    {
        printf("\nMatr�cula del alumno : %d", A[I].matri);
        SUM = 0.0;

        // Calcular el promedio de todas las materias para el alumno actual
        for (J = 0; J < 5; J++)
            SUM = SUM + A[I].cal[J].pro;

        SUM = SUM / 5;  // Promedio general
        printf("\tPromedio: %.2f", SUM);
    }
}

// Funci�n para listar las matr�culas de alumnos con calificaci�n mayor a 9 en la tercera materia
void F2(alumno A[], int T)
{
    int I;
    printf("\nAlumnos con calificaci�n mayor a 9 en la tercera materia");
    for (I = 0; I < T; I++)
    {
        if (A[I].cal[2].pro > 9)
            printf("\nMatr�cula del alumno : %d", A[I].matri);
    }
}

// Funci�n para obtener el promedio general de la cuarta materia
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

