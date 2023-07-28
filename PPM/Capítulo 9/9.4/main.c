include <stdio.h>

/*El programa lee cadenas de caracteres de un archivo. */
void main(void)
{
    char cad[50];
    FILE *ap;
    if ((ap=fopen ("arc.txt", "r")) != NULL)
        /* Se abre el archivo para lectura y se verifica si se abrió correctamente. */
    {
        while (!feof(ap))
        {
            fgets(cad, 50, ap);
            puts(cad);
        fclose(ap);
    }
    else
        printf("No se puede abrir el archivo");
}
