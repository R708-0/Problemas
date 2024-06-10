#include <stdio.h>
#include <math.h>

int main(void)
{
    float x, y, n;
    printf("numero con decimales: ");
    scanf("%f", &x);
    // la funcion modf separa la parte decimal del entero
    y = modf(x, &n);

    printf("%.2f", y);
}