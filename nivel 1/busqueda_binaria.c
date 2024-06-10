#include <stdio.h>

void bubble(int array[], int size);
void show(int array[], int size);

int main(void)
{
    int array[] = {1, 2, 45, 6, 666, 777, 85, 9, 10, 13};
    int size = sizeof(array) / sizeof(array[0]);

    bubble(array, size);
    show(array, size);

    // busqueda binaria
    int inicio = 0;
    int final = size;

    int it = 13;
    int cont = 0;
    int mitad = (inicio + (final - inicio)) / 2;

    printf("medio: %d\n", array[mitad]);
    while (inicio <= final)
    {
        if (it == array[mitad])
        {
            cont += 1;
            printf("%d\n", cont);
        }
        else
        {
            inicio = mitad;
            printf("%d\n", inicio);
        }
    }
}

void bubble(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                int n = 0;
                n = array[j];
                array[j] = array[j + 1];
                array[j + 1] = n;
            }
        }
    }
}
void show(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d : ", array[i]);
    }
    printf("\n");
}