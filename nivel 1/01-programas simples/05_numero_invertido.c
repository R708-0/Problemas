// Escriba un programa que pida al usuario un entero de tres dígitos, y entregue el número con los dígitos en orden inverso:
#include <stdio.h>
#include <string.h>

int main(void)
{
    // pedir el numero de 3 cifras
    int num;
    do
    {
        printf("dame un numero de tres cifras: ");
        scanf("%d", &num);

    } while (num < 100 || num > 999);

    int d1 = num / 100;
    int d2 = (num / 10) % 10;
    int d3 = num % 10;
    printf("%d\n", num);
    printf("%d", d3);
    printf("%d", d2);
    printf("%d", d1);
}