#include <string.h>
/* Hospital.
El programa genera informaci�n acerca de los pacientes de un hospital. */

// Declaraci�n de la estructura domicilio que representa la direcci�n de un paciente
typedef struct
{
    char cal[20];   // Calle
    int num;        // N�mero
    char col[20];   // Colonia
    char cp[5];     // C�digo Postal
    char ciu[20];   // Ciudad
} domicilio;

// Declaraci�n de la estructura paciente que contiene la informaci�n de cada paciente
typedef struct
{
    char nom[20];   // Nombre y apellido del paciente
    int edad;       // Edad del paciente
    char sexo;      // Sexo del paciente ('F' o 'M')
    int con;        // Condici�n del paciente (1 a 5)
    domicilio dom;  // Domicilio del paciente (estructura domicilio)
    char tel[10];   // Tel�fono del paciente
} paciente;

// Prototipos de funciones utilizadas en el programa
void Lectura(paciente *, int);
void F1(paciente *, int);
void F2(paciente *, int);
void F3(paciente *, int);

// Funci�n principal del programa
void main(void)
{
    paciente HOSPITAL[100];  // Arreglo unidimensional de tipo paciente para almacenar informaci�n de hasta 100 pacientes
    int TAM;

    // Solicitar al usuario el n�mero de pacientes con validaci�n
    do
    {
        printf("Ingrese el n�mero de pacientes: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);    // Validaci�n del n�mero de pacientes

    Lectura(HOSPITAL, TAM);  // Llamada a la funci�n para leer la informaci�n de los pacientes
    F1(HOSPITAL, TAM);       // Llamada a la funci�n F1 para obtener el porcentaje de hombres y mujeres
    F2(HOSPITAL, TAM);       // Llamada a la funci�n F2 para obtener el n�mero de pacientes en cada categor�a de condici�n
    F3(HOSPITAL, TAM);       // Llamada a la funci�n F3 para obtener los pacientes en estado de m�xima gravedad
}

// Funci�n para leer la informaci�n de los pacientes
void Lectura(paciente A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\n\t\tPaciente %d", I + 1);

        // Lectura de datos personales del paciente
        fflush(stdin);
        printf("\nNombre: ");
        gets(A[I].nom);
        printf("Edad: ");
        scanf("%d", &A[I].edad);
        printf("Sexo (F-M): ");
        scanf(" %c", &A[I].sexo);  // Se a�ade un espacio antes de %c para evitar problemas con el buffer de entrada
        printf("Condici�n (1..5): ");
        scanf("%d", &A[I].con);

        // Lectura de datos de domicilio del paciente
        fflush(stdin);
        printf("\tCalle: ");
        gets(A[I].dom.cal);
        printf("\tN�mero: ");
        scanf("%d", &A[I].dom.num);
        fflush(stdin);
        printf("\tColonia: ");
        gets(A[I].dom.col);
        printf("\tC�digo Postal: ");
        gets(A[I].dom.cp);
        fflush(stdin);
        printf("\tCiudad: ");
        gets(A[I].dom.ciu);

        // Lectura del tel�fono del paciente
        printf("Tel�fono: ");
        gets(A[I].tel);
    }
}

// Funci�n para calcular y mostrar el porcentaje de hombres y mujeres en el hospital
void F1(paciente A[], int T)
{
    int I, FEM = 0, MAS = 0, TOT;

    // Conteo de hombres y mujeres
    for (I = 0; I < T; I++)
    {
        switch (A[I].sexo)
        {
        case 'F':
            FEM++;
            break;
        case 'M':
            MAS++;
            break;
        }
    }

    TOT = FEM + MAS;
    printf("\nPorcentaje de Hombres: %.2f%%", (float)MAS / TOT * 100);
    printf("\nPorcentaje de Mujeres: %.2f%%", (float)FEM / TOT * 100);
}

// Funci�n para contar y mostrar el n�mero de pacientes en cada categor�a de condici�n
void F2(paciente A[], int T)
{
    int I, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0;

    // Conteo de pacientes por categor�a de condici�n
    for (I = 0; I < T; I++)
    {
        switch (A[I].con)
        {
        case 1:
            C1++;
            break;
        case 2:
            C2++;
            break;
        case 3:
            C3++;
            break;
        case 4:
            C4++;
            break;
        case 5:
            C5++;
            break;
        }
    }

    // Mostrar el n�mero de pacientes en cada categor�a de condici�n
    printf("\nN�mero pacientes en condici�n 1: %d", C1);
    printf("\nN�mero pacientes en condici�n 2: %d", C2);
    printf("\nN�mero pacientes en condici�n 3: %d", C3);
    printf("\nN�mero pacientes en condici�n 4: %d", C4);
    printf("\nN�mero pacientes en condici�n 5: %d", C5);
}

// Funci�n para mostrar los nombres y tel�fonos de pacientes en estado de m�xima gravedad (condici�n 5)
void F3(paciente A[], int T)
{
    int I;

    // Mostrar pacientes en estado de m�xima gravedad (condici�n 5)
    printf("\nPacientes ingresados en estado de gravedad");
    for (I = 0; I < T; I++)
    {
        if (A[I].con == 5)
            printf("\nNombre: %s\tTel�fono: %s", A[I].nom, A[I].tel);
    }
}
