#include <stdio.h>
/* Arreglo sin elementos repetidos.
El programa, al recibir como dato un arreglo unidimensional desordenado de N elementos, obtiene como salida ese mismo arreglo pero sin los elementos repetidos. */

void Lectura(int *, int);
void Imprime(int *, int);
void Elimina(int *, int *);

/* Observa que en el prototipo de Elimina, el segundo par�metro es por referencia. Esto, porque el tama�o del arreglo puede disminuir. */
void main(void)
{
    int TAM, ARRE[100];
    /* Se escribe un do-while para verificar que el tama�o del arreglo que se ingresa sea correcto. */
    do
    {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);
    Lectura(ARRE, TAM);
    Elimina(ARRE, &TAM);
    /* Observa que el tama�o del arreglo se pasa por referencia.*/
    Imprime(ARRE, TAM);
}
void Lectura(int A[], int T)
/* La funci�n Lectura se utiliza para leer un arreglo unidimensional de T elementos de tipo entero. */
{
    printf("\n");
    int I;
    for (I=0; I<T; I++)
    {
