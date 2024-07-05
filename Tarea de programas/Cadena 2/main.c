#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[10]; // Puedes ajustar el tamaño según tus necesidades
    int countMinusculas = 0;
    int countMayusculas = 0;
    int countNumeros = 0;

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (islower(cadena[i])) {
            countMinusculas++;
        } else if (isupper(cadena[i])) {
            countMayusculas++;
        } else if (isdigit(cadena[i])) {
            countNumeros++;
        }
    }

    printf("Cantidad de letras minusculas: %d\n", countMinusculas);
    printf("Cantidad de letras mayusculas: %d\n", countMayusculas);
    printf("Cantidad de numeros: %d\n", countNumeros);

    return 0;
}

