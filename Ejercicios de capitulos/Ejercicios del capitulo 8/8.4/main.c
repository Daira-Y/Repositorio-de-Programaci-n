#include <stdio.h>
#include <string.h>

/* Escuela.
El programa genera informaci�n estad�stica de los alumnos de una escuela. */

// Definici�n de la estructura alumno utilizando typedef
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

    // Ciclo para ingresar el tama�o del arreglo y validar que est� entre 1 y 50
    do
    {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);

    Lectura(ARRE, TAM); // Llama a la funci�n Lectura para ingresar los datos de los alumnos
    F1(ARRE, TAM);      // Llama a la funci�n F1 para calcular la matr�cula y promedio de cada alumno
    F2(ARRE, TAM);      // Llama a la funci�n F2 para mostrar las matr�culas de alumnos con calificaci�n en la tercera materia > 9
    F3(ARRE, TAM);      // Llama a la funci�n F3 para calcular y mostrar el promedio general del grupo en la materia 4
}

// Funci�n para leer los datos de los alumnos
void Lectura(alumno A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese los datos del alumno %d", I + 1);
        printf("\nIngrese la matr�cula del alumno: ");
        scanf("%d", &A[I].matricula);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].nombre);
        for (J = 0; J < 5; J++)
        {
            printf("\tIngrese la calificaci�n %d del alumno %d: ", J + 1, I + 1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}

// Funci�n para obtener la matr�cula y el promedio de cada alumno
void F1(alumno A[], int T)
{
    int I, J;
    float SUM, PRO;
    for (I = 0; I < T; I++)
    {
        printf("\nMatr�cula del alumno: %d", A[I].matricula);
        SUM = 0.0;
        for (J = 0; J < 5; J++)
            SUM = SUM + A[I].cal[J];
        PRO = SUM / 5;
        printf("\t\tPromedio: %.2f", PRO);
    }
}

// Funci�n para obtener las matr�culas de los alumnos con calificaci�n en la tercera materia > 9
void F2(alumno A[], int T)
{
    int I;
    printf("\nAlumnos con calificaci�n en la tercera materia > 9");
    for (I = 0; I < T; I++)
        if (A[I].cal[2] > 9)
            printf("\nMatr�cula del alumno: %d", A[I].matricula);
}

// Funci�n para calcular y mostrar el promedio general del grupo en la materia 4
void F3(alumno A[], int T)
{
    int I;
    float PRO, SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM = SUM + A[I].cal[3];
    PRO = SUM / T;
    printf("\n\nPromedio de la materia 4: %.2f", PRO);
}

