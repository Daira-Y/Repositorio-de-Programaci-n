#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    // Declaración de variables enteras: I (contador), MAT (matrícula del alumno actual), MAMAT (matrícula del alumno con mejor promedio), MEMAT (matrícula del alumno con peor promedio)
    int I, MAT, MAMAT, MEMAT;
    // Declaración de variables flotantes: SUM (suma de calificaciones), PRO (promedio de calificaciones), CAL (calificación actual)
    // MAPRO (mejor promedio encontrado), MEPRO (peor promedio encontrado)
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;
    // Imprime el mensaje para solicitar la matrícula del primer alumno
    printf("Ingrese la matricula del primer alumno:\t");
    // Lee la matrícula del primer alumno
    scanf("%d", &MAT);
    // Bucle que continúa mientras MAT no sea 0
    while (MAT)
    {
        // Inicializa la suma de calificaciones a 0
        SUM = 0;
        // Bucle para leer las 5 calificaciones del alumno actual
        for (I = 1; I <= 5; I++)
        {
            // Solicita la calificación del alumno
            printf("\tIngrese la calificacion del alumno: ", I);
            // Lee la calificación ingresada por el usuario
            scanf("%f", &CAL);
            // Suma la calificación a SUM
            SUM += CAL;
        }
        // Calcula el promedio de las calificaciones
        PRO = SUM / 5;
        // Imprime la matrícula y el promedio del alumno actual
        printf("\nMatricula:%d\tPromedio:%5.2f", MAT, PRO);
        // Si el promedio actual es mayor que el mejor promedio encontrado, actualiza MAPRO y MAMAT
        if (PRO > MAPRO)
        {
            MAPRO = PRO;
            MAMAT = MAT;
        }
        // Si el promedio actual es menor que el peor promedio encontrado, actualiza MEPRO y MEMAT
        if (PRO < MEPRO)
        {
            MEPRO = PRO;
            MEMAT = MAT;
        }
        // Solicita la matrícula del siguiente alumno
        printf("\n\nIngrese la matricula del siguiente alumno: ");
        // Lee la matrícula del siguiente alumno
        scanf("%d", &MAT);
    }
    // Imprime la matrícula y el promedio del alumno con el mejor promedio
    printf("\n\nAlumno con mejor Promedio:\t%d\t\t%5.2f", MAMAT, MAPRO);
    // Imprime la matrícula y el promedio del alumno con el peor promedio
    printf("\n\nAlumno con peor Promedio:\t%d\t\t%5.2f", MEMAT, MEPRO);
}
