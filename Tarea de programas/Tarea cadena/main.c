#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena [6];
    printf ("Ingrese las letras:");
    fgets(cadena,6,stdin);
    for (int i=0; i<5 != '\0'; i++)
        if (cadena [i] >= 'A' && cadena [i] <= 'Z')
        {
            cadena[i] = cadena[i] + 32;
        }
        else if (cadena [i] >= 'a' && cadena[i] <= 'z')
        {
            cadena [i] = cadena[i] - 32;
        }
    printf("Estas son las letras canbiadas: %s", cadena);
}
