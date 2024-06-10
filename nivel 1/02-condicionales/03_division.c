/*Escriba un programa que pida dos números enteros y que calcule la división, indicando si la división es exacta o no.*/

#include <stdio.h>

int main (void)
{
    int div,sor;
    printf("Dividendo: ");
    scanf("%d",&div);
    printf("Divisor: ");
    scanf("%d",&sor);

    int cociente = div / sor;
    int residuo = div % sor;

    if (residuo == 0)
    {
        printf("Es una division exacta.\n");
    }
    else
    {
        printf("No es una division exacta.\n");
    }
    
    printf("%d\n",cociente);
    printf("%d\n",residuo);
}