#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    // Declaración de variables enteras: VOT para almacenar el voto actual, C1-C5 para contar los votos de cada candidato, NU para contar los votos nulos y SVO para el total de votos
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;
    // Declaración de variables flotantes para almacenar los porcentajes de votos para cada candidato y los votos nulos
    float PO1, PO2, PO3, PO4, PO5, PON;
    // Imprime el mensaje para solicitar el primer voto
    printf("Ingrese el primer voto: ");
    // Lee el primer voto ingresado por el usuario
    scanf("%d", &VOT);
    // Bucle que continúa mientras VOT no sea 0
    while (VOT)
    {
        // Utiliza una estructura switch para determinar el voto ingresado y actualizar los contadores correspondientes
        switch(VOT)
        {
            // Incrementa el contador C1 si el voto es para el candidato 1
            case 1: C1++; break;
            // Incrementa el contador C2 si el voto es para el candidato 2
            case 2: C2++; break;
            // Incrementa el contador C3 si el voto es para el candidato 3
            case 3: C3++; break;
            // Incrementa el contador C4 si el voto es para el candidato 4
            case 4: C4++; break;
            // Incrementa el contador C5 si el voto es para el candidato 5
            case 5: C5++; break;
            // Incrementa el contador NU para votos nulos si el voto no corresponde a ningún candidato
            default: NU++; break;
        }
        // Solicita al usuario ingresar el siguiente voto o 0 para terminar
        printf("Ingrese el siguiente voto -0 para terminar-: ");
        // Lee el siguiente voto ingresado por el usuario
        scanf("%d", &VOT);
    }
    // Calcula el total de votos sumando los votos de cada candidato y los votos nulos
    SVO = C1 + C2 + C3 + C4 + C5 + NU;
    // Calcula el porcentaje de votos para cada candidato y para los votos nulos
    PO1 = ((float) C1 / SVO) * 100;
    PO2 = ((float) C2 / SVO) * 100;
    PO3 = ((float) C3 / SVO) * 100;
    PO4 = ((float) C4 / SVO) * 100;
    PO5 = ((float) C5 / SVO) * 100;
    PON = ((float) NU / SVO) * 100;
    // Imprime el total de votos
    printf("\nTotal de votos: %d", SVO);
    // Imprime el número de votos y el porcentaje correspondiente para cada candidato
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);
    // Imprime el número de votos nulos y el porcentaje correspondiente
    printf("\nNulos: %d votos -- Porcentaje: %5.2f", NU, PON);
}
