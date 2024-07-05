#include <stdio.h>
#include <string.h>

/* Comercializadora farmacéutica.
El programa maneja información sobre ventas, inventario, reabastecimiento y
➥nuevos productos de una comercializadora farmacéutica. */

// Declaración de la estructura producto que almacenará información sobre cada producto
typedef struct
{
    int clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;

// Prototipos de funciones utilizadas en el programa
void Lectura(producto *, int);
void Ventas(producto *, int);
void Reabastecimiento(producto *, int);
void Nuevos_Productos(producto *, int *);
void Inventario(producto *, int);

// Función principal del programa
void main(void)
{
    producto INV[100];  // Se declara un arreglo unidimensional de tipo estructura producto
    int TAM, OPE;

    // Solicitar al usuario el número de productos con validación
    do
    {
        printf("Ingrese el número de productos: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);    // Validación del número de productos

    Lectura(INV, TAM);  // Llamada a la función para leer la información de los productos

    // Menú de opciones para operaciones sobre los productos
    printf("\nIngrese operación a realizar.\n");
    printf("\t1 – Ventas\n");
    printf("\t2 – Reabastecimiento\n");
    printf("\t3 - Nuevos Productos\n");
    printf("\t4 – Inventario\n");
    printf("\t0 - Salir: ");
    scanf("%d", &OPE);

    while (OPE)
    {
        switch (OPE)
        {
        case 1:
            Ventas(INV, TAM);
            break;
        case 2:
            Reabastecimiento(INV, TAM);
            break;
        case 3:
            Nuevos_Productos(INV, &TAM);
            break;
        case 4:
            Inventario(INV, TAM);
            break;
        }

        // Solicitar nuevamente la operación a realizar
        printf("\nIngrese operación a realizar.\n");
        printf("\t1 – Ventas\n");
        printf("\t2 – Reabastecimiento\n");
        printf("\t3 - Nuevos Productos\n");
        printf("\t4 – Inventario\n");
        printf("\t0 - Salir: ");
        scanf("%d", &OPE);
    }
}

// Función para leer la información de los productos
void Lectura(producto A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese información del producto %d", I + 1);
        printf("\n\tClave: ");
        scanf("%d", &A[I].clave);
        fflush(stdin);

        printf("\tNombre:");
        gets(A[I].nombre);

        printf("\tPrecio:");
        scanf("%f", &A[I].precio);

        printf("\tExistencia: ");
        scanf("%d", &A[I].existencia);
    }
}

// Función para manejar las ventas de productos
void Ventas(producto A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT, PAR;

    printf("\nIngrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);
    TOT = 0.0;

    while (CLA)
    {
        printf("\tCantidad: ");
        scanf("%d", &CAN);
        I = 0;

        // Búsqueda de la clave del producto en el arreglo
        while ((I < T) && (A[I].clave < CLA))
            I++;

        if ((I == T) || (A[I].clave > CLA))
            printf("\nLa clave del producto es incorrecta");
        else if (A[I].existencia >= CAN)
        {
            A[I].existencia -= CAN;  // Actualización del stock del producto
            PAR = A[I].precio * CAN;
            TOT += PAR;  // Acumulación del total de la venta
        }
        else
        {
            printf("\nNo existe en inventario la cantidad solicitada. Solo hay %d", A[I].existencia);
            printf("\n¿Los lleva 1 - Si 0 – No?: ");
            scanf("%d", &RES);

            if (RES)
            {
                PAR = A[I].precio * A[I].existencia;
                A[I].existencia = 0;  // El stock queda en cero
                TOT += PAR;  // Acumulación del total de la venta
            }
        }

        printf("\nIngrese la siguiente clave del producto -0 para salir-: ");
        scanf("%d", &CLA);
    }

    printf("\nTotal de la venta: %f", TOT);  // Impresión del total de la venta
}

// Función para reabastecer el inventario de productos
void Reabastecimiento(producto A[], int T)
{
    int CLA, CAN, I;

    printf("\nIngrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);

    while (CLA)
    {
        I = 0;

        // Búsqueda de la clave del producto en el arreglo
        while ((I < T) && (A[I].clave < CLA))
            I++;

        if ((I == T) || (A[I].clave > CLA))
            printf("\nLa clave del producto ingresada es incorrecta");
        else
        {
            printf("\tCantidad: ");
            scanf("%d", &CAN);
            A[I].existencia += CAN;  // Incremento del stock del producto
        }

        printf("\nIngrese otra clave del producto -0 para salir-: ");
        scanf("%d", &CLA);
    }
}

// Función para añadir nuevos productos al inventario
void Nuevos_Productos(producto A[], int *T)
{
    int CLA, I, J;

    printf("\nIngrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);

    while ((*T < 30) && (CLA))
    {
        I = 0;

        // Búsqueda de la posición adecuada para insertar el nuevo producto
        while ((I < *T) && (A[I].clave < CLA))
            I++;

        if (I == *T)
        {
            // Insertar el nuevo producto en la última posición del arreglo
            A[I].clave = CLA;
            printf("\tNombre:");
            fflush(stdin);
            gets(A[I].nombre);

            printf("\tPrecio:");
            scanf("%f", &A[I].precio);

            printf("\tCantidad: ");
            scanf("%d", &A[I].existencia);

            *T = *T + 1;  // Actualización del tamaño del arreglo
        }
        else if (A[I].clave == CLA)
        {
            printf("\nEl producto ya se encuentra en el inventario");
        }
        else
        {
            // Desplazamiento de elementos para insertar el nuevo producto
            for (J = *T; J > I; J--)
                A[J] = A[J - 1];

            // Inserción del nuevo producto en la posición encontrada
            A[I].clave = CLA;
            printf("\tNombre:");
            fflush(stdin);
            gets(A[I].nombre);

            printf("\tPrecio:");
            scanf("%f", &A[I].precio);

            printf("\tCantidad: ");
            scanf("%d", &A[I].existencia);

            *T = *T + 1;  // Actualización del tamaño del arreglo
        }

        printf("\nIngrese otra clave de producto -0 para salir-: ");
        scanf("%d", &CLA);
    }

    if (*T == 30)
        printf("\nYa no hay espacio para incorporar nuevos productos");
}

// Función para mostrar el inventario de productos
void Inventario(producto A[], int T)
{
    int I;

    // Recorrer el arreglo e imprimir la información de cada producto
    for (I = 0; I < T; I++)
    {
        printf("\nClave: %d", A[I].clave);
        printf("\tNombre: %s", A[I].nombre);
        printf("\tPrecio: %.2f", A[I].precio);
        printf("\tExistencia: %d \n", A[I].existencia);
    }
}
