#include <stdio.h>
int cuenta_caracter(char *cadena, char caracter); // Prototipo de la función que cuenta caracteres.
void main(void)
{
    char cadena[50], caracter; // Declaración de una cadena de caracteres y un carácter.
    int cuenta;
    printf("Ingrese una cadena de caracteres: ");
    gets(cadena); // Lee una cadena de caracteres.
    printf("Ingrese un carácter: ");
    caracter = getchar(); // Lee un carácter.
    cuenta = cuenta_caracter(cadena, caracter); // Cuenta cuántas veces se repite el carácter.
    printf("El carácter '%c' se repite %d veces.\n", caracter, cuenta); // Imprime el resultado.
}
int cuenta_caracter(char *cadena, char caracter)
{
    int cuenta = 0;
    while (*cadena)   // Mientras no sea el fin de la cadena.
    {
        if (*cadena == caracter) cuenta++; // Si hay coincidencia, incrementa la cuenta.
        cadena++; // Avanza al siguiente caracter.
    }
    return cuenta; // Devuelve el número de repeticiones.
}


