#include <stdio.h>
#include <math.h>

void main(void)//Define la función principal del programa que no recibe argumentos y no devuelve un valor.
{
    int OP, T;//Declara dos variables enteras: OP (opción del cálculo) y T (valor entero).
    float RES;//Declara una variable de punto flotante llamada RES para almacenar el resultado del cálculo.
    printf("Ingrese la opcion del calculo y el valor entero: ");//Muestra el mensaje "Ingrese la opción del cálculo y el valor entero: " en la consola, solicitando al usuario que introduzca dos valores.
    scanf("%d %d", &OP, &T);//Lee dos valores enteros introducidos por el usuario y los almacena en las variables OP y T, respectivamente.
    switch (OP)//Inicia una estructura de control switch que evalúa la variable OP (opción del cálculo).
    {
        case 1: RES = T / 5;//Si OP es 1, asigna a RES el resultado de dividir T por 5.
          break;//Termina el caso case 1.
        case 2: RES = pow (T,T);//Si OP es 2 asigna a RES el resultado de elevar T a la potencia T usando la función pow.
        /* La funcion pow esta definida en la biclioteca math.h*/
            break;//
        case 3://Si OP es 3 o 4, ejecuta el siguiente bloque.
        case 4: RES = 6 * T/2;//Asigna a RES el resultado de multiplicar T por 6 y luego dividir por 2.
            break;//Termina los casos case 3 y case 4.
        default: RES = 1;//Caso por defecto si OP no coincide con ninguno de los valores anteriores (1, 2, 3, 4). Asigna a RES el valor 1.
            break;//Termina el caso default.
    }
    printf("\nResultado: %7.2f", RES);//Imprime el resultado del cálculo RES, formateado con un ancho total de 7 caracteres y 2 decimales, precedido por el mensaje "Resultado: ".
}
