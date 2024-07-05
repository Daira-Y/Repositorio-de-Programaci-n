#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    printf("Ingrese la letra: ");
    scanf("%c", &letra);
    if (letra >= 65 && letra <= 90)
    {
        letra = letra + 32;
        printf("La letra en miniscula es: %c", letra);
    }
    else if (letra >= 97 && letra <= 122)
     {
         letra = letra - 32;
         printf("La letra en mayuscula es: %c", letra);
     }
     return 0;
}

