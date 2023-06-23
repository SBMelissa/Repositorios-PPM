#include <string.h>
#include <stdio.h>

struct alumno
{
    int Matricula;
    char Nombre [20];
    char Carrera[20];
    float Promedio;
    char Direccion[20];

};

void Lectura (struct alumno *);

void main (void)
{
    struct alumno a0= {120, "Maria", "Contabilidad", 8.9, "Queretaro"};
    struct alumno *a3, *a4, *a5, a6, a7;

    a3= &a0;
    a4= &a6;

    printf ("\n Ingresa la matricula del alumno 4: ");
    scanf("%d", &(*a4).Matricula);
    fflush(stdin);

    printf ("\n Ingresa la nombre del alumno 4: ");
    gets (a4->Nombre);

    printf ("\n Ingresa la carrera del alumno 4: ");
    gets ((*a4).Carrera);

    printf ("\n Ingresa el promedio del alumno 4: ");
    scanf("%f", &a4->Promedio);
    fflush(stdin);

    printf("Ingresa la direccion del alumno 4: ");
    gets(a4->Direccion);

    a5= &a7;
    Lectura (a5);

    printf("\nDatos del alumno 3\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a3 -> Matricula, a3 -> Nombre, a3 ->Carrera, a3 -> Promedio, a3 ->Direccion);

    printf("\nDatos del alumno 4\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a4 -> Matricula, a4 -> Nombre, a4 ->Carrera, a4 -> Promedio, a4 ->Direccion);

    printf("\nDatos del alumno 5\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a5 -> Matricula, a5 -> Nombre, a5 ->Carrera, a5 -> Promedio, a5 ->Direccion);

    printf("\nDatos del alumno 6\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a6 -> Matricula, a6 -> Nombre, a6 ->Carrera, a6 -> Promedio, a6 ->Direccion);
    }

    void Lectura (struct alumno *a)

    {
        printf ("\n Ingresa la matricula del alumno: ");
        scanf("%d", &(*a).Matricula);
        fflush(stdin);

        printf ("\n Ingresa el Nombre del alumno: ");
        gets(-> Nombre);
        flush(stdin);

        printf("Ingrese la carrera del alumno: ");
        gets((*a).Carrera);

        printf("Ingrese el promedio del alumno: ");
        scanf("%f", &a->Promedio);
        fflush(stdin);

        printf("Ingrese la dirección del alumno: ");
        gets (a-> Direccion);

    }



}
