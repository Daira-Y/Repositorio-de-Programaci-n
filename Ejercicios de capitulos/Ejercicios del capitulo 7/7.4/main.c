#include <stdio.h>
#include <string.h>
int longitud(char *cad); // Prototipo de funci�n que calcula la longitud de una cadena.
void main(void)
{
    char FRA[50][30], cad[30]; // Declaraci�n de un arreglo bidimensional y una cadena.
    int i, n, l = 0, p;
    printf("Ingrese el n�mero de filas del arreglo: ");
    scanf("%d", &n); // Lectura del n�mero de filas.
    for (i = 0; i < n; i++)
    {
        printf("Ingrese la l�nea de texto n�mero %d: ", i + 1);
        fflush(stdin);
        gets(FRA[i]); // Lectura de cada l�nea de texto.
    }
    for (i = 0; i < n; i++)
    {
        strcpy(cad, FRA[i]); // Copia la cadena actual a cad.
        if (longitud(cad) > l)   // Compara la longitud de la cadena.
        {
            l = longitud(cad); // Actualiza la longitud m�s larga.
            p = i; // Guarda la posici�n de la cadena m�s larga.
        }
    }
    printf("La cadena m�s larga es: %s\n", FRA[p]); // Imprime la cadena m�s larga.
}
int longitud(char *cad)
{
    int i = 0;
    while (cad[i] != '\0') i++; // Cuenta los caracteres hasta el fin de la cadena.
    return i; // Devuelve la longitud de la cadena.
}

