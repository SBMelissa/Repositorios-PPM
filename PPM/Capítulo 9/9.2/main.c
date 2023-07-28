#include <stdio.h>

/*El programa lee caracteres de un archivo. */

void main(void)
{
    char p1;
    FILE *ar;
    if ((ar = fopen("arc.txt", "r")) != NULL)

    {
        while (!feof(ar))
        {
            p1 = fgetc(ar); /* Lee el caracter del archivo. */
            printf("%c",p1 );

            putchar(p1); /* Despliega el caracter en la pantalla. */
        }
        fclose(ar);
}
        else
            printf("No se puede abrir el archivo");
    }
