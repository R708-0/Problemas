/* Escriba un programa que reciba como entrada el radio de un círculo y 
    entregue como salida su perímetro y su área:                        */

#include <stdio.h>

int main(void)
{
    //variables
    float radio;
    const float pi = 3.1416;
    //pantalla
    printf("cuanto mide tu radio gordito?: ");
    scanf("%f",&radio);
    //operacion
    float perimetro = 2 * pi * radio;
    float area = 3.1416 * (radio * radio);
    //resultados
    printf("Tu perimetro es: %.1f\n", perimetro);
    printf("Tu area es: %.1f\n", area);
    printf("SOS UNA BALLENA JAJAJA");
    
}