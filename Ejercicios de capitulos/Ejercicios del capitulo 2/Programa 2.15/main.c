#include <stdio.h>
#include <stdlib.h>

void main(void)//Define la función principal del programa que no retorna ningún valor (void).
{
   int TRA, EDA, DIA;//Declara tres variables enteras: TRA (tipo de tratamiento), EDA (edad) y DIA (días).
   float COS;//Declara una variable de tipo float llamada COS para almacenar el costo.
   printf("Ingese tipo de tratamiento, edad y dias: ");//Imprime en pantalla el mensaje para que el usuario ingrese el tipo de tratamiento, la edad y los días.
   scanf("%d %d %d", &TRA, &EDA, &DIA);//Lee tres valores enteros introducidos por el usuario y los asigna a las variables TRA, EDA y DIA, respectivamente.
   switch (TRA)//Inicia una estructura de control switch que selecciona entre diferentes casos basándose en el valor de TRA.
   {
       case 1: COS = DIA * 2800; break;//Si TRA es igual a 1, el costo total (COS) se calcula como el número de días (DIA) multiplicado por 2800. Este valor podría representar el costo diario de un tipo de tratamiento específico.
       case 2: COS = DIA * 1950; break;//Si TRA es igual a 2, el costo total (COS) se calcula como el número de días (DIA) multiplicado por 1950.
       case 3: COS = DIA * 2500; break;//Si TRA es igual a 3, el costo total (COS) se calcula como el número de días (DIA) multiplicado por 2500.
       case 4: COS = DIA * 1150; break;//Si TRA es igual a 4, el costo total (COS) se calcula como el número de días (DIA) multiplicado por 1150.
       default: COS = -1; break;//Si TRA no coincide con ninguno de los valores especificados (1, 2, 3, o 4), se ejecuta el caso default, y se asigna -1 a COS. Esto indica que la clave del tratamiento es incorrecta y sirve como un mecanismo de manejo de errores para entradas no válidas.
   }
   if (COS != -1)//Comprueba si COS no es igual a -1 (lo que significa que TRA fue válido).
   {
       if (EDA >= 60)//Si la edad (EDA) es mayor o igual a 60.
          COS = COS * 0.72;//Aplica un descuento del 28% al costo (COS).
       else//
        if (EDA <= 25)//Si la edad (EDA) es menor o igual a 25 (y no mayor o igual a 60)
         COS = COS * 0.85;//Aplica un descuento del 15% al costo (COS).
       printf("\nClave tratamiento: %d\t Dias: %d\t Costo total: %8.2f", TRA, DIA, COS);//Imprime en pantalla el tipo de tratamiento, los días y el costo total con dos decimales.
   }
   else//Si COS es igual a -1 (lo que significa que TRA fue inválido),
      printf("\nLa clave del tratamiento es incorrecta");//imprime un mensaje de error indicando que la clave del tratamiento es incorrecta.

}
