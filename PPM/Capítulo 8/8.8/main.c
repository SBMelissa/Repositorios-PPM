#include <stdio.h>
#include <string.h>
/* Bienes ra�ces.
El programa maneja informaci�n sobre las propiedades que tiene una empresa de bienes ra�ces de la ciudad de Lima, Per�, tanto para venta como para renta. */

typedef struct /* Declaraci�n de la estructura ubicaci�n.*/
{
    char zona[20];
    char calle[20];
    char colo[20]; /* Colonia. */
} ubicacion;

typedef struct /* Declaraci�n de la estructura propiedades.*/
{
    char clave[5];
    float scu;
    float ste;
    char car[50];
    ubicacion ubi;
    float precio;
    char dispo; /* Disponibilidad. */
} propiedades;
void Lectura(propiedades, int);
void F1(propiedades *, int); /* Prototipos de funciones. */
void F2(propiedades *, int);
oid main(void)
{
    propiedades PROPIE[100];
    /* Se declara un arreglo unidimensional de tipo estructura propiedades. */
    int TAM;
    do
    {
        printf("Ingrese el n�mero de propiedades: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 | | TAM < 1);
    /* Se verifica que el tama�o del arreglo sea correcto. */
    Lectura(PROPIE, TAM);
    F1(PROPIE, TAM);
    F2(PROPIE, TAM);
}
void Lectura(propiedades A[], int T)
/* Esta funci�n se utiliza para leer un arreglo unidimensional de tipo estructura propiedades de T elementos. */
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\n\tIngrese datos de la propiedad %d", I + 1);
        printf("\nClave: ");
        fflush(stdin);
        gets(A[I].clave);
        printf("Superficie cubierta: ");
        scanf("%f", &A[I].scu);
        printf("Superficie terreno: ");
        scanf("%f", &A[I].ste);
        printf("Caracter�sticas: ");
        fflush(stdin);
        gets(A[I].car);
        printf("\tZona: ");
        fflush(stdin);
        gets(A[I].ubi.zona);
        printf("\tCalle: ");
        fflush(stdin);
        gets(A[I].ubi.calle);
        printf("\tColonia: ");
        fflush(stdin);
        gets(A[I].ubi.colo);
        printf("Precio: ");
        scanf("%f", &A[I].precio);
        printf("Disponibilidad (Venta-V Renta-R): ");
        scanf("%c", &A[I].dispo);
    }
}
