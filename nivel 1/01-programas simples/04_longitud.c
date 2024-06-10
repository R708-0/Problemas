// Escriba un programa que convierta de centímetros a pulgadas. Una pulgada es igual a 2.54 centímetros.
#include <stdio.h>

int main(void)
{
    float cm;
    float plg;

    printf("Cuantos centimetros?: ");
    scanf("%f", &cm);
    plg += cm / 2.54;
    printf("son: %.2f pulgadas", plg);
}