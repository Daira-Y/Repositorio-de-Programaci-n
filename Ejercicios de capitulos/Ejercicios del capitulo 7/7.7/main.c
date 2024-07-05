#include <stdio.h>
#include <string.h>
int cuenta_palabras(char *cadena); // Prototipo de la función que cuenta las palabras en una cadena.
void main(void)
{
    char cadena[100]; // Declaración de una cadena de caracteres.
    printf("Ingrese una línea de texto: ");
    gets(cadena); // Lee una línea de texto.
    printf("El número de palabras es: %d\n", cuenta_palabras(cadena)); // Imprime el número de palabras.
}
int cuenta_palabras(char *cadena)
{
    int cuenta = 0;
    char *palabra = strtok(cadena, " "); // Divide la cadena en palabras.
    while (palabra != NULL)   // Mientras haya palabras.
    {
        cuenta++; // Incrementa el contador de palabras.
        palabra = strtok(NULL, " "); // Obtiene la siguiente palabra.
    }
    return cuenta; // Devuelve el número de palabras.
}
