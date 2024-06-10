// Escriba un programa que reciba como entrada dos o mas números, y los muestre ordenados de menor a mayor.
#include <stdio.h>

int main(void)
{
    // pedir la cartidad de numeros a ordenar
    int n;
    printf("cuantos numeros va a ingresar?: ");
    scanf("%d", &n);

    // declarar variables
    int numeros[n];
    int num = 0;

    // bucle para guardar los numeros en la matriz
    for (int i = 0; i < n; i++)
    {
        printf("numero %i: ", i + 1);
        scanf("%d", &numeros[i]);

        // bucle para ordenar los numeros
        for (int j = 0; j <= i; j++)
        {
            // si el numero nuevo es menor, se intercambian posiciones
            if (numeros[i] < numeros[j])
            {
                num = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = num;
            }
        }
    }

    // imprimir numeros
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numeros[i]);
    }
}