/*
Escriba un programa que pregunte al usuario la hora actual t del reloj y un número entero de horas h,
que indique qué hora marcará el reloj dentro de h horas:
*/

#include <stdio.h>

int main(void)
{
    // pedir hora actual y hora futura
    int hora;
    int futura;
    do
    {
        printf("hora actual (formato de 12hrs): ");
        scanf("%d", &hora);
    } while (hora > 12);

    printf("cuantas horas en el futuro?: ");
    scanf("%d", &futura);
    // calcular la hora en formato de 12 hrs
    int horaf = (hora + futura) % 12;

    // imprimir hora
    printf("dentro de %d hrs seran las: %d", futura, horaf);
}