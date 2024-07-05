#include <stdio.h>
#include <string.h>

// Definición de la estructura domicilio para la dirección
typedef struct
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

// Definición de la estructura empleado que contiene un domicilio
struct empleado
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion; // Campo de tipo domicilio para la dirección del empleado
};

// Función para leer los datos de un empleado y su dirección
void Lectura(struct empleado *a)
{
    // Lectura de datos personales del empleado
    printf("\nIngrese el nombre del empleado: ");
    gets(a->nombre);
    fflush(stdin); // Limpiar el buffer de entrada

    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin); // Limpiar el buffer de entrada

    // Lectura de datos de la dirección del empleado
    printf("---Ingrese la dirección del empleado---");
    printf("\n\tCalle: ");
    gets(a->direccion.calle);

    printf("\tNúmero: ");
    scanf("%d", &a->direccion.numero);

    printf("\tCódigo Postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin); // Limpiar el buffer de entrada

    printf("\tLocalidad: ");
    gets(a->direccion.localidad);
}

// Función principal del programa
int main(void)
{
    // Declaración e inicialización de una estructura empleado
    struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jerónimo", 120, 3490, "Toluca"}};

    // Declaración de variables y punteros
    struct empleado *e1, *e2, e3, e4;

    // Asignación de memoria dinámica para e1 y e2
    e1 = (struct empleado *)malloc(sizeof(struct empleado));

    // Lectura de datos para e1 desde el usuario
    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", (*e1).nombre);
    fflush(stdin); // Limpiar el buffer de entrada

    printf("Ingrese el departamento de la empresa: ");
    gets(e1->departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    fflush(stdin); // Limpiar el buffer de entrada

    // Lectura de la dirección para e1 desde el usuario
    printf("---Ingrese la dirección del empleado---");
    printf("\n\tCalle: ");
    fflush(stdin);
    gets(e1->direccion.calle);

    printf("\tNúmero: ");
    scanf("%d", &e1->direccion.numero);

    printf("\tCódigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    fflush(stdin); // Limpiar el buffer de entrada

    printf("\tLocalidad: ");
    gets(e1->direccion.localidad);

    // Lectura de datos para e3 desde el usuario
    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", e3.nombre);
    fflush(stdin); // Limpiar el buffer de entrada

    printf("Ingrese el departamento de la empresa: ");
    gets(e3.departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    fflush(stdin); // Limpiar el buffer de entrada

    // Lectura de la dirección para e3 desde el usuario
    printf("---Ingrese la dirección del empleado---");
    printf("\n\tCalle: ");
    gets(e3.direccion.calle);

    printf("\tNúmero: ");
    scanf("%d", &e3.direccion.numero);

    printf("\tCódigo Postal: ");
    scanf("%d", &e3.direccion.cp);
    fflush(stdin); // Limpiar el buffer de entrada

    printf("\tLocalidad: ");
    gets(e3.direccion.localidad);

    // Asignación de memoria dinámica para e2 y llamada a la función Lectura para e2 y e4
    e2 = (struct empleado *)malloc(sizeof(struct empleado));
    Lectura(e2);
    Lectura(&e4);

    // Impresión de los datos de e1 y e4
    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e1->nombre, e1->departamento, e1->sueldo,
           e1->direccion.calle, e1->direccion.numero, e1->direccion.cp,
           e1->direccion.localidad);

    printf("Datos del empleado 4\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e4.nombre, e4.departamento, e4.sueldo,
           e4.direccion.calle, e4.direccion.numero, e4.direccion.cp,
           e4.direccion.localidad);

    // Liberación de la memoria asignada dinámicamente
    free(e1);
    free(e2);

    return 0; // Fin del programa
}
