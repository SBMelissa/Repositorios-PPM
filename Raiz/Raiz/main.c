#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x = 0.0;
    double b = 0.0;
    int cnt = 0;


    printf("Calculo de raiz cuadrada\n");
    printf("\nIntroduce el numero a calcular: ");
    scanf("%lf", &x);
    b = x;

    while (!(b ==(x/b)))
    { printf ("\nIteracion num: %d ", cnt);

    b = 0.5 * ((x/b) + b);
    cnt ++;
    printf ("\nValor b: %lf",b);

    if (cnt > 100)
    {
        break;
    }

    }
    printf("Raiz cuadrada de %lf es: %lf", x, b);
    return 0;
    }

