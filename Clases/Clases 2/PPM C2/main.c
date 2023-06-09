#include <stdio.h>
#include <stdlib.h>

// Variables configurables

#define SUELDO_NO_DEFINIDO 0
#define SUELDO_DE_LUJO 1
#define SUELDO_PRO 2
#define SUELDO_BAJO 3
#define SUELDO_MIN 4

#define VALOR_SUELDO_DE_LUJO 150000
#define VALOR_SUELDO_PRO 50000
#define VALOR_SUELDO_BAJO 25000
#define VALOR_SUELDO_MIN 0

#define IMP_DE_LUJO 0.25
#define IMP_PRO 0.1
#define IMP_BAJO 0.05
#define IMP_MIN 0.02
#define SALIR 0
#define CONTINUAR 1


int main()
{
    float sul = 0.0;
    int sw= 0;
    int menu= 0;

    printf("Calculo impuestos sobre el sueldo:\n");
    menu = CONTINUAR;

     while {menu}{



     }
    scanf ("%f", &sul);

    if (sul >= VALOR_SUELDO_DE_LUJO)
    {
        sw = SUELDO_DE_LUJO;
    }
    else if  (sul >= SUELDO_PRO)
    {
        sw = SUELDO_PRO;
    }
    else if (sul >= SUELDO_BAJO)
    {
        sw = SUELDO_BAJO;

    }
    else if (sul > VALOR_SUELDO_MIN)
    {
        sw = SUELDO_MIN;
    }
    else
    {
        sw = SUELDO_NO_DEFINIDO;
    }

    switch (sw)
    {
    case SUELDO_DE_LUJO:
        printf ("El impuesto a pagar  sobre de %7.2f peso es: %f", sul, sul * IMP_DE_LUJO);
        break;
    case SUELDO_PRO:
        printf ("El impuesto a pagar  sobre de %7.2f peso es: %f", sul, sul * IMP_PRO);
        break;
    case SUELDO_BAJO:
        printf ("El impuesto a pagar  sobre de %7.2f peso es: %f", sul, sul * IMP_BAJO);
        break;
    case SUELDO_MIN:
        printf ("El impuesto a pagar  sobre de %7.2f peso es: %f", sul, sul * IMP_MIN);
        break;
    default:
        printf("ERROR DE SUELDO, NO PUEDE SER MENOR O IGUAL A 0");
        break;
  }


    /* if (sul >= VALOR SUELDO_DE_LUJO)
    {
        printf ("El impuesto a pagar sobre su sueldo es de: %7.2f",sul, sul * 0.25);

    }

     if (sul < VALOR SUELDO_DE_LUJO && sul >= VALOR SUELDO_PRO)
    {
        printf ("El impuesto a pagar sobre su sueldo es de: %7.2f",sul, sul * 0.1);

    }

    if (sul < VALOR SUELDO_PRO && sul >= VALOR SUELDO_BAJO)
    {
        printf ("El impuesto a pagar sobre su sueldo es de: %7.2f",sul, sul * 0.05);

    }
     if (sul < VALOR SUELDO_MIN && sul > VALOR SUELDO_MIN)
    {
        printf ("El impuesto a pagar sobre su sueldo es de: %7.2f",sul, sul * 0.02);

    }

     if (sul <= 0.0)
    {
        printf ("ERROR DE SUELDO, NO PUEDE MENOR O IGUAL A 0");

    }
¨*/
    return 0;
    }


