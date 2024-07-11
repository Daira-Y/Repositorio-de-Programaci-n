#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.

/* Incrementa salarios.
El programa incrementa el salario de los empleados de una empresa
—actualiza el archivo correspondiente— si sus ventas son superiores
al millón de pesos anuales. */

typedef struct    // Declaración de la estructura 'empleado'.
{
    int clave;  // Campo entero para la clave del empleado.
    int departamento;  // Campo entero para el departamento del empleado.
    float salario;  // Campo flotante para el salario del empleado.
    float ventas[12];  // Arreglo de flotantes para las ventas mensuales del empleado.
} empleado;

void incrementa(FILE *);  // Prototipo de función 'incrementa'.

void main(void)
{
    FILE *ar;  // Declara un apuntador a archivo.
    if ((ar = fopen("ad5.dat", "r+")) != NULL)  // Abre el archivo "ad5.dat" en modo lectura/escritura.
        incrementa(ar);  // Llama a la función 'incrementa' si el archivo se abre correctamente.
    else
        printf("\nEl archivo no se puede abrir");  // Muestra un mensaje si el archivo no se puede abrir.
    rewind(ar);  // Posiciona el apuntador al inicio del archivo.
    fclose(ar);  // Cierra el archivo.
}

void incrementa(FILE *ap)
{
    int i, j, t;
    float sum;
    empleado emple;
    t = sizeof(empleado);  // Obtiene el tamaño de la estructura 'empleado'.
    fread(&emple, sizeof(empleado), 1, ap);  // Lee el primer registro del archivo.
    while (!feof(ap))
    {
        i = ftell(ap) / t;  // Obtiene la posición del apuntador en el archivo.
        sum = 0;
        for (j = 0; j < 12; j++)
            sum += emple.ventas[j];  // Calcula las ventas anuales del empleado.
        if (sum > 1000000)
        {
            emple.salario = emple.salario * 1.10;  // Incrementa el salario si las ventas son superiores a un millón.
            fseek(ap, (i-1) * sizeof(empleado), 0);  // Posiciona el apuntador en el registro correspondiente.
            fwrite(&emple, sizeof(empleado), 1, ap);  // Escribe el registro actualizado en el archivo.
            fseek(ap, i * sizeof(empleado), 0);  // Reposiciona el apuntador para leer el siguiente registro.
        }
        fread(&emple, sizeof(empleado), 1, ap);  // Lee el siguiente registro del archivo.
    }
}
