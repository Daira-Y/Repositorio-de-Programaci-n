#include <stdio.h>
#include <stdlib.h>

void main (void)//Define la funci�n main, que es el punto de entrada del programa. void indica que no retorna ning�n valor.
{
    int MAT, CAR, SEM;//Declara tres variables enteras: MAT (matr�cula), CAR (carrera), y SEM (semestre).
    float PRO;//Declara una variable de punto flotante PRO (promedio).
    printf("Ingrese matricula: ");//Imprime en la consola el mensaje "Ingrese matricula: ", solicitando al usuario que ingrese su matr�cula.
    scanf("%d", &MAT);//Lee un valor entero introducido por el usuario y lo almacena en la variable MAT.
    printf("Ingrese carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica) : ");//Muestra el mensaje indicando al usuario que ingrese el c�digo de la carrera.
    scanf("%d", &CAR);//Lee un valor entero introducido por el usuario y lo almacena en la variable CAR.
    printf("Ingrese semestre: ");//Muestra el mensaje "Ingrese semestre: " en la consola.
    scanf("%d", &SEM);//Lee un valor entero introducido por el usuario y lo almacena en la variable SEM.
    printf("Ingrese promedio: ");//Muestra el mensaje "Ingrese promedio: " en la consola.
    scanf("%f", &PRO);//Lee un valor de punto flotante introducido por el usuario y lo almacena en la variable PRO.
    switch (CAR)//Inicia una estructura de control switch que eval�a la variable CAR (carrera).
    {
    case 1://Corresponde a la carrera 1 (Industrial).
        if (SEM >= 6 && PRO >= 8.5)//Comprueba si el semestre es mayor o igual a 6 y el promedio es mayor o igual a 8.5.
            printf ("\n%d %d %5.2f", MAT, CAR, PRO);//Si se cumple la condici�n, imprime la matr�cula, la carrera y el promedio.
        break;//Termina el caso case 1
    case 2://Corresponde a la carrera 2 (Telem�tica).
        if (SEM >= 5 && PRO >= 9.0)//Comprueba si el semestre es mayor o igual a 5 y el promedio es mayor o igual a 9.0.
            printf("\n%d %d %5.2f", MAT, CAR, PRO);//Si se cumple la condici�n, imprime la matr�cula, la carrera y el promedio.
        break;//Termina el caso case 2.
    case 3://Corresponde a la carrera 3 (Computaci�n)
        if (SEM >= 6 && PRO >= 8.8)//Comprueba si el semestre es mayor o igual a 6 y el promedio es mayor o igual a 8.8.
            printf("\n%d %d %5.2f", MAT, CAR, PRO);//Si se cumple la condici�n, imprime la matr�cula, la carrera y el promedio.
        break;//Termina el caso case 3.
    case 4://Corresponde a la carrera 4 (Mec�nica)
        if (SEM >= 7 && PRO >= 9.0)//Comprueba si el semestre es mayor o igual a 7 y el promedio es mayor o igual a 9.0.
            printf("\n%d %d %5.2f", MAT, CAR, PRO);//Si se cumple la condici�n, imprime la matr�cula, la carrera y el promedio.
        break;//Termina el caso case 4.
    default://Caso por defecto si CAR no coincide con ninguno de los valores anteriores (1, 2, 3, 4).
        printf("\n Error en la carrera");//Imprime un mensaje de error indicando que la carrera es inv�lida.
        break;//Termina el caso default.
    }//El programa, en resumen, solicita al usuario que ingrese su matr�cula, carrera, semestre y promedio. Luego, verifica ciertas condiciones basadas en la carrera ingresada y, si se cumplen las condiciones espec�ficas, imprime los datos del usuario. Si la carrera no corresponde a las opciones v�lidas, muestra un mensaje de error.
}
