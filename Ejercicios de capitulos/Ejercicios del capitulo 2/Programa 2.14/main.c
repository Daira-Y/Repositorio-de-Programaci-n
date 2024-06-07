#include <stdio.h>
#include <stdlib.h>

void main(void)//Define la función principal del programa que no recibe argumentos y no devuelve un valor.
{
    int CLA, TIE;//Declara dos variables enteras CLA (clave) y TIE (tiempo).
    float COS;//Declara una variable de punto flotante COS que se usará para almacenar el costo calculado.
    printf("Ingresa la clave y el tiempo: ");//Muestra el mensaje "Ingresa la clave y el tiempo: " en la consola, solicitando al usuario que introduzca dos valores.
    scanf("%d %d", &CLA, &TIE);//Lee dos valores enteros introducidos por el usuario y los almacena en las variables CLA y TIE.
    switch(CLA)//Inicia un bloque de instrucciones basado en el valor de la variable CLA.
    {
        case 1: COS = TIE * 0.13 / 60; break;//Si el valor de CLA es 1, calcula el costo (COS) como TIE*0.13/60 (tiempo en minutos * tarifa / 60) y sale del switch
        case 2: COS = TIE * 0.11 / 60; break;//Si el valor de CLA es 2, calcula el costo (COS) como TIE*0.11/60 y sale del switch.
        case 5: COS = TIE * 0.22 / 60; break;//Si el valor de CLA es 5, calcula el costo (COS) como TIE*0.22/60 y sale del switch.
        case 6: COS = TIE * 0.19 / 60; break;//Si el valor de CLA es 6, calcula el costo (COS) como TIE*0.19/60 y sale del switch.
        case 7: //
        case 9: COS = TIE * 0.17 / 60; break;//Si el valor de CLA es 7 o 9, calcula el costo (COS) como TIE*0.17/60 y sale del switch.
        case 10: COS = TIE * 0.20 / 60; break;//Si el valor de CLA es 10, calcula el costo (COS) como, TIE*0.20/60 y sale del switch.
        case 15: COS = TIE * 0.39 / 60; break;//Si el valor de CLA es 15, calcula el costo (COS) como, TIE*0.39/60 y sale del switch.
        case 20: COS = TIE * 0.28 / 60; break;//Si el valor de CLA es 20, calcula el costo (COS) como, TIE*0.28/60 y sale del switch.
        default : COS = -1; break;//Si CLA no coincide con ningún caso, se asigna -1 a COS y se sale del switch.
    }
    if (COS != -1)//Inicia una estructura condicional que verifica si COS es diferente de -1.
          printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS);//Si COS no es -1, muestra en la consola la clave, el tiempo y el costo con un formato específico.
    else//Inicia el bloque de código que se ejecuta si la condición del if no se cumple.
          printf("\nError en la clave");//Muestra un mensaje de error en la consola indicando que hubo un error en la clave.
}
