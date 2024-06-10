//Escriba un programa que pida al usuario dos palabras, y que indique cuál de ellas es la más larga y por cuántas letras lo es.

#include <stdio.h>
#include <string.h>

int main (void)
{
    //pedir palabras
    char a [20];
    char b [20];
    printf("Palabra 1: ");
    scanf("%s",&a);
    printf("Palabra 2: ");
    scanf("%s",&b);
    //calcular largo
    int n1 = strlen(a);
    int n2 = strlen(b);
    
    if (n1 > n2)
    {
        printf("%s tiene %d letra(s) mas que %s",a,n1-n2,b);
    }
    else if (n2 > n1)
    {
        printf("%s tiene %d letra(s) mas que %s",b,n2-n1,a);
    }
    else
    {
        printf("%s y % s tienen la misma cantidad de letras",a,b);
    }

}