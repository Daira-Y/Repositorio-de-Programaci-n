#include <string.h>
/* Hospital.
El programa genera información acerca de los pacientes de un hospital. */

// Declaración de la estructura domicilio que representa la dirección de un paciente
typedef struct
{
    char cal[20];   // Calle
    int num;        // Número
    char col[20];   // Colonia
    char cp[5];     // Código Postal
    char ciu[20];   // Ciudad
} domicilio;

// Declaración de la estructura paciente que contiene la información de cada paciente
typedef struct
{
    char nom[20];   // Nombre y apellido del paciente
    int edad;       // Edad del paciente
    char sexo;      // Sexo del paciente ('F' o 'M')
    int con;        // Condición del paciente (1 a 5)
    domicilio dom;  // Domicilio del paciente (estructura domicilio)
    char tel[10];   // Teléfono del paciente
} paciente;

// Prototipos de funciones utilizadas en el programa
void Lectura(paciente *, int);
void F1(paciente *, int);
void F2(paciente *, int);
void F3(paciente *, int);

// Función principal del programa
void main(void)
{
    paciente HOSPITAL[100];  // Arreglo unidimensional de tipo paciente para almacenar información de hasta 100 pacientes
    int TAM;

    // Solicitar al usuario el número de pacientes con validación
    do
    {
        printf("Ingrese el número de pacientes: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);    // Validación del número de pacientes

    Lectura(HOSPITAL, TAM);  // Llamada a la función para leer la información de los pacientes
    F1(HOSPITAL, TAM);       // Llamada a la función F1 para obtener el porcentaje de hombres y mujeres
    F2(HOSPITAL, TAM);       // Llamada a la función F2 para obtener el número de pacientes en cada categoría de condición
    F3(HOSPITAL, TAM);       // Llamada a la función F3 para obtener los pacientes en estado de máxima gravedad
}

// Función para leer la información de los pacientes
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
        scanf(" %c", &A[I].sexo);  // Se añade un espacio antes de %c para evitar problemas con el buffer de entrada
        printf("Condición (1..5): ");
        scanf("%d", &A[I].con);

        // Lectura de datos de domicilio del paciente
        fflush(stdin);
        printf("\tCalle: ");
        gets(A[I].dom.cal);
        printf("\tNúmero: ");
        scanf("%d", &A[I].dom.num);
        fflush(stdin);
        printf("\tColonia: ");
        gets(A[I].dom.col);
        printf("\tCódigo Postal: ");
        gets(A[I].dom.cp);
        fflush(stdin);
        printf("\tCiudad: ");
        gets(A[I].dom.ciu);

        // Lectura del teléfono del paciente
        printf("Teléfono: ");
        gets(A[I].tel);
    }
}

// Función para calcular y mostrar el porcentaje de hombres y mujeres en el hospital
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

// Función para contar y mostrar el número de pacientes en cada categoría de condición
void F2(paciente A[], int T)
{
    int I, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0;

    // Conteo de pacientes por categoría de condición
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

    // Mostrar el número de pacientes en cada categoría de condición
    printf("\nNúmero pacientes en condición 1: %d", C1);
    printf("\nNúmero pacientes en condición 2: %d", C2);
    printf("\nNúmero pacientes en condición 3: %d", C3);
    printf("\nNúmero pacientes en condición 4: %d", C4);
    printf("\nNúmero pacientes en condición 5: %d", C5);
}

// Función para mostrar los nombres y teléfonos de pacientes en estado de máxima gravedad (condición 5)
void F3(paciente A[], int T)
{
    int I;

    // Mostrar pacientes en estado de máxima gravedad (condición 5)
    printf("\nPacientes ingresados en estado de gravedad");
    for (I = 0; I < T; I++)
    {
        if (A[I].con == 5)
            printf("\nNombre: %s\tTeléfono: %s", A[I].nom, A[I].tel);
    }
}
