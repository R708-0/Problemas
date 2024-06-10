#include <stdio.h>
// Escriba un programa que entregue la parte decimal de un número real ingresado por el usuario.
int main(void)
{
    // pedir numero
    float num;
    printf("dame un numero con decimales: ");
    scanf("%f", &num);
    // sacar decimal
    int decimal = num / 1;
    float resultado = num - decimal;
    if (resultado < 0)
    {
        resultado *= -1;
    }
    // imprimir
    printf("%.2f\n", resultado);
}