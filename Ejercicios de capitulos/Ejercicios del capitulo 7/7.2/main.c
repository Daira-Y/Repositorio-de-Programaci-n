#include <stdio.h>
#include <ctype.h>
void main(void)
{
    char p1;
    printf("\nIngrese un caracter para analizar si �ste es un d�gito: ");
    p1 = getchar();
    if (isdigit(p1))
        printf("%c es un d�gito\n", p1); /* La funci�n isdigit regresa 1 si p1 es un d�gito y 0 en caso contrario. */
    else
        printf("%c no es un d�gito\n", p1);
    fflush(stdin);

    printf("\nIngrese un caracter para examinar si �ste es una letra: ");
    p1 = getchar();
    if (isalpha(p1))
        printf("%c es una letra\n", p1); /* La funci�n isalpha regresa 1 si p1 es una letra y 0 en caso contrario. */
    else
        printf("%c no es una letra\n", p1);
    fflush(stdin);

    printf("\nIngrese un caracter para examinar si �ste es una letra min�scula: ");
    p1 = getchar();
    if (isalpha(p1))
        if (islower(p1))
            printf("%c es una letra min�scula\n", p1); /* La funci�n islower regresa 1 si p1 es una letra min�scula y 0 en caso contrario. */
        else
            printf("%c no es una letra min�scula\n", p1);
    else
        printf("%c no es una letra\n", p1);
    fflush(stdin);

    printf("\nIngrese una letra para convertirla de may�scula a min�scula: ");
    p1 = getchar();
    if (isalpha(p1))
        if (isupper(p1))
            printf("%c fue convertida de may�scula a min�scula\n", tolower(p1)); /* La funci�n tolower convierte de may�scula a min�scula. */
        else
            printf("%c es una letra min�scula\n", p1);
    else
        printf("%c no es una letra\n", p1);
}


