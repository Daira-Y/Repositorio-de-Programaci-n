#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x = 0.0;
    double b = 0.0;

    double tmp = 0.0;

    int cnt = 0;

    printf("Programa Calculo Raiz Cuadrada");
    printf("Inserte Numero:");
    scanf("%lf", &x);
    b = x;

    while(!(b==(x/b))) {
        b = 0.5* ((x/b)+b);
        printf("Root %lf \n", b);

        cnt++;
    }

    printf("Root %lf = %lf \n", x, b);

    return 0;


}
