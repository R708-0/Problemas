#include <stdio.h>

int main(void)
{
    // pedir la fecha
    int fecha;
    printf("Ingrese un año: ");
    scanf("%d", &fecha);
    // condicion de nuevo calendario
    if (fecha > 1582)
    {
        if ((fecha % 100) == 0)
        {
            if ((fecha % 400) == 0)
            {
                printf("Es bisiesto");
            }
            else
            {
                printf("No es bisiesto");
            }
        }
        else
        {
            if ((fecha % 4) == 0)
            {
                printf("Es bisiesto");
            }
            else
            {
                printf("No es bisiesto");
            }
        }
    }
    else
    {
        if ((fecha % 4) == 0)
        {
            printf("Es bisiesto");
        }
        else
        {
            printf("No es bisiesto");
        }
    }
}