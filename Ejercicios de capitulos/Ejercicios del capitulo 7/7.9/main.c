#include <stdio.h>
int cuenta_caracter(char *cadena, char caracter); // Prototipo de la funci�n que cuenta caracteres.
void main(void)
{
    char cadena[50], caracter; // Declaraci�n de una cadena de caracteres y un car�cter.
    int cuenta;
    printf("Ingrese una cadena de caracteres: ");
    gets(cadena); // Lee una cadena de caracteres.
    printf("Ingrese un car�cter: ");
    caracter = getchar(); // Lee un car�cter.
    cuenta = cuenta_caracter(cadena, caracter); // Cuenta cu�ntas veces se repite el car�cter.
    printf("El car�cter '%c' se repite %d veces.\n", caracter, cuenta); // Imprime el resultado.
}
int cuenta_caracter(char *cadena, char caracter)
{
    int cuenta = 0;
    while (*cadena)   // Mientras no sea el fin de la cadena.
    {
        if (*cadena == caracter) cuenta++; // Si hay coincidencia, incrementa la cuenta.
        cadena++; // Avanza al siguiente caracter.
    }
    return cuenta; // Devuelve el n�mero de repeticiones.
}


