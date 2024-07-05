#include <stdio.h>
#include <ctype.h>
void main(void)
{
    char p1;
    printf("\nIngrese un caracter para analizar si éste es un dígito: ");
    p1 = getchar();
    if (isdigit(p1))
        printf("%c es un dígito\n", p1); /* La función isdigit regresa 1 si p1 es un dígito y 0 en caso contrario. */
    else
        printf("%c no es un dígito\n", p1);
    fflush(stdin);

    printf("\nIngrese un caracter para examinar si éste es una letra: ");
    p1 = getchar();
    if (isalpha(p1))
        printf("%c es una letra\n", p1); /* La función isalpha regresa 1 si p1 es una letra y 0 en caso contrario. */
    else
        printf("%c no es una letra\n", p1);
    fflush(stdin);

    printf("\nIngrese un caracter para examinar si éste es una letra minúscula: ");
    p1 = getchar();
    if (isalpha(p1))
        if (islower(p1))
            printf("%c es una letra minúscula\n", p1); /* La función islower regresa 1 si p1 es una letra minúscula y 0 en caso contrario. */
        else
            printf("%c no es una letra minúscula\n", p1);
    else
        printf("%c no es una letra\n", p1);
    fflush(stdin);

    printf("\nIngrese una letra para convertirla de mayúscula a minúscula: ");
    p1 = getchar();
    if (isalpha(p1))
        if (isupper(p1))
            printf("%c fue convertida de mayúscula a minúscula\n", tolower(p1)); /* La función tolower convierte de mayúscula a minúscula. */
        else
            printf("%c es una letra minúscula\n", p1);
    else
        printf("%c no es una letra\n", p1);
}


