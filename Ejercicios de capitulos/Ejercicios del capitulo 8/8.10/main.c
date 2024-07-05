#include <stdio.h>
#include <string.h>

/* Vendedores.
El programa maneja informaci�n sobre las ventas que realizan los vendedores de
art�culos dom�sticos de una importante empresa de la Ciudad de M�xico. */

// Declaraci�n de la estructura banco para almacenar informaci�n bancaria
typedef struct
{
    char noba[10]; // Nombre del banco
    char nucu[10]; // N�mero de cuenta
} banco;

// Declaraci�n de la uni�n fpago para almacenar diferentes formas de pago
typedef union
{
    banco che; // Cheque, campo de tipo estructura banco
    banco nomi; // N�mina, campo de tipo estructura banco
    char venta; // Ventanilla
} fpago;

// Declaraci�n de la estructura domicilio para almacenar la direcci�n del vendedor
typedef struct
{
    char cnu[20]; // Calle y n�mero
    char col[20]; // Colonia
    char cp[5]; // C�digo Postal
    char ciu[15]; // Ciudad
} domicilio;

// Declaraci�n de la estructura vendedor para almacenar informaci�n sobre los vendedores
typedef struct
{
    int num; // N�mero de vendedor
    char nom[20]; // Nombre del vendedor
    float ven[12]; // Ventas del a�o, arreglo unidimensional de tipo real
    domicilio domi; // domi es de tipo estructura domicilio
    float sal; // Salario mensual
    fpago pago; // pago es de tipo uni�n fpago
    int cla; // Clave forma de pago
} vendedor;

// Prototipos de funciones utilizadas en el programa
void Lectura(vendedor *, int);
void F1(vendedor *, int);
void F2(vendedor *, int);
void F3(vendedor *, int);
void F4(vendedor *, int);

// Funci�n principal del programa
void main(void)
{
    vendedor VENDEDORES[100]; // Declaraci�n del arreglo unidimensional de tipo estructura vendedor
    int TAM;

    // Solicitar al usuario el n�mero de vendedores con validaci�n
    do
    {
        printf("Ingrese el n�mero de vendedores: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);   // Validaci�n del n�mero de elementos del arreglo

    Lectura(VENDEDORES, TAM); // Llamada a la funci�n para leer la informaci�n de los vendedores
    F1(VENDEDORES, TAM);      // Llamada a la funci�n F1 para generar las ventas totales anuales
    F2(VENDEDORES, TAM);      // Llamada a la funci�n F2 para incrementar el salario de vendedores con altas ventas
    F3(VENDEDORES, TAM);      // Llamada a la funci�n F3 para listar vendedores con bajas ventas
    F4(VENDEDORES, TAM);      // Llamada a la funci�n F4 para listar vendedores con cuenta en el banco
    printf("\n\tFIN DEL PROGRAMA");
}

// Funci�n para leer la informaci�n de los vendedores
void Lectura(vendedor A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        printf("\n\tIngrese datos del vendedor %d", I + 1);
        printf("\nN�mero de vendedor: ");
        scanf("%d", &A[I].num);
        printf("Nombre del vendedor: ");
        fflush(stdin);
        gets(A[I].nom);
        printf("Ventas del a�o: \n");
        for (J = 0; J < 12; J++)
        {
            printf("\tMes %d: ", J + 1);
            scanf("%f", &A[I].ven[J]);
        }
        printf("Domicilio del vendedor: \n");
        printf("\tCalle y n�mero: ");
        fflush(stdin);
        gets(A[I].domi.cnu);
        printf("\tColonia: ");
        fflush(stdin);
        gets(A[I].domi.col);
        printf("\tC�digo Postal: ");
        fflush(stdin);
        gets(A[I].domi.cp);
        printf("\tCiudad: ");
        fflush(stdin);
        gets(A[I].domi.ciu);
        printf("Salario del vendedor: ");
        scanf("%f", &A[I].sal);
        printf("Forma de Pago (Banco-1 N�mina-2 Ventanilla-3): ");
        scanf("%d", &A[I].cla);
        switch (A[I].cla)
        {
        case 1:
        {
            printf("\tNombre del banco: ");
            fflush(stdin);
            gets(A[I].pago.che.noba);
            printf("\tN�mero de cuenta: ");
            fflush(stdin);
            gets(A[I].pago.che.nucu);
            break;
        }
        case 2:
        {
            printf("\tNombre del banco: ");
            fflush(stdin);
            gets(A[I].pago.nomi.noba);
            printf("\tN�mero de cuenta: ");
            fflush(stdin);
            gets(A[I].pago.nomi.nucu);
            break;
        }
        case 3:
            A[I].pago.venta = 'S';
            break;
        }
    }
}

// Funci�n para generar las ventas totales anuales de cada uno de los vendedores de la empresa
void F1(vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\n\t\tVentas Totales de los Vendedores");
    for (I = 0; I < T; I++)
    {
        printf("\nVendedor: %d", A[I].num);
        SUM = 0.0;
        for (J = 0; J < 12; J++)
            SUM += A[I].ven[J];
        printf("\nVentas: %.2f\n", SUM);
    }
}

// Funci�n para incrementar 5% el salario de todos aquellos vendedores cuyas ventas anuales superaron $1,500,000
void F2(vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\n\t\tIncremento a los Vendedores con Ventas > 1,500,000$");
    for (I = 0; I < T; I++)
    {
        SUM =

