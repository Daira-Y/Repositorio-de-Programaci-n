#include <stdio.h>
void main(void)
{
    char p1, p2, p3 = '$';
    /* Declaraci�n de variables tipo caracter p1, p2 y p3. A p3 se le asigna el s�mbolo $. */

    printf("\nIngrese un caracter: ");
    p1 = getchar(); /* Se utiliza la funci�n getchar para leer un caracter. */
    putchar(p1); /* Se utiliza la funci�n putchar para escribir un caracter. */
    printf("\n");
    fflush(stdin); /* Limpia el b�fer de entrada. */

    printf("\nEl caracter p3 es: ");
    putchar(p3); /* Escribe el caracter almacenado en p3. */
    printf("\n");

    printf("\nIngrese otro caracter: ");
    fflush(stdin);
    scanf("%c", &p2); /* Se utiliza scanf con el formato %c para leer un caracter. */
    printf("%c", p2); /* Se utiliza printf con el formato %c para escribir un caracter. */
}

