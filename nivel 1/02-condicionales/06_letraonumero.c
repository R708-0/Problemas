/*Escriba un programa que determine si un caracter ingresado es letra, número, o ninguno de los dos.
En caso que sea letra, determine si es mayúscula o minúscula.*/
#include <stdio.h>

int main(void)
{
    //pedir caracter
    char c;
    printf("Ingrese un caracter: ");
    scanf("%c",&c);
    //condicional
    if (c >=65 && c <=90)
    {
        printf("Es letra mayuscula");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("Es letra minuscula");
    }
    
    else if (c >=48 && c <= 57)
    {
        printf("Es numero");
    }
    else
    {
        printf("No es letra ni numero");
    }
    
}