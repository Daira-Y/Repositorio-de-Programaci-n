#include <stdio.h>
void main (void)
{
    char *cad0 = "Buenos días";
    char cad1[20] = "Hola";
    char cad2[] = "México";
    char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};
    char cad4[20], cad5[20], cad6[20];

    printf("\nLa cadena cad0 es: ");
    puts(cad0); /* La función puts se utiliza para escribir cadenas de caracteres. */

    printf("\nLa cadena cad1 es: ");
    printf("%s", cad1); /* La función printf con %s también se puede utilizar para escribir cadenas. */

    printf("\nLa cadena cad2 es: ");
    puts(cad2);

    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    printf("\nIngrese una línea de texto —se lee con gets—: \n");
    gets(cad4); /* La función gets es apropiada para leer cadenas de caracteres. */
    printf("\nLa cadena cad4 es: ");
    puts(cad4);

    fflush(stdin);
    printf("\nIngrese una línea de texto —se lee con scanf—: \n");
    scanf("%s", cad5); /* La función scanf con %s lee una cadena de caracteres. */
    printf("\nLa cadena cad5 es: ");
    printf("%s", cad5);

    fflush(stdin);
    char p;
    int i = 0;
    printf("\nIngrese una línea de texto —se lee cada caracter con getchar—: \n");
    while ((p = getchar()) != '\n')
        cad6[i++] = p; /* Se lee cada caracter y se almacena en cad6. */
    cad6[i] = '\0'; /* Al final de la cadena se incorpora el caracter de terminación NULL. */

    printf("\nLa cadena cad6 es: ");
    puts(cad6);
}

