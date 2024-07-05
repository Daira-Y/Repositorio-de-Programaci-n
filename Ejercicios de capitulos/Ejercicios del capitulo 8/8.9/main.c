#include <stdio.h>
#include <string.h>

/* Bienes raíces.
El programa maneja información sobre las propiedades que tiene una empresa
de bienes raíces de la ciudad de Lima, Perú, tanto para venta como para
renta. */

// Declaración de la estructura ubicación para almacenar la dirección de la propiedad
typedef struct
{
    char zona[20];   // Zona geográfica
    char calle[20];  // Calle
    char colo[20];   // Colonia
} ubicacion;

// Declaración de la estructura propiedades que almacena la información de cada propiedad
typedef struct
{
    char clave[5];    // Clave de la propiedad
    float scu;        // Superficie cubierta
    float ste;        // Superficie terreno
    char car[50];     // Características de la propiedad
    ubicacion ubi;    // Ubicación de la propiedad (estructura ubicacion)
    float precio;     // Precio de la propiedad
    char dispo;       // Disponibilidad ('V' para Venta, 'R' para Renta)
} propiedades;

// Prototipos de funciones utilizadas en el programa
void Lectura(propiedades [], int);
void F1(propiedades *, int);
void F2(propiedades *, int);

// Función principal del programa
void main(void)
{
    propiedades PROPIE[100];  // Arreglo unidimensional de tipo propiedades para almacenar hasta 100 propiedades
    int TAM;

    // Solicitar al usuario el número de propiedades con validación
    do
    {
        printf("Ingrese el número de propiedades: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);    // Validación del número de propiedades

    Lectura(PROPIE, TAM);  // Llamada a la función para leer la información de las propiedades
    F1(PROPIE, TAM);       // Llamada a la función F1 para listar propiedades para venta en Miraflores
    F2(PROPIE, TAM);       // Llamada a la función F2 para listar propiedades para renta en una zona específica
}

// Función para leer la información de las propiedades
void Lectura(propiedades A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\n\tIngrese datos de la propiedad %d", I + 1);
        printf("\nClave: ");
        fflush(stdin);
        gets(A[I].clave);
        printf("Superficie cubierta: ");
        scanf("%f", &A[I].scu);
        printf("Superficie terreno: ");
        scanf("%f", &A[I].ste);
        printf("Características: ");
        fflush(stdin);
        gets(A[I].car);
        printf("\tZona: ");
        fflush(stdin);
        gets(A[I].ubi.zona);
        printf("\tCalle: ");
        fflush(stdin);
        gets(A[I].ubi.calle);
        printf("\tColonia: ");
        fflush(stdin);
        gets(A[I].ubi.colo);
        printf("Precio: ");
        scanf("%f", &A[I].precio);
        printf("Disponibilidad (Venta-V Renta-R): ");
        scanf(" %c", &A[I].dispo);  // Se añade un espacio antes de %c para evitar problemas con el buffer de entrada
    }
}

// Función para listar propiedades disponibles para venta en Miraflores dentro de un rango de precios específico
void F1(propiedades A[], int T)
{
    int I;
    printf("\n\t\tListado de Propiedades para Venta en Miraflores");
    for (I = 0; I < T; I++)
    {
        if ((A[I].dispo == 'V') && (strcmp(A[I].ubi.zona, "Miraflores") == 0))
        {
            if ((A[I].precio >= 450000) && (A[I].precio <= 650000))
            {
                printf("\nClave de la propiedad: ");
                puts(A[I].clave);
                printf("Superficie cubierta: %f", A[I].scu);
                printf("\nSuperficie terreno: %f", A[I].ste);
                printf("\nCaracterísticas: ");
                puts(A[I].car);
                printf("Calle: ");
                puts(A[I].ubi.calle);
                printf("Colonia: ");
                puts(A[I].ubi.colo);
                printf("Precio: %.2f\n", A[I].precio);
            }
        }
    }
}

// Función para listar propiedades disponibles para renta en una zona específica dentro de un rango de precios
void F2(propiedades A[], int T)
{
    int I;
    float li, ls;
    char zon[20];
    printf("\n\t\tListado de Propiedades para Renta");
    printf("\nIngrese zona geográfica: ");
    fflush(stdin);
    gets(zon);
    printf("Ingrese el límite inferior del precio:");
    scanf("%f", &li);
    printf("Ingrese el límite superior del precio:");
    scanf("%f", &ls);
    for (I = 0; I < T; I++)
    {
        if ((A[I].dispo == 'R') && (strcmp(A[I].ubi.zona, zon) == 0))
        {
            if ((A[I].precio >= li) && (A[I].precio <= ls))
            {
                printf("\nClave de la propiedad: ");
                puts(A[I].clave);
                printf("Superficie cubierta: %f", A[I].scu);
                printf("\nSuperficie terreno: %f", A[I].ste);
                printf("\nCaracterísticas: ");
                puts(A[I].car);
                printf("Calle: ");
                puts(A[I].ubi.calle);
                printf("Colonia: ");
                puts(A[I].ubi.colo);
                printf("Precio: %.2f\n", A[I].precio);
            }
        }
    }
}
