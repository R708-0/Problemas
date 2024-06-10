// Escriba un programa que determine si el número entero ingresado por el usuario es par o no.
#include <stdio.h>

int main(void)
{
    // ingresar num
    int n;
    printf("Ingrese el numero: ");
    scanf("%d", &n);
    // calcular
    int ni;
    ni = n % 2;
    // devolver
    if (ni == 0)
    {
        printf("El numero que ingreso es par");
    }
    else
    {
        printf("El numero que ingreso es impar");
    }
}