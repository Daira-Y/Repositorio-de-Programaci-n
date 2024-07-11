#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Alumno;
void mostrarMenu() {
    printf("Menu:\n");
    printf("1. Salir\n");
    printf("2. Leer desde disco\n");
    printf("3. Grabar dato\n");
}

void agregarAlumno(Alumno **alumnos, int *numAlumnos) {
    (*numAlumnos)++;
    *alumnos = realloc(*alumnos, (*numAlumnos) * sizeof(Alumno));

    printf("Ingrese nombre: ");
    scanf("%s", (*alumnos)[*numAlumnos - 1].nombre);
    printf("Ingrese edad: ");
    scanf("%d", &(*alumnos)[*numAlumnos - 1].edad);
    printf("Ingrese promedio: ");
    scanf("%f", &(*alumnos)[*numAlumnos - 1].promedio);
}

void grabarEnDisco(Alumno *alumnos, int numAlumnos, const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Error al abrir archivo");
        return;
    }
    fwrite(&numAlumnos, sizeof(int), 1, file);
    fwrite(alumnos, sizeof(Alumno), numAlumnos, file);
    fclose(file);
}

Alumno *leerDesdeDisco(int *numAlumnos, const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Error al abrir archivo");
        return NULL;
    }
    fread(numAlumnos, sizeof(int), 1, file);
    Alumno *alumnos = malloc((*numAlumnos) * sizeof(Alumno));
    fread(alumnos, sizeof(Alumno), *numAlumnos, file);
    fclose(file);
    return alumnos;
}

void imprimirAlumnos(Alumno *alumnos, int numAlumnos) {
    for (int i = 0; i < numAlumnos; i++) {
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", alumnos[i].nombre, alumnos[i].edad, alumnos[i].promedio);
    }
}
int main() {
    Alumno *alumnos = NULL;
    int numAlumnos = 0;
    int opcion;
    const char *filename = "alumnos.dat";

    do {
        mostrarMenu();
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Saliendo...\n");
                break;
            case 2: {
                int numLeidos;
                Alumno *leidos = leerDesdeDisco(&numLeidos, filename);
                if (leidos != NULL) {
                    imprimirAlumnos(leidos, numLeidos);
                    free(leidos);
                }
                break;
            }
            case 3: {
                char otroRegistro;
                do {
                    agregarAlumno(&alumnos, &numAlumnos);
                    printf("Desea agregar otro registro? (s/n): ");
                    scanf(" %c", &otroRegistro);
                } while (otroRegistro == 's');
                grabarEnDisco(alumnos, numAlumnos, filename);
                break;
            }
            default:
                printf("Opcion no valida\n");
                break;
        }
    } while (opcion != 1);

    free(alumnos);
    return 0;
}
