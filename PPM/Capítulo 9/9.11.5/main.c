#include <stdio.h>

typedef struct
{
    int id;
    char nombre[20];
    int salario;
    float ventas;
    char departamento[20];
} empleado;

void escribe(FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "w+")) != NULL)
        escribe(ar);
    else
        printf("\nEl archivo no se puede abrir");
    fclose(ar);
}

void escribe(FILE *ap)
{
    empleado alu;
    int i = 0, r;
    printf("\n¿Desea ingresar informacion sobre empleados (Si-1 No-0): ");
    scanf("%d", &r);
    while (r)
    {
        i++;
        printf("Id del empleado %d: ", i);

        scanf("%d", &alu.id);
        printf("Nombre del empleado %d: ", i);

        fflush(stdin);
        gets(alu.nombre);
        printf("Salario del empleo %d: ", i);

        scanf("%d", &alu.salario);
        printf("Ventas del empleo %d: ", i);

        scanf("%f", &alu.ventas);
        fwrite(&alu, sizeof(empleado), 1, ap);

        printf("Departamento del empleado %d: ", i);
        fflush(stdin);
        gets(alu.nombre);

        printf("\n¿Desea ingresar informacion sobre mas empleados? (Si-1 No-0): ");
        scanf("%d", &r);
    }
}
