#include <stdio.h>
#include <string.h>

/* Estructuras-2.
El programa muestra la manera en que se declaran las estructuras anidadas y la
forma en que se tiene acceso a los campos de las variables de tipo estructura. */

struct domicilio /* Declaración de la estructura domicilio. */
{
    char calle[20];
    int numero;
    char colonia[20];
    char ciudad[20];
    char cp[5];
    char telefono[10];
};

struct empleado /* Declaración de la estructura empleado. */
{
    char nombre[20];
    struct domicilio direccion; /* Se anida la estructura domicilio. */
    float salario;
};

void main(void)
{
    struct empleado e1 = {"Arturo", {"Palmeras", 53, "Zaragoza", "Lerdo", "35150", "7256039"}, 5500.75};
    struct empleado e2;

    printf("\nIngrese el nombre del empleado 2: ");
    gets(e2.nombre);
    printf("Ingrese la calle: ");
    gets(e2.direccion.calle);
    printf("Ingrese el número: ");
    scanf("%d", &e2.direccion.numero);
    fflush(stdin);
    printf("Ingrese la colonia: ");
    gets(e2.direccion.colonia);
    printf("Ingrese la ciudad: ");
    gets(e2.direccion.ciudad);
    printf("Ingrese el código postal: ");
    gets(e2.direccion.cp);
    printf("Ingrese el teléfono: ");
    gets(e2.direccion.telefono);
    printf("Ingrese el salario: ");
    scanf("%f", &e2.salario);

    printf("\nDatos del empleado 1\n");
    printf("%s\n", e1.nombre);
    printf("%s %d %s %s %s %s\n", e1.direccion.calle, e1.direccion.numero, e1.direccion.colonia, e1.direccion.ciudad, e1.direccion.cp, e1.direccion.telefono);
    printf("%.2f\n", e1.salario);

    printf("\nDatos del empleado 2\n");
    printf("%s\n", e2.nombre);
    printf("%s %d %s %s %s %s\n", e2.direccion.calle, e2.direccion.numero, e2.direccion.colonia, e2.direccion.ciudad, e2.direccion.cp, e2.direccion.telefono);
    printf("%.2f\n", e2.salario);
}
