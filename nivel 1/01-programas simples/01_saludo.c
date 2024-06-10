// Escriba un programa que pida al usuario que escriba su nombre, y lo salude llamándolo por su nombre.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char nombre[] = "nombre";
    printf("Cual es su nombre mi pana?: ");
    scanf("%s", nombre);
    printf("hola, %s", nombre);
}