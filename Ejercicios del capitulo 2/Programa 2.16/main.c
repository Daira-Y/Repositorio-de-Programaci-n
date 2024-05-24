#include <stdio.h>
#include <stdlib.h>

void main(void)//Esta línea define la función principal main del programa, que no retorna ningún valor (void).
{
   int CLA, CAT, ANT, RES;//Declara cuatro variables enteras: CLA (clave del trabajador), CAT (categoría del trabajador), ANT (antigüedad del trabajador) y RES (resultado de si reúne las condiciones para el puesto).
   printf("ingrese la clave, categoria y anigüedad del trabajador: ");//Imprime en pantalla el mensaje para que el usuario ingrese la clave, categoría y antigüedad del trabajador.
   scanf("%d %d %d", &CLA, &CAT, &ANT);//Lee tres valores enteros introducidos por el usuario y los asigna a las variables CLA, CAT y ANT, respectivamente.
   switch (CAT)//Inicia una estructura de control switch que selecciona entre diferentes casos basándose en el valor de CAT (categoría del trabajador).
   {
       case 3: //Si CAT es igual a 3 o 4
       case 4: if (ANT >= 5)//verifica si la antigüedad (ANT) es mayor o igual a 5.
                   RES = 1;//Si es así, asigna 1 a RES (reúne las condiciones);
               else//de lo contrario
                    RES = 0;//asigna 0 a RES.
               break;//
       case 2: if (ANT >= 7)//Si CAT es igual a 2, verifica si la antigüedad (ANT) es mayor o igual a 7.
                       RES = 1;//Si es así, asigna 1 a RES (reúne las condiciones);
               else//de lo contrario
                          RES = 0;//asigna 0 a RES.
               break;//
       default: RES = 0;//Si CAT no coincide con 2, 3 o 4, se ejecuta el caso default, y se asigna 0 a RES. Esto significa que no reúne las condiciones para el puesto.
             break;//
   }
   if (RES)//Comprueba si RES es diferente de 0 (es decir, si es 1).
          printf("\nEltrabajador con clave %d reune las condiciones para el puesto", CLA);//Si RES es 1, imprime en pantalla que el trabajador con la clave especificada reúne las condiciones para el puesto.
   else
          printf("\nEl trabajadro con clave %d no reune las concidiones para el puesto", CLA );//Si RES es 0, imprime en pantalla que el trabajador con la clave especificada no reúne las condiciones para el puesto.
}
