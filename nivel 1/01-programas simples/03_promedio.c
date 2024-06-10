//Escriba un programa que calcule el promedio de 4 notas ingresadas por el usuario:
#include <stdio.h>

int main()
{
    //variables
    float python;
    float sql;
    float java;
    float html;

    //inputs 
    printf("Nivel en python? (0-100): ");
    scanf("%f",&python);
    printf("Nivel en sql? (0-100): ");
    scanf("%f",&sql);
    printf("Nivel en java? (0-100): ");
    scanf("%f",&java);
    printf("Nivel en html? (0-100): ");
    scanf("%f",&html);
    //resultado
    float promedio = (python + sql + java + html)/4;
    printf("Tu nivel en programacion es: %.2f\n",promedio);
    
}