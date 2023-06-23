#include <stdio.h>
#include <string.h>
/* Comercializadora farmac�utica.
El programa maneja informaci�n sobre ventas, inventario, reabastecimiento y nuevos productos de una comercializadora farmac�utica. */

typedef struct /* Declaraci�n de la estructura producto. */
{
    int clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;
void Lectura(producto *, int); /* Prototipos de funciones. */
void Ventas(producto *, int);
void Reabastecimiento(producto *, int);
void Nuevos_Productos(producto *, int *);
void Inventario(producto *, int);

void main(void)
{
    producto INV[100];
    /* Se declara un arreglo unidimensional de tipo estructura producto. */
    int TAM, OPE;
    do
    {
        printf("Ingrese el n�mero de productos: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 | | TAM < 1);
    /* Se verifica que el n�mero de productos ingresados sea correcto. */
    Lectura(INV, TAM);
    printf("\nIngrese operaci�n a realizar. \n\t\t1 � Ventas \n\t\t 2 � Reabastecimiento \n\t\t 3 - Nuevos Productos \n\t\t 4 � Inventario \n\t\t 0 - Salir: ");
    scanf("%d", &OPE);
    while (OPE)
    {
        switch (OPE)
        {
        case 1:
            Ventas(INV, TAM);
            break;
        case 2:
            Reabastecimiento(INV, TAM);
            break;
        case 3:
            Nuevos_Productos(INV, &TAM);
            /* Se pasa el par�metro por referencia, porque se puede modificar el n�mero de elementos del arreglo en la funci�n. */
            break;
        case 4:
            Inventario(INV, TAM);
            break;
        };
        printf("\nIngrese operaci�n a realizar. \n\t\t1 � Ventas \n\t\t 2 �Reabastecimiento\n\t\t 3 - Nuevos Productos \n\t\t 4 � Inventario \n\t\t 0 - Salir: ");
        scanf("%d", &OPE);
    }
}
void Lectura(producto A[], int T)
/* Esta funci�n se utiliza para leer un arreglo unidimensional de tipo estructura producto de T elementos. */
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nIngrese informaci�n del producto %d", I+1);
        printf("\n\tClave: ");
        scanf("%d", &A[I].clave);
        fflush(stdin);
