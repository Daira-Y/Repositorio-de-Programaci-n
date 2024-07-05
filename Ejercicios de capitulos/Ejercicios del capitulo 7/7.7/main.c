#include <stdio.h>
#include <string.h>
int cuenta_palabras(char *cadena); // Prototipo de la funci�n que cuenta las palabras en una cadena.
void main(void)
{
    char cadena[100]; // Declaraci�n de una cadena de caracteres.
    printf("Ingrese una l�nea de texto: ");
    gets(cadena); // Lee una l�nea de texto.
    printf("El n�mero de palabras es: %d\n", cuenta_palabras(cadena)); // Imprime el n�mero de palabras.
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
    return cuenta; // Devuelve el n�mero de palabras.
}
