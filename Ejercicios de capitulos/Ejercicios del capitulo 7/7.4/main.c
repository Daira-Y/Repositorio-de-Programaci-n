#include <stdio.h>
#include <string.h>
int longitud(char *cad); // Prototipo de función que calcula la longitud de una cadena.
void main(void)
{
    char FRA[50][30], cad[30]; // Declaración de un arreglo bidimensional y una cadena.
    int i, n, l = 0, p;
    printf("Ingrese el número de filas del arreglo: ");
    scanf("%d", &n); // Lectura del número de filas.
    for (i = 0; i < n; i++)
    {
        printf("Ingrese la línea de texto número %d: ", i + 1);
        fflush(stdin);
        gets(FRA[i]); // Lectura de cada línea de texto.
    }
    for (i = 0; i < n; i++)
    {
        strcpy(cad, FRA[i]); // Copia la cadena actual a cad.
        if (longitud(cad) > l)   // Compara la longitud de la cadena.
        {
            l = longitud(cad); // Actualiza la longitud más larga.
            p = i; // Guarda la posición de la cadena más larga.
        }
    }
    printf("La cadena más larga es: %s\n", FRA[p]); // Imprime la cadena más larga.
}
int longitud(char *cad)
{
    int i = 0;
    while (cad[i] != '\0') i++; // Cuenta los caracteres hasta el fin de la cadena.
    return i; // Devuelve la longitud de la cadena.
}

