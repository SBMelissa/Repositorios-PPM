#include <stdio.h>
#include <stdlib.h>

struct alumno
{
    int Matricula;
    char Nombre [20];
    char Carrera[20];
    float Promedio;
    char Direccion[20];
};

void main (void)
{
    struct alumno a1 = {120, "Maria", "Contabilidad", 8.9, "\nQuerétaro"}, a2, a3;
    /* Los campos de a1 reciben valores directamente. */

    char Nom [20], Car[20], Dir [20];
    int Mat;
    float Prom;
    /* Los campos de a2 reciben valores por medio de una lectura. */
    printf ("\nIngrese la matricula del alumno 2: ");
    scanf ("%d", &a2.Matricula);
    fflush (stdin);

    printf ("Ingresa el nombre del alumno 2: ");
    gets (a2.Nombre);

    printf ("Ingresa la carrera del alumno 2:");
    gets (a2.Carrera);

    printf ("Ingresa el promedio del alumno 2: ");
    scanf ("%f", &a2.Promedio);
    fflush (stdin);

    printf ("Ingresa la direccion del alumno 2: ");
    gets (a2.Direccion);

    /* Los campos de a3 reciben valores por medio de asignaciones. */

    printf ("\nIngresa la matricula del alumno 3:");
    scanf ("%d", &Mat);
    a3.Matricula = Mat;
    fflush (stdin);

    printf ("Ingresa el nombre del alumno 3: ");
    gets (Nom);
    strcpy(a3.Nombre, Nom);

    printf ("Ingresa la carrera del alumno 3:");
    gets (Car);
    strcpy(a3.Carrera, Car);

    printf ("Ingresa el promedio del alumno 3: ");
    scanf ("%f", &Prom);
    a3.Promedio = Prom;
    fflush (stdin);

    printf ("Ingresa la direccion del alumno 3: ");
    gets (Dir);
    strcpy(a3.Direccion, Dir);

    /* Impresion de datos a1 */


    printf ("\n Datos del alumno 1: ");
    printf ("%d\n", a1.Matricula);
    puts(a1.Nombre);
    puts (a1.Carrera);
    printf ("%.2f", a1.Promedio);
    puts(a1.Direccion);

    /* Impresion de datos a2*/
    printf ("\n Datos del alumno 2: ");
    printf ("%d\n", a2.Matricula);
    puts(a2.Nombre);
    puts (a2.Carrera);
    printf ("%.2f\n", a2.Promedio);
    puts(a2.Direccion);


    /* Datos de a3*/
    printf ("\n Datos del alumno 3: ");
    printf ("%d\ t %s\ t %s\ t %.2f \ t  %s", a3.Matricula, a3.Nombre, a3.Carrera, a3.Promedio, a3.Direccion);


}
