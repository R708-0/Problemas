//Escriba un programa que entregue la edad del usuario a partir de su fecha de nacimiento:
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t fecha_actual;
    time(&fecha_actual);
    struct tm *info_fecha;

    info_fecha = localtime(&fecha_actual);
    
    int ano = info_fecha->tm_year + 1900;
    int mes = info_fecha->tm_mon + 1;
    int dia = info_fecha->tm_mday;

    int ano2;
    printf("Ingrese su año de nacimiento: ");
    scanf("%d",&ano2);
    
    if (ano2 > ano)
    {
        printf("Usted es un viajero del tiempo porque todavia no nace");
    }
    else
    {
        printf("usted tiene %d años\n", ano - ano2);
    }  
}