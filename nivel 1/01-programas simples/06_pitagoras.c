/*Escriba un programa que reciba como entrada las longitudes de los dos catetos a
 y b
 de un triángulo rectángulo, y que entregue como salida el largo de la hipotenusa c
 del triangulo, dado por el teorema de Pitágoras: c2=a2+b2
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    // pedir los catetos
    int a;
    int b;
    double h;
    printf("ingrese cateto a: ");
    scanf("%d", &a);
    printf("ingrese cateto b: ");
    scanf("%d", &b);
    // calcular hipotenusa
    h = sqrt(a * a + b * b);

    // imprimir valor
    printf("%.2f", h);
}